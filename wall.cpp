#include<iostream>
 using namespace std;
 int main()
 {
 int area;
 cout << "Enter number of square meter you want to paint :";
 cin >> area;

 int length;
 cout << "Enter length of wall :";
 cin >> length;

 int width;
 cout << "Enter width od wall :";
 cin >> width;

 int total;
 total= area/(length*width);

 cout << "Number of walls you can paint is :" << total;
 }