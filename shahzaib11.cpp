#include<iostream>
using namespace std;
int main(){
double a,b;
cout<<"Enter account balance: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid balance";
return 0;
}
cout<<"Enter subscription fee: ";
if(!(cin>>b)){
cout<<"Invalid input";
return 0;
}
if(b<=0){
cout<<"Invalid subscription fee";
return 0;
}
if(a>=b)
cout<<"Subscription renewed";
else
cout<<"Insufficient balance";
return 0;
}