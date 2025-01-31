#include<stdio.h>
#include<stdlib.h>

void print_file(FILE *ifp)
{
    char c;
    rewind(ifp);
    while((c=getc(ifp))!=EOF)
        putc(c,stdout);
}

void double_space(FILE *ifp,FILE *ofp)
{
    char c;
    rewind(ifp);
    while((c=getc(ifp))!=EOF)
    {
        putc(c,ofp);
        if(c=='\n')
        {
            putc('\n',ofp);
        }
    }
}

int main(int argc, char *argv[])
{
    FILE *ifp,*ofp;
    ifp=fopen("myhw","r+");
    ofp=fopen("myhw2","w+");
    printf("my file as read \n\n");
    print_file(ifp);
    printf("\n");
    double_space(ifp,ofp);
    printf("my file is double spaced as \n\n");
    print_file(ofp);
    printf("\n\n");
    fclose(ifp);
    fclose(ofp);

}