// Write a C program to copy one string to another string.
#include<stdio.h>
#include<stdlib.h>
char *stringcopy(char str1[],int n)
{
    int i;
    char* str2=(char*)(malloc(n*sizeof(char)));
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    return str2;
}
int main()
{
    char s1[1000];
    printf("Enter the string= ");
    gets(s1);
    char *s2=stringcopy(s1,1000);
    printf("String 1 = %s\n", s1);
    printf("String 2 = %s", s2);
    return 0;
}
// Output
// Enter the string= Shobhit Choudhary
// String 1 = Shobhit Choudhary
// String 2 = Shobhit Choudhary