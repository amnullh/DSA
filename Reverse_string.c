#include <stdio.h>
int main()
{
   char s[1000], r[1000],p[1000];
   int begin, end, c = 0;
   printf("Input a string:");
   gets(s);
   p[1000]=s[1000];
   while (s[c] != '\0')
   {
      c++;
   }
   end = c - 1;
   for (begin = 0; begin < c; begin++) {
      r[begin] = s[end];
      end--;
   }
   r[begin] = '\0';
   printf("Reverse of a String is: %s\n", r);
   return 0;
}