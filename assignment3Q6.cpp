#include <iostream>
using namespace std;


int main()
{
  double weight;
  double radius;
  
  cout<<"This program will tell u whether the sphere sinks or floats! \n";
  
  cout<<"Enter the weight of sphere i.e. mass x g :";
  cin>> weight;
  
  cout<< "Enter the radius of that sphere : ";
  cin>> radius;
  
  double g = 32.2; // in feet/sec^2
  
  double vTotal = (4/3)*(22/7)*(radius*radius*radius);
  double densitySolid = weight/(vTotal*g);
  
  double y = 62.4;
  double densityWater = y / g;
  double v = weight/y;
  
  //for Buoyancy:: (v * densityWater) >= (densitySolid * vTotal) to float..
  
  
  if((v * densityWater) <= (densitySolid * vTotal))
  {
    cout<<"The sphere will sink. \n";
    cout<< "Because buoyant force is less than its weight.";
  }
  else 
  {
    cout<< "The sphere will float. \n";
    cout<< "Because buoyant force is greater than or equal to its weight.";
  }
}