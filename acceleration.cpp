#include<iostream>
using namespace std;
int main()
{

cout << "Enter value of initial velocity (m/s) :";
int velocity;
cin>> velocity;

cout<< "Enter value of final velocity (m/s) :";
int velocity2;
cin>> velocity2;

cout << "Enter value to time (s) :";
int time ;
cin >> time;

int acceleration;
acceleration= (velocity2-velocity/time);

cout << "Acceleration is : " << acceleration;



}