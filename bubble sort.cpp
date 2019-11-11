#include<stdio.h>
#include<string.h>

int main()
{
    int character[25];
    char str[100];
    gets(str);
    int j;
    for(j=0;j<26;j++){
        character[j]=0;
    }
    int ln = strlen(str);
    int i;
    for(i=0;i<ln;i++){
            if(str[i]>='a' && str[i]<='z'){
                character[str[i]-'a']++;
                printf("%c -> %d\n",str[i],str[i]-'a');
            }

    }
    printf("%d",character[0]);

    return 0;
}
