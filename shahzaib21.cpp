#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter vehicle speed in km/h: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>400){
cout<<"Invalid speed";
return 0;
}
if(a>100)
cout<<"Speeding fine issued";
else
cout<<"No speeding fine";
return 0;
}