#include<stdio.h>

void reverse(char word[])
{
    int ln = strlen(word);
    int i;
    for(i=ln-1;i>=0;i--){
        printf("%c",word[i]);
    }
    printf(" ");
}


int main()
{
    char str[100],word[100];
    gets(str);
    int ln = strlen(str);

    int i,j,k;
    for(i=0,j=0;i<=ln;i++){
        if(str[i]!=' ' && str[i]!='\0'){
            word[j]=str[i];
            j++;
        }
        else if(j>0){
                word[j]='\0';
                reverse(word);
                j=0;
                //printf("yes");
        }
    }



    return 0;
}
