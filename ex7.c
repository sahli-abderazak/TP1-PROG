#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int Long_ch(char *ch)
{
    int l=0;
    while((*ch)!='\0')
    {
        l++;
        ch++;
    }
    return l;

}
char* miroir(char *src)
{

    char *p=src+Long_ch(src)-1;
    char *ch1;
    int l=Long_ch(src);
    ch1=malloc((l+1)*sizeof(char));
    char *p1=ch1;
    for(;p>=src;p--)
    {
        *p1=*p;
        p1++;

    }
   *p1='\0';
    return ch1;
}
void majuscules( char *src,char *dest )
{

    char *p;
    for(p=src;p<src+strlen(src);p++)
    {
        *dest=toupper(*p);
        dest++;
    }
    *dest='\0';
}
int estPrefixe(char* pre, char* s) {

    if (lenPre > lenS) { // le préfixe est plus long que la chaîne
        return 0; // préfixe ne peut pas être contenu dans la chaîne
    }
    int i = 0;
    for (i = 0; i < lenPre; i++) {
        if (pre[i] != s[i]) {
            return 0; // préfixe ne correspond pas au début de la chaîne
        }
    }
    return 1; // préfixe correspond au début de la chaîne
}
int main()
{
    int l;
    char *dest;
    char *ch ="bonjour";
    char *src ="bonjour";
    char *ch1;
    l=Long_ch(ch);
    printf("la longur est %d",l);
    ch1=miroir(src);
    printf("\n");
    printf("%s",ch1);
     printf("\n");
    dest=malloc((l+1)*sizeof(char));
    majuscules(src,dest);
    printf("%s",dest);

}
