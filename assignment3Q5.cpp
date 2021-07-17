#include <iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i = 2; i < n; i++)
    {
        if( n % i== 0)
        {
            return false;
        }
        else
        {
            continue;
        }
    }
    return true;
}

int main()
{
  for(int n = 4; n < 100; n++){   // Since to print prime no between 3 and 100 n must be 4;
    if(isPrime(n))
    {
        cout<< n << endl;
        continue;
    }
    else
    {
        continue;
    }
  }
}
