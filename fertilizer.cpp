 #include<iostream>
 using namespace std;

 int main()
 {
 int fertilizer;
 cout << "Enter weight of fertilizer in pounds :";
 cin >> fertilizer;

 int cost;
 cout << "Enter cost of the bag :"; 
 cin >> cost;

 int area;
 cout << "Enter the area in square feets that can be covered by the bag :";
 cin >> area;


 int pound;
 cout << "Enter cost of fertilizer per pound :  ";
 cin >> pound;
 
 int perfeet;
 perfeet= cost/area;

 cout<< "Cost of fertilizer per feet is :" << perfeet;

 }