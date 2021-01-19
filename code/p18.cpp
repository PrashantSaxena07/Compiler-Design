// PROGRAM 18
// Write a program for loop unrolling.

#include <iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main()
{

   //unoptimized Code
   auto start = high_resolution_clock::now();
   for (int i = 1; i <= 10; ++i)
   {
       cout << i << "\t";
   }
   cout << "\n";
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);

   cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;

   cout << "\nafter loop unrolling:\n";
   start = high_resolution_clock::now();
   for (int i = 1; i <= 10; i += 2)
   {
       cout << i << "\t";
       cout << i + 1 << "\t";
   }
   cout << "\n";
   stop = high_resolution_clock::now();
   duration = duration_cast<microseconds>(stop - start);

   cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;
   return 0;
}
