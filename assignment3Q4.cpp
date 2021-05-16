#include <iostream>
using namespace std;



int main()
{
  int day;
  int month;
  string sign;
  
  
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
      sign = "Aries";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Pisces"<< endl;
      sign = "Pisces";
    }
  }
  
  else if(month == 4)
  {
    if(day >= 20 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Taurus" << endl;
      sign = "Taurus"; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Aries"<< endl;
      sign = "Aries";
    }
  } 
  
  else if(month == 5)
  {
    if(day >= 21 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Gemini" << endl; 
      sign = "Gemini";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Taurus"<< endl;
      sign = "Taurus";
    }
  }
  
  else if(month == 6)
  {
    if(day >= 22 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Cancer" << endl;
      sign = "Cancer"; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Gemini"<< endl;
      sign = "Gemini";
    }
  }
  
  else if(month == 7)
  {
    if(day >= 23 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Leo" << endl;
      sign = "Leo"; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Cancer"<< endl;
      sign = "Cancer";
    }
  }
  
  else if(month == 8)
  {
    if(day >= 23 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Virgo" << endl; 
      sign = "Virgo";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Leo"<< endl;
      sign = "Leo";
    }
  }

  else if(month == 9)
  {
    if(day >= 23 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Libra" << endl; 
      sign = "Libra";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Virgo"<< endl;
      sign = "Virgo";
    }  
  }
  
  else if(month == 10)
  {
    if(day >= 23 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Scorpio" << endl; 
      sign = "Scorpio";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Libra"<< endl;
      sign = "Libra";
    }
  }
  
  else if(month == 11)
  {
    if(day >= 22 && day <= 30)
    {
      cout<< ">>Your zodiac sign is : Saggitarius" << endl; 
      sign = "Saggittarus";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Scorpio"<< endl;
      sign = "Scorpio";
    }
  }
  
  else if(month == 12)
  {
    if(day >= 22 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Capricorn" << endl; 
      sign = "Capricorn";
    }
    else
    {
      cout<< ">>Your zodiac sign is : Saggittarus"<< endl;
      sign = "Saggittarus";
    }
  }
  
  else if(month == 1)
  {
    if(day >= 20 && day <= 31)
    {
      cout<< ">>Your zodiac sign is : Aquaris" << endl;
      sign = "Aquaris"; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Capricorn"<< endl;
      sign = "Capricorn";
    }
  }
  
  else if(month == 2)
  {
    if(day >= 19 && day <= 20)
    {
      cout<< ">>Your zodiac sign is : Pisces" << endl;
      sign = "Pisces"; 
    }
    else
    {
      cout<< ">>Your zodiac sign is : Aquaris"<< endl;
      sign = "Aquaris";
    }  
  }
  
  
  // Horoscope Indication
  switch(month)
  {
    case 3:cout<< ">>Horoscope :\n"<<" Your monthly horoscope indicates that in January ,\n the planets are providing some of the energy you’ll need to pursue a long time goal.";
      break;
    case 4:cout<<">>Horoscope :\n"<<" This could be the beginning of a travel expedition \n or educational pursuit that can increase your chances for success.";
      break;
    case 5: cout<<">>Horoscope :\n"<<" Computer technology may be another choice but you will find a way \n to educate yourself now even if it does require some unusual ways to do so.";
      break;
    case 6: cout<<">>Horoscope :\n"<<" This month will bring a legal matter to your attention.\n Allow your companion to make a suggestion and listen to their advice.";
      break;
    case 7: cout<<">>Horoscope :\n"<<" Powerful attractions and or habits may push you over the edge.\n Its time to transform things that directly affect your health before they transform you. This period places emphasis on your health this month providing another opportunity to start over.";
      break;
    case 8: cout<<">>Horoscope :\n"<<" It’s as if it’s your own personal day.\n You feel recharged and energized ready to start many new projects.";
      break;
    case 9: cout<<">>Horoscope :\n"<<" Create the comfortable home environment you’ve always dreamed of.\n Working from a home office may be a better alternative then past choices.";
      break;
    case 10:cout<<">>Horoscope :\n"<<" Be versatile and creative in applying your job skills and \n watch earning abilities improve.";
      break;
    case 11:cout<<">>Horoscope :\n"<<" Friends come to your rescue and set you straight about future plans.";
      break;
    case 12:cout<<">>Horoscope :\n"<<" It’s all about interactions with others and of what value that may provide to improve your current status.\n Improve your people skills and maintain a healthy balance between personal and professional life.";
      break;
    case 1:cout<<">>Horoscope :\n"<<" Observe birds, racoons and other animals in the wild \n to get a better perspective of your place on earth.";
      break;
    case 2:cout<<">>Horoscope :\n"<<" Get organized in preparation by releasing stress.\n Try dance or exercise therapy for relief.";
      break;
  }
  
  //Element indication 
  string element;
  
      if(sign == "Aries" || sign == "Leo" || sign == "Saggittarus")
      {
        element = "Fire";
        cout<< "\nYour are of element : "<< element <<endl;
        cout<< "Thus you are compatible with other signs of same element like, Leo, Saggitarus and Aries itself." << endl;
      }
     
    
      else if(sign == "Taurus" ||sign == "Virgo" || sign == "Capricorn")
      {
        element = "Earth";
        cout<< "\nYour are of element : "<< element <<endl;
        cout<< "Thus you are compatible with other signs of same element like, Taurus, Virgo and Capricorn itself." << endl;
      }
      
      else if(sign == "Gemini" || sign == "Libra" ||sign == "Aquarius")
      {
        element = "Air";
        cout<< "\nYour are of element : "<< element <<endl;
        cout<< "Thus you are compatible with other signs of same element like, Gemini, Libra and Aquarius itself." << endl;
      }
      
      else if(sign == "Cancer" ||sign == "Scorpio" ||sign == "Pisces")
      {
        element = "Water";
        cout<< "\nYour are of element : "<< element <<endl;
        cout<< "Thus you are compatible with other signs of same element like, Cancer, Scorpio and Pisces itself." << endl;
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














