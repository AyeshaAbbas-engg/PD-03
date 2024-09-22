#include<iostream>
using namespace std;
int main()
{
int one;
cout << "Enter digit one" << endl;
cin >> one;

int two;
cout<< "Enter digit two :" << endl;
cin >> two;

int three;
cout<< "Enter digit three :" << endl;
cin >> three;

int four;
cout<< "Enter digit four :" << endl;
cin >> four;

int five;
cout << "Enter digit five" << endl;
cin >> five;

int six;
cout<< "Enter digit six" << endl;
cin >> six;

int seven;
cout << "Enter digit seven :" << endl;
cin >> seven;

int eight;
cout << "Enter digit eight :" << endl;
cin >> eight;

int nine;
cout<< "Enter digit nine :" << endl;
cin >> nine;

int ten;
cout<<"Enter digit ten:"<< endl;
cin >> ten;

int eleven;
cout<<"Enter digit eleven :" << endl;
cin >> eleven;

int twelve;
cout<<"Enter digit twelve :" << endl;
cin>> twelve;

int thirteen;
cout <<"Enter digit thirteen: " << endl;
cin >> thirteen;

int fourteen;
cout << "Enter digit fourteen :"<< endl;
cin >> fourteen;

int fifteen;
cout << "Enter digit fifteen :" << endl;
cin >> fifteen;

int sum1;
sum1= one+two+three+four+five;

int mult1;
mult1= six*seven*eight*nine*ten;

int sub;
sub= eleven-twelve-thirteen-fourteen-fifteen;

int add;
add = sum1+mult1;

int sub2;
sub2 = add-sub;

cout << "Final result is :" << sub2;
}