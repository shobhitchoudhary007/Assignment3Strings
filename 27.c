// Write a C program to replace first occurrence of a character with another in a string.
#include<stdio.h>
#include<string.h>
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
int* replaceOccurence(char str[],char ch,char new,int n)
{
    int i;
    *str=(char*)(malloc(sizeof(char)*n));
    for(i = 0; i<n ; i++)
  	{
  		if(str[i] == ch)  
		{
  			str[i] = new;
  			break;
 		}
	}
	printf("\nAfter replace occurrence %c to %c = %s ", ch,new, str);
}
int main()
{
    char str[50], key,new;
    printf("Enter the string\n");
    gets(str);
    printf("Enter character to be remove\n");
    scanf(" %c", &key);
    printf("Enter the character for replace");
    scanf("%c",&new);
    int* n=length(str);
    int* m=replaceOccurence(str,key,new,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be remove
// h
// Enter the character for replace
// After replace occurrence h to 
//  = sobhit 