// PROGRAM 2
// Write a program of a DFA, which accepts an even number of zeros.

#include<bits/stdc++.h>

using namespace std;

int main(){

   string a;
   cout << "Input String:";
   cin >> a;
   int ct = 0;
   for (int i = 0; i < a.size(); ++i)
   {
       if(a[i]=='0')
           ct++;
   }
   if(!(ct%2))
       cout << "Given String is Accepted\n";
   else
       cout << "Given String is Rejected\n";
   return 0;
}
