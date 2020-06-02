#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include"fun.h"
int main(void) {
 SStudent s;
 if(Input1("in.txt",&s)) printf("Error, empty file");
 if(Output1("out.txt",&s)) printf("Error");
 return 0;
}

int Output1(const char *sf,SStudent *s) {
 FILE *f;
 f=fopen(sf,"w");
 if(f==NULL) return -1;
 fprintf(f,"%d %s: %f\n",s->group,s->name,s->rating);
 fclose(f);
 return 0;
}

int Input1(const char *sf, SStudent *s) {
 char str[256], *ss, *sss; FILE *f; int n, l;
 f=fopen(sf, "r");
 if(f==NULL) return -1;
 if(fgets(str,512,f)==NULL) return -2;
 sscanf(str,"%d%n",&s->group,&l);
 ss=str+l; while(isspace(*ss))ss++;
 sscanf(ss,"%f%n",&s->rating,&l);
 ss=ss+l; while(isspace(*ss))ss++;
 if((sss=strchr(str,'\n'))!=NULL)*sss='\0';
 strcpy(s->name,ss);
 fclose(f);
 return 0;
}


