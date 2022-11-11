// Write a C program to find length of a string.
#include<stdio.h>
#include<stdlib.h>
int length(char s[])
{
    int i,len=0;
    while (s[len] != '\0')
    {
        len++;
    }
    return len;
}
int main() 
{ 
    int i,len;
    char string[100];
    printf("Enter the string = ");
    gets(string);
    len=length(string);
    printf("Length of string is = %d",len);
    return 0;
}
// Output
// Enter the string = Shobhit Choudhary
// Length of string is = 17