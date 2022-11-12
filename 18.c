// Write a C program to search all occurrences of a character in given string.
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
int* countoccurence(char str[],char ch,int n)
{
    int i, flag = 0;
    for(i = 0; i < n; i++)
  	{
  		if(str[i] == ch)  
		{
  			flag++;
  			printf("\nOccurrence %c at position %d ", ch, i + 1);
 		}
	}
    if(flag == 0)
  	{
  		printf("Not found the character '%c' ", ch);
	}
}
int main()
{
    char str[50], key;
    printf("Enter the string\n");
    gets(str);
    printf("Enter character to be searched\n");
    scanf(" %c", &key);
    int* n=length(str);
    int* m=countoccurence(str,key,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be searched
// h
// Occurrence h at position 2 
// Occurrence h at position 5 