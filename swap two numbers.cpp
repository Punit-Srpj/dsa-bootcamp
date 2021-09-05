#include<iostream>
using namespace std;
int main(){
int a,b,c;
cout<<"Enter first number:";
cin>>a;
cout<<"Enter second number:";
cin>>b;
cout<<"You entered a= "<<a<<endl<<"You entered b= "<<b<<endl;
c=a;
a=b;
b=c;
cout<<"After swapping the numbers are"<<endl;
cout<<"a= "<<a<<endl<<"b= "<<b;
return 0;
}
