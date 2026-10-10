#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter temperature in Celsius: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a< -100||a>100){
cout<<"Invalid temperature";
return 0;
}
if(a>38)
cout<<"Fever alert";
else
cout<<"Temperature is normal";
return 0;
}