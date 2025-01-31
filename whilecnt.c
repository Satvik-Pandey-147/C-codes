#include <stdio.h>
void main()
{
    int blanks=0,digits = 0 , letters=0, others=0;
    int c;
    while ((c=getchar())!=EOF)
    {
        if(c==" ")
        ++blanks;
        else if(c>="0"&& c<="9")
        ++digits;
        else if(c>='a'&&c<='z'||c>='A'&&c<='Z')
        ++letters;
        else
        ++others;
    }
    printf("letters=%d \t blanks =%d \t digits = %d \t otehrs =%d \n", letters,blanks,digits,others);
}