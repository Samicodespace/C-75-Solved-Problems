#include<iostream>
using namespace std;
int main(){
double a,b;
cout<<"Enter mobile balance: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid balance";
return 0;
}
cout<<"Enter package price: ";
if(!(cin>>b)){
cout<<"Invalid input";
return 0;
}
if(b<=0){
cout<<"Invalid package price";
return 0;
}
if(a>=b)
cout<<"Package activated";
else
cout<<"Insufficient balance";
return 0;
}