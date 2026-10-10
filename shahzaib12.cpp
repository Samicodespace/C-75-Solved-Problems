#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter ride distance in km: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>10000){
cout<<"Invalid distance";
return 0;
}
if(a==0){
cout<<"Distance cannot be zero";
return 0;
}
if(a<=20)
cout<<"Ride accepted";
else
cout<<"Ride rejected";
return 0;
}