// PROGRAM 15
// Write a program of a DFA that accepts all possible strings of zero and ones having equal numbers of 0s and 1s and no prefix of the string should contain two or more zeros than ones or two more ones than zeros.

#include <bits/stdc++.h>

using namespace std;

int main()
{
   string a;
   cout << "Input String:";
   cin >> a;
   int k = 0;
   for (int i = 1; i < a.size(); ++i)
   {
       if (a[i] == a[i - 1])
       {
           cout << a << " is rejected\n";
           return 0;
       }
   }
   cout << a << " is accepted\n";
   return 0;
}
