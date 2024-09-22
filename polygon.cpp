#include<iostream>
using namespace std;
int main()
{
cout<< "Enter the sides of polygon:";
int side;
cin >> side;

int degree;
degree= (side-2)*180;

cout << "The internal angles of ";
cout << side ;
cout<< " -sided polygon is:";
cout << degree;

}