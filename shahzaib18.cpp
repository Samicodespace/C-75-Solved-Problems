#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter soil moisture (0-100): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid percentage";
return 0;
}
if(a<30)
cout<<"Irrigation turned on";
else
cout<<"Irrigation not needed";
return 0;
}