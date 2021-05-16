#include <iostream>
using namespace std;


int main()
{
  for(int n = 4; n < 100; n++){   // Since to print prime no between 3 and 100 n must be 4;
    for(int c = 2; c < n ; c++)
    {
      if(n % c == 0)
      {
        break;
      }
      else
      {
        cout<< n << endl;
        break;
      }
    }
  }
}
 