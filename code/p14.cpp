// PROGRAM 14
// Write a program of a DFA that accepts all possible strings of zero and ones that do not contain 011 as a substring.

#include<bits/stdc++.h>

using namespace std;

int main(){

   string a;
   cout << "Input String:";
   cin >> a;
   char curr_state = 'A';
   for (int i = 0; i < a.size();++i){
       switch(a[i]){
           case '0':
               if(curr_state=='A')
                   curr_state = 'B';
               else if(curr_state =='B')
                   curr_state = 'B';
               else if(curr_state=='C')
                   curr_state = 'B';
               else if(curr_state=='D')
                   curr_state == 'D';
               break;
           case '1':
               if (curr_state == 'A')
                   curr_state = 'A';
               else if (curr_state == 'B')
                   curr_state = 'C';
               else if (curr_state == 'C')
                   curr_state = 'D';
               else if (curr_state == 'D')
                   curr_state == 'D';
               break;
           }
           if(curr_state=='D')
               break;
   }

   if(curr_state!='D')
       cout << a << " is accepted\n";
   else
       cout << a << " is rejected\n";
   return 0;
}
