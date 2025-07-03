#include<stdio.h>
#include<string.h>

void salt(char []);
int main(){
    char pass [100];
    scanf("%s" ,pass);   
   salt(pass);
    return 0;
}
void salt(char pass[]){
    char npass [200];
    strcpy (npass,pass);
    char salt [] = "123";
    strcat(npass,salt);

    puts(npass);
    return ;
}
