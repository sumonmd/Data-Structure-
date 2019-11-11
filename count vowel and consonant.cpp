#include<stdio.h>

int main()
{
    char str[1002];

    gets(str);
    int i,j;
    for(i=0;i<=str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            printf("%c",str[i]);
        }
    }
    printf("\n");
    for(i=0;i<=str[i]!='\0';i++){
        if(str[i]!='a'&& str[i]!='e'&& str[i]!='i'&& str[i]!='o' && str[i]!='u'){
            printf("%c",str[i]);
        }
    }

    return 0;
}
