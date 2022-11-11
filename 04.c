// Write a C program to compare two strings.
#include<stdio.h>
#include<stdlib.h>
int* compare(char str1[],char str2[],int n)
{
    int i = 0, j = 0, flag = 0;
    while (str1[i] != '\0')
    {
        i++;
    }
    while (str2[j] != '\0')
    {
        j++;
    }
    if (i != j)
    {
        flag = 0;
    }
    else
    {
        i=0;
        j=0;
        while(str1[i] != '\0', str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        i++;
        j++;
        }
    }
    return flag;
   
}
int main()
{
    char str1[20], str2[20];
    printf("Enter First String=");
    gets(str1);
    printf("Enter Second String=");
    gets(str2);
    int* c=compare(str1,str2,20);
    if (c == 0)
    {
        printf("Both Strings Are Not Equal");
    }
    else
    {
        printf("Both Strings Are Equal");
    }
    return 0;
}
// Output
// Enter First String=Shobhit
// Enter Second String=Shobhit
// Both Strings Are Equal