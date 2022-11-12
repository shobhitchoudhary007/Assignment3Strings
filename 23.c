// Write a C program to remove first occurrence of a character from string.
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
int* removefirstoccurence(char str[],char ch,int n)
{
    int i, index=0;
    *str=(char*)(malloc(sizeof(char)*n));
    for(i = 0; i < n; i++)
  	{
  		if(str[i] == ch)  
		{
  			index = i;
  			break;
 		}
	}
    if(index != -1)
  	{ 		
  		i = index;
	  	while(i < n)
  		{
  			str[i] = str[i + 1];
			i++;  
		}
	}
	printf("After remove first occurrence '%c' = %s ", ch, str);
}
int main()
{
    char str[50], key;
    printf("Enter the string\n");
    gets(str);
    printf("Enter character to be remove\n");
    scanf(" %c", &key);
    int* n=length(str);
    int* m=removefirstoccurence(str,key,n);
    return 0;
}
// Output
// Enter the string
// shobhit
// Enter character to be remove
// h
// After remove first occurrence 'h' = sobhit 