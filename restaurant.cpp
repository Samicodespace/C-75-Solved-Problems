#include<iostream>
using namespace std;
int main(){
double a,b;
cout<<"Enter bill amount: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid amount";
}
else if(a<2000){
b=0;
cout<<"No discount";
}
else if(a<5000){
b=a*5/100;
cout<<"Discount: Rs. "<<b;
}
else if(a<10000){
b=a*10/100;
cout<<"Discount: Rs. "<<b;
}
else{
b=a*15/100;
cout<<"Discount: Rs. "<<b;
}
return 0;
}