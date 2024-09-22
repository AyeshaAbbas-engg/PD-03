#include<iostream>
using namespace std;

int main()
{
cout << "Enter number of minutes :";
int minutes;
cin >> minutes;

cout << "Enter number of seconds :";
int seconds;
cin>> seconds;

int total;
total= (minutes*seconds*60);

cout << "Total number of frames are :";
cout << total;


}