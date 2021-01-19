// PROGRAM 17
// Write a program for code motion.

   #include<bits/stdc++.h>
   #include<chrono>

   using namespace std;
   using namespace std::chrono;

   int main(){
       int i=0, j;

       cout << "Wihout optimization";
       auto start = high_resolution_clock::now();

       while(i<10000){
           j = 1;
           i += j;
       }
       auto stop = high_resolution_clock::now();
       auto duration = duration_cast<microseconds>(stop - start);

       cout << "Time taken by function: "
            << duration.count() << " microseconds" << endl;


       cout << "\nAfter optimization\n";
       start = high_resolution_clock::now();
       j = 1;
       while(i<10000){
           i += j;
       }
       stop = high_resolution_clock::now();
       duration = duration_cast<microseconds>(stop - start);

       cout << "Time taken by function: "
            << duration.count() << " microseconds" << endl;

       return 0;
   }
