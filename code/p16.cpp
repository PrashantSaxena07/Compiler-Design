// PROGRAM 16
// Write a program of a DFA that accepts the string of binary numbers that are divisible by three.

#include<bits/stdc++.h>

using namespace std;

int main(){
   string a;
   cout << "Input String:";
   cin >> a;
   char curr_state = 'A';
   for (int i = 0; i < a.size();++i){
       switch (a[i])
       {
       case '0':
           if(curr_state=='A')
               curr_state = 'A';
           else if(curr_state=='B')
               curr_state = 'C';
           else if(curr_state=='C')
               curr_state = 'B';
           break;
       case '1':
           if (curr_state == 'A')
               curr_state = 'B';
           else if (curr_state == 'B')
               curr_state = 'A';
           else if (curr_state == 'C')
               curr_state = 'C';
           break;

       default:
           break;
       }
   }
   if(curr_state=='A')
       cout << a << " is divisible by 3\n";
   else
       cout << a << " is not divisible by 3\n";
      
   return 0;
}
