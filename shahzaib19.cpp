#include<iostream>
using namespace std;
int main(){
double a,b;
cout<<"Enter escrow balance: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid balance";
return 0;
}
cout<<"Enter payment amount: ";
if(!(cin>>b)){
cout<<"Invalid input";
return 0;
}
if(b<=0){
cout<<"Invalid payment amount";
return 0;
}
if(a>=b)
cout<<"Payment released";
else
cout<<"Insufficient escrow balance";
return 0;
}