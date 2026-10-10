#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter battery percentage (0-100): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid percentage";
return 0;
}
if(a>=30)
cout<<"Delivery can continue";
else
cout<<"Robot needs charging";
return 0;
}