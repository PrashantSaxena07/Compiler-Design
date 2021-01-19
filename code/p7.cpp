// PROGRAM 7
// Write a program of DFA for (a/b)*abb.

#include<bits/stdc++.h>

using namespace std;

int main(){
   string a;

   cout << "Input String:";
   cin >> a;
   char curr_state = 'A';
   for (int i = 0; i < a.size(); ++i)
   {
       switch (a[i])
       {
       case 'a':
           if(curr_state=='A')
               curr_state = 'B';
           else if(curr_state=='B')
               curr_state = 'B';
           else if(curr_state=='C')
               curr_state = 'A';
           else if(curr_state=='D')
               curr_state = 'A';
           break;
       case 'b':
           if (curr_state == 'A')
               curr_state = 'A';
           else if (curr_state == 'B')
               curr_state = 'C';
           else if (curr_state == 'C')
               curr_state = 'D';
           else if (curr_state == 'D')
               curr_state = 'A';
           break;

       default:
           break;
       }
   }
   if(curr_state=='D')
       cout << a << " is accepted\n";
   else
       cout << a << " is rejected\n";
   return 0;
}
