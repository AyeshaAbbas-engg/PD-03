 #include<iostream>
 using namespace std;
 int main()
 {
 int age;
 cout << "Enter your age:";
 cin >> age;

 int house;
 cout << "Enter how many time you moved from house :";
 cin >> house;

 int ans;
 ans= age/(house+1);

 cout << "Years you lived in a single house =" << ans;
 }