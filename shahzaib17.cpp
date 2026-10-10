#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter claim amount: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid claim amount";
return 0;
}
if(a==0){
cout<<"Claim amount cannot be zero";
return 0;
}
if(a<=100000)
cout<<"Claim accepted for processing";
else
cout<<"Claim requires review";
return 0;
}