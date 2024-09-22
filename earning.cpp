#include<iostream>
using namespace std;
int main()
{
cout<< "Enter vegetable price per kilogram (in coins) :";
float vegetables;
cin >> vegetables;

cout << "Enter fruit price per kilogram (in coins) :";
float fruits;
cin >> fruits;

cout<< "Enter total kgs of vegetables :";
int kgs;
cin >> kgs;

cout << "Enter total kgs of fruits :";
int kgs2;
cin >> kgs2;


 float earning;
earning= (vegetables*kgs) + (fruits*kgs2);
float rupee;
rupee= earning/1.94;

cout << "Total earning in rupees is :" << rupee;


}