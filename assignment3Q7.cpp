#include <iostream>
using namespace std;


int main()
{
  int cel;
  
  int far;
  
  for (cel = 100; ; cel--)
  {
    far = (9 * cel / 5) + 32;
    if(far == cel)
    {
      cout<< "The temperature at which its measure is same in Fahrenhiet and celsius : ";
      cout<< far << endl;
      break;
    }
    else
    {
      continue;
    }
  }
    
}