#include<stdio.h>
#include<string.h>
int main()
{
   char s[1000],r[1000];
   int result;
   printf("Input a string:");
   scanf("%s",s);
   printf("\nEntered String is: %s",s);
   strcpy(r,s);
   strrev(r);
   result=strcmp(s,r);
   if(result==0)
   {
    printf("\nString is Palindrome.");
   }
   else
   {
    printf("\nString is not Palindrome.");
   }
   return 0;
}