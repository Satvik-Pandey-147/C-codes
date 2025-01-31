#include <stdio.h>
#include <string.h>

void main()
{
    char s[100],a,b[100];
    printf("enter character\n");
    scanf("%c",&a);
    printf("%c\n",a);
    scanf("%s",&b);
    printf("%s",b);
    while(getchar()!='\n');
    printf("enter a string\n");
    fgets(s, sizeof(s),stdin);

    for(int i=0;i<strlen(s);i++)
    {
        if((int)(s[i])==32)
        {
            printf(" ");
        }
        else
            fprintf(stdout,"%c",s[i]);
    }


//     fgets(stdin, "%s", s);
//     s[strcspn(s, "\n")] = '\0';
//     fprintf(stdout, s);






}