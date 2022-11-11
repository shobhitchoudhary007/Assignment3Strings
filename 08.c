// Write a C program to toggle case of each character of a string.
#include<stdio.h>
#include<stdlib.h>
int* toggle(char s[],int n)
{
    int i;
    *s=(char*)(malloc(sizeof(char)*n));
    for(i=0;s[i];i++)  
    {
        if(s[i]>=65 && s[i]<=90)
        {
         s[i]=s[i]+32;
        }
        else if(s[i]>=97 && s[i]<=122)
        {
         s[i]=s[i]-32;
        }
 	}
 	return s;
}
int main()
{
    char s[1000];  
    printf("Enter  the string : ");
    gets(s);
    char* str=toggle(s,1000);
    printf("string in togglecase ='%s'\n",str);
    return 0;
}
// Output
// Enter  the string : shobhit CHOUDHARY
// string in togglecase ='SHOBHIT choudhary'