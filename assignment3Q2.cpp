#include <iostream>
using namespace std;

int main()
{
  double interest;
  double totalAmountDue;
  double minimumPay;
  
  for(string start;;)
  {
    int accountBalance;
    cout<< "Give your account balance : ";
    cin>> accountBalance ;
    
    double rate;
    
    // first part 
    if(accountBalance == 1000)
    {
      rate = 1.5;
      
    }
    else
    {
      rate = 1;
      
    }
    
    interest = (accountBalance * rate)/100;
    cout<< "The interest due will be : "<< interest << endl;
    
    // second part
    totalAmountDue = accountBalance + interest;
    cout<< "The total amount due for one year will be : ";
    cout<< totalAmountDue << endl;
    
    //third part
    if(totalAmountDue <= 10)
    {
      minimumPay = totalAmountDue;
    }
    else
    {
      double fixedDue = 10;
      double volatileDue = totalAmountDue *10/100;
      if(fixedDue > volatileDue)
      {
        minimumPay = fixedDue;
      }
      else
      {
        minimumPay = volatileDue;
      }
    }
    cout<< "The minimum payment for revolving credit account is : ";
    cout<< minimumPay << endl;
    
    
    cout<<"To recalculate type Y or N to terminate : ";
    cin>> start;
    if(start == "N")
    {
      cout<<"Have a nice day :) ";
      break;
    }
    else
    {
      cout<< "\n\n";
      continue;
      
    }
    
    
  }
  
}