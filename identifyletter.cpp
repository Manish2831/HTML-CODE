#include<stdio.h>
int main()
{
    char ch;
    printf("\nEnter a character from keyboard:");
    scanf("%c",&ch);
    if(ch>=65 && ch<=90)
    printf("The character is an uppercase letter\n");
    if(ch>=97 && ch<=122)
    printf("The character is an Lowercase letter\n");
    if(ch>=48 && ch<=57)
    printf("The character is a digit\n");
    if((ch>=0 && ch<48)||(ch>57 && ch<65)||(ch>90 && ch<97)||ch>122)
    printf("The character is a spacial symbol\n");
    return 0;
}