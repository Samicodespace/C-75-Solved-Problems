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
}
else if(a<=0){
cout<<"Freezing";
}
else if(a<=15){
cout<<"Cold";
}
else if(a<=25){
cout<<"Moderate";
}
else if(a<=35){
cout<<"Hot";
}
else{
cout<<"Very Hot";
}
return 0;
}