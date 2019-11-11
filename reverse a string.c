#include<stdio.h>

int Hello(char sentence[])
{
    int ln = strlen(sentence);
    int i,count = 0;
    for(i=0;i<ln-1;i++){
        if(sentence[i]==' '){
            count++;
        }
    }
}
int main()
{
    char str[100];

    gets(str);

    int ln = strlen(str);
    int i,count = 0;
    for(i=0;i<=ln;i++){
        if(str[i]==' ' || str[i]=='\n'){
            count++;
        }
    }
    printf("%d\n",count);
    //printf("%d\n");

   // int cnt = Hello(str);
    //printf("%d\n",cnt);


    return 0;
}
