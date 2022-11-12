// Write a C program to count occurrences of a character in given string.
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
int* firstoccurence(char str[],char ch,int n)
{
    int i, count=0;
    
    for(i = 0; i < n; i++)
  	{
  		if(str[i] == ch)  
		{
  			count++;
 		}
	}
    if(count == 0)
  	{
  		printf("Not found the character '%c' ", ch);
	}
	else
	{
		printf("Counting of occurrence %c = %d times ", ch, count);
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
    int* m=firstoccurence(str,key,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be searched
// h
// Counting of occurrence h = 2 times 