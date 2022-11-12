// Write a C program to remove all occurrences of a character from string.
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
int* removealloccurence(char str[],char ch,int n)
{
    int i,j,index=0;
    *str=(char*)(malloc(sizeof(char)*n));
    for(i = 0; i < n; i++)
  	{
  		if(str[i] == ch)  
		{
  			for(j = i; j < n; j++)
			{
				str[j] = str[j + 1];
			}
			n--;
			i--;	
 		}
	}
	printf("After remove all occurrence '%c' = %s ", ch, str);
}
int main()
{
    char str[50], key;
    printf("Enter the string\n");
    gets(str);
    printf("Enter character to be remove\n");
    scanf(" %c", &key);
    int* n=length(str);
    int* m=removealloccurence(str,key,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be remove
// h
// After remove all occurrence 'h' = sobit 