// Write a C program to find total number of alphabets, digits or special character in a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* count(char s[],int n)
{
    int i,alphabets=0,digits=0,specialcharacters=0;
    *s=(char*)(malloc(sizeof(char)*n));
    for(i=0;s[i];i++)  
    {
        if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122) )
        {
          alphabets++;
        }
        else if(s[i]>=48 && s[i]<=57)
        {
         digits++;
        }
        else
        {
         specialcharacters++;
        }
 	}
 	printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Special characters = %d",specialcharacters);
}
int main()
{
    char s[1000];
    printf("Enter  the string=");
    gets(s);
    int* c=count(s,1000);
    return 0;
}
// Output
// Enter  the string=shobhit
// Alphabets = 6
// Digits = 0
// Special characters = 1