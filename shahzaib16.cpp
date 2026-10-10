#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter available stock: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid stock";
return 0;
}
cout<<"Enter requested quantity: ";
if(!(cin>>b)){
cout<<"Invalid input";
return 0;
}
if(b<=0){
cout<<"Invalid quantity";
return 0;
}
if(a>=b)
cout<<"Order dispatched";
else
cout<<"Insufficient stock";
return 0;
}