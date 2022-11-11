// Write a C program to concatenate two strings.
#include<stdio.h>
#include<stdlib.h>
int* concatenate(char str1[],char str2[],int n)
{
    int i = 0, j = 0;
    char* str3=(char*)(malloc(sizeof(char)*n));
    while (str1[i] != '\0')
    {
        str3[j] = str1[i];
        i++;
        j++;
    }
    i = 0;
    while (str2[i] != '\0') 
    {
        str3[j] = str2[i];
        i++;
        j++;
    }
    str3[j] = '\0';
    return str3;
}
int main()
{
    char str1[1000],str2[1000];
    printf("Enter the first string=");
    gets(str1);
    printf("Enter the second string=");
    gets(str2);
    char* str3=concatenate(str1,str2,1000);
    printf("Concatenated string: %s", str3);
    return 0;
}
// Outout
// Enter the first string=Shobhit
// Enter the second string=Choudhary
// Concatenated string: ShobhitChoudhary