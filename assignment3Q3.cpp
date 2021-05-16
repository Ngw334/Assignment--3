#include <iostream>
using namespace std;



int main()
{
  int day;
  int month;
  cout<< "Give your Date of Birth so that I can tell you your sign and horoscope : \n";
  cout<< "Day : ";
  cin >> day;
  
  cout<< "\n";
  
  cout<< "Month : ";
  cin>> month;
  cout<< "\n";
  
  for(string start;;){// Zodiac sign indication
  if(month == 3)
  {
    if(day >= 21 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Aries" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Pisces"<< endl;
    }
  }
  
  else if(month == 4)
  {
    if(day >= 20 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Taurus" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Aries"<< endl;
    }
  } 
  
  else if(month == 5)
  {
    if(day >= 21 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Gemini" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Taurus"<< endl;
    }
  }
  
  else if(month == 6)
  {
    if(day >= 22 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Cancer" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Gemini"<< endl;
    }
  }
  
  else if(month == 7)
  {
    if(day >= 23 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Leo" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Cancer"<< endl;
    }
  }
  
  else if(month == 8)
  {
    if(day >= 23 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Virgo" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Leo"<< endl;
    }
  }

  else if(month == 9)
  {
    if(day >= 23 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Libra" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Virgo"<< endl;
    }  
  }
  
  else if(month == 10)
  {
    if(day >= 23 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Scorpio" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Libra"<< endl;
    }
  }
  
  else if(month == 11)
  {
    if(day >= 22 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Saggitarius" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Scorpio"<< endl;
    }
  }
  
  else if(month == 12)
  {
    if(day >= 22 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Capricorn" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Saggittarus"<< endl;
    }
  }
  
  else if(month == 1)
  {
    if(day >= 20 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Aquaris" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Capricorn"<< endl;
    }
  }
  
  else if(month == 2)
  {
    if(day >= 19 && day <= 20)
    {
      cout<< ">>Your zodiac sign is : Pisces" << endl; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Aquaris"<< endl;
    }  
  }
  
  
  // Horoscope Indication
  switch(month)
  {
    case 3:cout<< ">>Horoscope :\n"<<"Your monthly horoscope indicates that in January ,\n the planets are providing some of the energy you’ll need to pursue a long time goal.";
      break;
    case 4:cout<<">>Horoscope :\n"<<"This could be the beginning of a travel expedition \n or educational pursuit that can increase your chances for success.";
      break;
    case 5: cout<<">>Horoscope :\n"<<"Computer technology may be another choice but you will find a way \n to educate yourself now even if it does require some unusual ways to do so.";
      break;
    case 6: cout<<">>Horoscope :\n"<<"This month will bring a legal matter to your attention.\n Allow your companion to make a suggestion and listen to their advice.";
      break;
    case 7: cout<<">>Horoscope :\n"<<"Powerful attractions and or habits may push you over the edge.\n Its time to transform things that directly affect your health before they transform you. This period places emphasis on your health this month providing another opportunity to start over.";
      break;
    case 8: cout<<">>Horoscope :\n"<<"It’s as if it’s your own personal day.\n You feel recharged and energized ready to start many new projects.";
      break;
    case 9: cout<<">>Horoscope :\n"<<"Create the comfortable home environment you’ve always dreamed of.\n Working from a home office may be a better alternative then past choices.";
      break;
    case 10:cout<<">>Horoscope :\n"<<"Be versatile and creative in applying your job skills and \n watch earning abilities improve.";
      break;
    case 11:cout<<">>Horoscope :\n"<<"Friends come to your rescue and set you straight about future plans.";
      break;
    case 12:cout<<">>Horoscope :\n"<<"It’s all about interactions with others and of what value that may provide to improve your current status.\n Improve your people skills and maintain a healthy balance between personal and professional life.";
      break;
    case 1:cout<<">>Horoscope :\n"<<"Observe birds, racoons and other animals in the wild \n to get a better perspective of your place on earth.";
      break;
    case 2:cout<<">>Horoscope :\n"<<"Get organized in preparation by releasing stress.\n Try dance or exercise therapy for relief.";
      break;
  }
  
  cout<<"\n\n\n >>To recalculate type Y or N to terminate : ";
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














