//Palindrome string using recursion
#include <stdio.h>
#include <string.h>
char string[50];
int pal(char *string, int start, int end)
{

     if(NULL == string || start < 0 || end < 0){
         printf("Invalid Input");
         return 0;
     }

     if(start >= end)
         return 1;
     if(string[start] == string[end]){
         return pal(string, start + 1, end - 1);
     }

     return 0;
 }
 int main()
 {
    //char string[50];
    printf("Enter a string for palindrome check\n");
    scanf("%s", string);
         
    if(pal(string, 0, strlen(string) - 1))
    {
        printf("%s is a Palindrome \n", string);
    }
    else
    {
        printf("%s is not a Palindrome \n", str);
    }
     
    return 0;
}
 
