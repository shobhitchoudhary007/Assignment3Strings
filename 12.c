// Write a C program to count total number of words in a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* wordcount(char str[],int n)
{
    int i=0,word=1;
    *str=(char*)(malloc(sizeof(char)*n));
    while(str[i]!='\0')
    {
        if(str[i]>='a' && str[i]<='z' || str[i]>='A' &&  str[i]<='Z')
        {
            word++;
        }
    i++;
    }
    return word;
}
int main()
{
    int n;
    char str[1000];
    printf("Input the string=");
    fgets(str, n, stdin);
    char* c=wordcount(str,n);
    printf("Total number of words in the string is=%d",c);
}
// Output
// Input the string=shobhit
// Total number of words in the string is=7