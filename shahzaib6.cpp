#include<iostream>
using namespace std;
int main(){
double a,b;
cout<<"Enter wallet balance: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid balance";
return 0;
}
cout<<"Enter transfer amount: ";
if(!(cin>>b)){
cout<<"Invalid input";
return 0;
}
if(b<=0){
cout<<"Invalid transfer amount";
return 0;
}
if(b<=a)
cout<<"Transfer successful";
else
cout<<"Insufficient balance";
return 0;
}