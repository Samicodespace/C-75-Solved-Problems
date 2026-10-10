#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter transfer amount: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<=0){
cout<<"Invalid transfer amount";
return 0;
}
if(a>1000000000){
cout<<"Amount exceeds allowed limit";
return 0;
}
if(a<=1000000)
cout<<"Transfer accepted";
else
cout<<"Transfer requires review";
return 0;
}