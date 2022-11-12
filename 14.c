// Write a C program to check whether a string is palindrome or not.
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
int* palindrome(char str[],int n)
{
    int i,index=0;
    for(i = 0; i < n; i++)
	{
		if(str[i] != str[n-i-1])
		{
			index = 1;
			break;	
		} 
	}
	if(index == 0)
	{
		printf("%s is a palindrome string", str);
	}
	else
	{
		printf("%s is not Palindrome string", str);
	}
}
int main()
{
    char str[50], key,new;
    printf("Enter the string\n");
    gets(str);
    int* n=length(str);
    int* m=palindrome(str,n);
    return 0;
}
// Output
// Enter the string
// nitin
// nitin is a palindrome string