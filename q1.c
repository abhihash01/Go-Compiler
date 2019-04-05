#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define TableLength 30

int row=1,col;
char ca,cb,buf[10];int i=0;
FILE *fp,*fout;

char *keywords[]={"break","default","func","interface","select","case","defer","go","map","struct","chan","else","goto","package","switch","const","fallthrough","if","range","type","continue","for","import","return","var"};
char *datatypes[]={"bool","byte","complex64","complex128","float32","float64","int","int8","int16","int32","int64","rune","uint","uint8","uint16","uint32","uint64"};

int sizes[]={1,1,8,16,4,8,8,1,2,4,8,4,8,1,2,4,8};
int recDTindex = 0;
int globalScope = 1;



typedef struct token{
	char name[10];
	char type[10];
	int size;
	char scope;
	int nargs;
	char args[20];
	char returnType[10];
}token;

token te[5];
int ct=0;
int i;
int sizeArr=1;

struct ListElement{
	token tok;
	struct ListElement *next;
};

struct ListElement *TABLE[TableLength];

void Initialize(){
	for( i=0;i<TableLength;i++){TABLE[i] = NULL;}
}

int HASH(char *str){
	int x=0;
	for( i=0;str[i]!='\0';i++) x += str[i];
	x %= TableLength;
	return x;
}

int SEARCH(char *str){
	int val = HASH(str);
	struct ListElement * ele= TABLE[val];
	while(ele!=NULL){
	if(strcmp(ele->tok.name,str)==0) break;
	ele = ele->next;
	}
	if(ele == NULL) return 0;
	return 1;
}

void INSERT(token tk){
	if(SEARCH(tk.name)==1){return;}
	int val = HASH(tk.name);
	struct ListElement* cur = (struct ListElement*)malloc(sizeof(struct ListElement));
	cur->tok = tk;
	cur->next = NULL;
	if(TABLE[val]==NULL){
	TABLE[val] = cur;
	}
	else{
	struct ListElement * ele= TABLE[val];
	while(ele->next!=NULL){
	ele = ele->next;
	}
	ele->next = cur;}
}

int getVal(char s[]){
	int res = 0;
	for( i=0;s[i]!='\0';i++){
		res *= 10;
		res += s[i]-'0';
	}
	return res;
}

int getType(char buf[],int len){
     if(strcmp(buf,"package")==0)
     {
         while(ca != '\n') ca = getc(fp);
         return 0;
     }
	for( i=0;i<25;i++) {if(strcmp(buf,keywords[i])==0) return 0;}
	for( i=0;i<17;i++) {if(strcmp(buf,datatypes[i])==0){
            printf("GGG %s",buf);
		recDTindex = i;
		return 1;
	}
	}

	buf[len] = '\0';
	if(SEARCH(buf)) return 4;

	int i;
	for(i=0;i<len;i++) if(!isdigit(buf[i])) break;
	if(i==len) return 2;

	return 3;
}

void getArguments(token *t){
	token temp[10];
	int ti = 0,no_of_args=0;
	i=0;
	while(ca!=')'){


	ca = getc(fp);
	if(isalnum(ca) || ca == '_'){buf[i++] = ca;col++;}
	else{
			buf[i] = '\0';
    printf("buffer =%s   ",buf);
			int type = getType(buf,i);

			if(type == 3||ca=='['){
                    printf("inside type=3");
                    no_of_args++;

					strcpy(te[ct].name,buf);
					strcpy(te[ct].returnType,"NONE");
					te[ct].scope = 'L';
					if(ca == '['){
						char arrsize[10]; int ai = 0;
						ca = getc(fp);
						while(ca!=']'){
							arrsize[ai++] = ca;
							ca = getc(fp);
						}
						arrsize[ai] = '\0';
						 sizeArr = getVal(arrsize);
                        printf("size is%d",sizeArr);
					}
					strcpy(te[ct].args,"NA");
					te[ct].nargs = 0;
					ct++;
					i=0;
					}
					if(type == 1){
					    printf("inside type=1");
					    printf("ct=%d ",ct);
                    int z;
			    for(z=0;z<ct;z++){
                        strcat(t->args,strcat(te[z].name,","));
                    strcpy(te[z].type,datatypes[recDTindex]);
					te[z].size = sizes[recDTindex]*sizeArr;
                INSERT(te[z]);
                i=0;
			}
			printf("done insertion");

			ct=0;
			sizeArr=1;
			}
			memset(buf,0,sizeof(buf));
		}
		printf("this is %c",ca);

	}
	memset(buf,0,sizeof(buf));
	printf("afff");
	ca = getc(fp);
	i=0;
	while(ca!='\n' && ca!='{'){
	if(isalnum(ca) || ca == '_'){buf[i++] = ca;col++; 		printf("buf %s\n",buf);}
	ca=getc(fp);
	}
	int type = getType(buf,i);

    strcpy(t->returnType,datatypes[recDTindex]);

	t->nargs=no_of_args;
	INSERT(*t);

}

