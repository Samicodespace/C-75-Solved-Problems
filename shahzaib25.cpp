#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter battery charge (0-100): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid percentage";
return 0;
}
if(a<20)
cout<<"Low battery warning";
else
cout<<"Battery level is sufficient";
return 0;
}