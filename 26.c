// Write a C program to remove all repeated characters from a given string.
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
int* removeDuplicateOccurence(char str[],char ch,int n)
{
    int i,j,k,index=0;
    *str=(char*)(malloc(sizeof(char)*n));
    for(i = 0; i < n; i++)
  	{
  		for(j = i + 1; str[j] != '\0'; j++)
  		{
  			if(str[j] == str[i])  
			{
  				for(k = j; str[k] != '\0'; k++)
				{
					str[k] = str[k + 1];
				}
 			}
		}
	}
	printf("After remove duplicate occurrence '%c' = %s ", ch, str);
}
int main()
{
    char str[50], key;
    printf("Enter the string\n");
    gets(str);
    printf("Enter character to be remove\n");
    scanf(" %c", &key);
    int* n=length(str);
    int* m=removeDuplicateOccurence(str,key,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be remove
// h
// After remove duplicate occurrence 'h' = shobit