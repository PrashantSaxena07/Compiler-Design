// PROGRAM 19
// Write a program for loop Jamming.

#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

int main()
{

   //unoptimized Code
   auto start = high_resolution_clock::now();
  
   int x = 0,y=0;
   for (int i = 1; i <= 10; ++i)
   {
       x++;
   }
   for (int i = 1; i <= 10;++i){
       y++;
   }
  
       cout<<"x:"<<x<<" y:"<<y << "\n";
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<microseconds>(stop - start);

   cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;

   cout << "\nafter loop jamming:\n";
  
   start = high_resolution_clock::now();
  
   x = 0, y = 0;
   for (int i = 1; i <= 10; i += 1)
   {
       x++;
       y++;
   }
   cout<<"x:" << x << "  y:" << y
        << "\n";
   stop = high_resolution_clock::now();
   duration = duration_cast<microseconds>(stop - start);

   cout << "Time taken by function: "
        << duration.count() << " microseconds" << endl;
   return 0;
}
