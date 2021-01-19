// PROGRAM 6
// Write a program to convert a given regular expression a(a|b)*b into deterministic finite automata.

#include <bits/stdc++.h>

using namespace std;

int main()
{

   string a;
   cout << "Input String:";
   cin >> a;
   char curr_state = 'A';
   for (int i = 0; i < a.size(); ++i)
   {
       switch (a[i])
       {
       case 'a':
           if (curr_state == 'A')
               curr_state = 'B';
           else if (curr_state =='B')
               curr_state = 'B';
           else if (curr_state == 'C')
               curr_state = 'B';
           break;
       case 'b':
           if (curr_state == 'A')
               curr_state = 'T';
           else if (curr_state == 'B')
               curr_state = 'C';
           else if (curr_state =='C')
               curr_state = 'C';
           break;
       }
       if (curr_state == 'T')
           break;
   }

   if (curr_state == 'C')
       cout << a << " is accepted\n";
   else
       cout << a << " is not accepted\n";

   return 0;
}
