// PROGRAM 8
// Write a program of DFA, which accepts strings of zeros and ones that contain an even number of zeros and an odd number of ones.

#include<bits/stdc++.h>

using namespace std;

int main(){

   string a;
   cout << "Input String:";
   cin >> a;
   int c0 = 0, c1 = 0;
   for (int i = 0; i < a.size(); ++i)
   {
       if(a[i]=='0')
           c0++;
       else
           c1++;
   }
   if(!(c0%2) && c1%2){
       cout << a << " is accepted\n";
   }else
   {
       cout << a << " is rejected\n";
   }

       return 0;
}
