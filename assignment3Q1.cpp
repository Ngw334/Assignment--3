#include <iostream>
using namespace std;

//Q1
int main()
{
  string p_wins = "Paper covers stone :)";
  string r_wins = "Scissors cuts paper :)";
  string s_wins = "Rock breaks scissors :)";
  
  string in1;
  string in2;
  
  cout<< "This is a two-player rock-paper-scissors game" << endl;
  cout<< "Enter either P-paper,R-rock or S-scissor"<<endl;
  
  cin>> in1;
  cin>> in2;
  
  if(in1 == "P")
  {
    if (in2 == "R")
    {
      cout<< "IN1 wins the game\n";
      cout<<"Because: "<<p_wins<<endl;
    }
    else if (in2 == "P")
    {
      cout<<"Sorry !! game ties here :D"<<endl;
      
    }
    
    else
    {
      cout<< "IN2 wins the game\n";
      cout<<"Because: "<<s_wins<<endl;
    }
  }
  
  
  else if(in1 == "R")
  {
    if (in2 == "S")
    {
      cout<< "IN1 wins the game\n";
      cout<<"Because: "<<r_wins<<endl;
    }
    else if (in2 == "R")
    {
      cout<<"Sorry !! game ties here :D"<<endl;
    }
    
    else
    {
      cout<< "IN2 wins the game\n";
      cout<<"Because: "<<p_wins<<endl;
    }
  }
  
  string gameReset;
  cout<< "To reset the game type Y if no then N : ";
  cin>> gameReset;
  if(gameReset == "Y")
  {
    cout<< main();
  }
  else 
  {
    cout<< "Have a nice day :) !";
  }
}


