// Write a C program to find reverse of a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char* reverse(char s[],int n)
{
   int i;
   char temp;
   *s=(char*)(malloc(sizeof(char)*n));
   for(i=0;i<n/2;i++)  
    {
    	temp=s[i];
    	s[i]=s[n-i-1];
    	s[n-i-1]=temp;
 	} 
 	return s;
}
int main()
{
    char s[7];
    printf("Enter the string=");
    gets(s);
    char* r=reverse(s,7);
    printf("After reverse = %s\n",r);
    return 0;
}
// Output
// Enter the string=shobhit
// After reverse = tihbohs