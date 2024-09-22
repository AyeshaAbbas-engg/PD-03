#include<iostream>
using namespace std;

int main()
{
cout<< "Enter your Name :";
string Name;
cin >> Name;

cout << "Enter how many kgs of weight you want to lose :";
float weight;
cin >> weight;

float lose;
lose= weight*15;

cout<< Name << "will lose" << weight << "kgs of weight in" << lose << "days.";

}