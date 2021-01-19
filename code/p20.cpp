// PROGRAM 20
// Write a program to convert given intermediate code to machine code.

 #include<bits/stdc++.h>

   using namespace std;

   int main(){

       cout << "Enter three addrees code:";
       string a;
       cin >> a;
       switch(a[3]){
           case '*' :
               cout << "MOV R0," << a[2] << "\n";
               cout << "MUL R0, " << a[4] << "\n";
               cout << "MOV " << a[0] << " ,R0"<< "\n";
               break;
           case '+':
               cout << "MOV R0," << a[2] << "\n";
               cout << "ADD R0, " << a[4] << "\n";
               cout << "MOV " << a[0] << " ,R0"
                   << "\n";
               break;
           case '/':
               cout << "MOV R0," << a[2] << "\n";
               cout << "DIV R0, " << a[4] << "\n";
               cout << "MOV " << a[0] << " ,R0"
                   << "\n";
               break;
           case '-':
               cout << "MOV R0," << a[2] << "\n";
               cout << "SUB R0, " << a[4] << "\n";
               cout << "MOV " << a[0] << " ,R0"
                   << "\n";
               break;
           }

           return 0;
   }