int getNextToken(){
	ca = fgetc(fp);
	if (fp == NULL){printf("Cannot open file \n");exit(0);}
	while(ca!=EOF){
		if (ca=='/'){
			cb = getc(fp);
			if (cb == '/'){
				while(ca != '\n') ca = getc(fp);
				row--;
			}
			else if (cb == '*'){
				do{
				while(ca != '*')
				ca = getc(fp);
				ca = getc(fp);
				}while (ca != '/');
				row--;
			}
			else{
				buf[i++]=ca;
				buf[i++]=cb;
				col += 2;
			}
		}
		else if(ca == '#' && col == 1){
			while(ca != '\n') ca = getc(fp);
			row--;
		}
		else if(ca=='\"'){
			buf[i++]=ca;
			ca = getc(fp);
			while(ca!='\"'){
				buf[i++]=ca;
				ca = getc(fp);
			}
			buf[i++] = '\"';
			buf[i++] = '\0';
			fprintf(fout,"<%s , %d , %d , string literal >\n",buf,row,col);
			col++;
			i=0;
			return 1;
		}
		else if(isalnum(ca) || ca == '_'){buf[i++] = ca;col++;}
		else{
			buf[i] = '\0';
			if(ca=='}')
            {
                globalScope = 1;
            }
			int type = getType(buf,i);
			    printf("type= %d",type);

			    printf("rindex= %d",recDTindex);

            printf("at %s\n",buf);
            printf("GHJ%c\n",ca);

			if(type == 3||ca=='['){
				if(ca == '('){
        printf("ct=%d",ct);
					token te1;
					strcpy(te1.name,buf);

					strcpy(te1.type,"func");
					te1.size = -1;
					te1.scope = 'G';
					strcpy(te1.args,"");
					te1.nargs = 0;
					globalScope = 0;
					printf("callign getargs");
					getArguments(&te1);
				}else{

					strcpy(te[ct].name,buf);
					strcpy(te[ct].returnType,"NONE");

					if(globalScope) te[ct].scope = 'G'; else te[ct].scope = 'L';
					if(ca == '['){
                            printf("inside [");
						char arrsize[10]; int ai = 0;
						ca = getc(fp);
						while(ca!=']'){
							arrsize[ai++] = ca;
							ca = getc(fp);
						}
						arrsize[ai] = '\0';
						 sizeArr = getVal(arrsize);
                        printf("size is%d",sizeArr);
					}
					strcpy(te[ct].args,"NA");
					te[ct].nargs = 0;
					ct++;

				}
			}
			if(type == 1){
                    int z;
			    for(z=0;z<ct;z++){
                    strcpy(te[z].type,datatypes[recDTindex]);
					te[z].size = sizes[recDTindex]*sizeArr;
                INSERT(te[z]);
			}
			ct=0;
			sizeArr=1;
			}
			        printf("ct=%d",ct);



			if(ca=='\n'){row++;col = 1;}
			i=0;
			return 1;
		}
		if(ca == '\n'){row++;col = 1;}
		ca = fgetc(fp);
	}
	if(ca==EOF) return 0;
	return 1;
}

void printSymbolTable(){
	printf("\nName   Type   Size   Scope   Arguments        NArgs   ReturnType\n");
	for( i=0;i<TableLength;i++){
		struct ListElement *e = TABLE[i];
		while(e!=NULL){
		token t = e->tok;
		printf("%s\t%s\t%d\t%c\t%s\t\%d\t%s\n",t.name,t.type,t.size,t.scope,t.args,t.nargs,t.returnType);
		e = e->next;
		}
	}
}


int main(){
	fp=fopen("qin.c","r");
	fout = fopen("output.c","w");
	col = 1;
	Initialize();
	while(getNextToken());
	printSymbolTable();
	return 0;
}

