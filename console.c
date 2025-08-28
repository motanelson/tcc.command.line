#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
    char *s="\033c\033[43;30m\ncommand line cmd...\n";
    int nn=0;
    char sss[4096];
    char *ss=sss;
    nn=0xe020;
    
    printf("%s",s); 
    while (ss[0]!='\n'){
        ss=fgets(sss,4095,stdin);
        if(ss[0]=='\n'){
            break;
        }else{
            nn=strlen(ss);
            ss[nn-1]=0;
            system(ss);
        }
    }

}
