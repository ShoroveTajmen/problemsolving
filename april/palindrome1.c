#include <stdio.h>
#include <string.h>

int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
  {
     char str[100];
     gets(str);
  }

 {
   char str1[20],str2[20];
   int i,n, length = 0;
   scanf("%[^\n]%*c",str1);

   for (i = 0; str1[i] != '\0'; i++)
   {
      length++;
   }

   for (i = length - 1; i >= 0; i--)
   {
      str2[length - i - 1] = str1[i];
   }

   for (n = 1, i = 0; i < length; i++)
   {
      if (str2[i] != str1[i])
      n = 0;
   }

   if (n == 1)
      printf("Yes! It is Palindrome!");
   else
      printf("Sorry! It is not Palindrome!");

   return 0;
}
}