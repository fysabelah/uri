#include <iostream>

using namespace std;

int main()
{
  unsigned long long numx, numy;
  
  while(cin >> numx >> numy, numx || numy){
      cout << __builtin_popcountll(numx^numy) << "\n"; 
  }
  
  return(0);
}