#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter shopping total: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid total";
return 0;
}
if(a>=5000)
cout<<"Free shipping";
else
cout<<"Shipping charges apply";
return 0;
}