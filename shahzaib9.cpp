#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter electricity load in watts: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>1000000){
cout<<"Invalid load";
return 0;
}
if(a>5000)
cout<<"Overload warning";
else
cout<<"Load is normal";
return 0;
}