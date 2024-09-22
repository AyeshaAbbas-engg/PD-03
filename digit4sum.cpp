 #include<iostream>
 using namespace std;
 int main(){
 
 int value;
 cout << "Enter a 4 digit number :";
 cin >> value;

 int total;
 total= (value%10) +  (value/10)%10 + (value/100)%10 + (value/1000)%10 ;

 cout << "The sum of the entered digits are :" << total ;

 }