//Write a C program to convert lowercase string to uppercase.
#include<stdio.h>
#include<stdlib.h>
int* convertupper(char s[],int n)
{
    int i;
    *s=(char*)(malloc(sizeof(char)*n));
    for (i = 0; s[i]!='\0'; i++) 
    {
      if(s[i] >= 'a' && s[i] <= 'z') 
      {
         s[i] = s[i] -32;
      }
    }
   return s;
}
int main() 
{
   char s[100];
   printf("Enter a string=");
   gets(s);
   char* str=convertupper(s,100);
   printf("String in Upper Case = %s", str);
   return 0;
}
// Output
// Enter a string=shobhit
// String in Upper Case = SHOBHIT