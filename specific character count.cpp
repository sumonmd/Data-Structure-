#include<stdio.h>
#include<string.h>

int main()
{
    int character[26];
    char str[100];
    int j;
    for(j=0;j<26;j++){
        character[j]=0;
    }
    gets(str);

    int ln = strlen(str);
    int i;
    for(i=0;i<ln;i++){
            if(str[i]>='a' && str[i]<='z'){
                character[str[i]-'a']++;
            }

    }
    for(int i=0;i<26;i++){
            if(character[i]!=0){
                printf("%c = %d\n",'a'+i,character[i]);
            }

    }
   // printf("%d",character[0]);

    return 0;
}
