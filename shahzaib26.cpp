#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter months since purchase: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>1200){
cout<<"Invalid number of months";
return 0;
}
if(a<=12)
cout<<"Warranty is valid";
else
cout<<"Warranty has expired";
return 0;
}