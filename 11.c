// Write a C program to count total number of vowels and consonants in a string.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int* count(char s[],int n)
{
    int i,vowels=0,consonants=0;
    *s=(char*)(malloc(sizeof(char)*n));
    for(i=0;s[i];i++)  
    {
    	if((s[i]>=65 && s[i]<=90)|| (s[i]>=97 && s[i]<=122))
    	{
            if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
            {
		      vowels++;
            }
            else
            {
             consonants++;
            }
        }
 
 	}
    printf("vowels = %d\n",vowels);
    printf("consonants = %d\n",consonants);
}
int main()
{
    char s[1000];  
    printf("Enter  the string : ");
    gets(s);
    char* c=count(s,1000);
    return 0;
}
// Output
// Enter  the string : shobhit
// vowels = 2
// consonants = 4