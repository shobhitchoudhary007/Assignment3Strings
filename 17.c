// Write a C program to find last occurrence of a character in a given string.
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
int* lastoccurence(char str[],char ch,int n)
{
    int i, pos = -1;
    for(i = 0; i < n; i++)
  	{
  		if(str[i] == ch)  
		{
  			pos=i;
 		}
	}
    if(pos == -1)
  	{
  		printf("Not found the character '%c' ", ch);
	}
	else
	{
		printf("Last occurrence %c at position %d ", ch, pos + 1);
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
    int* m=lastoccurence(str,key,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be searched
// o
// Last occurrence o at position 3