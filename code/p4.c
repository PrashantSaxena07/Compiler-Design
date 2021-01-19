// PROGRAM 4
// Write a program tof Dfa which accepts string not containing consecutive 0s.

#include <stdio.h>
int main()
{
   char a[100];
   printf("Input string:");
   scanf("%s", a);
   int q0 = 1, qf = 0;
   for (int i = 0; a[i] != '\0'; ++i)
   {
       if (a[i] == '0')
       {
           if (q0 == 1)
           {
               q0 = 0;
               qf = 1;
           }
           else
           {
               q0 = 1;
               qf = 0;
           }
       }
   }

   if (q0 == 1)
       printf("%s is accepted by Dfa\n",a);
   else
       printf("%s is not accepted by Dfa\n",a);

   return 0;
}
