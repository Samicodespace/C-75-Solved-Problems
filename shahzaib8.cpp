#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter days since purchase: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>36500){
cout<<"Invalid number of days";
return 0;
}
if(a<=7)
cout<<"Refund allowed";
else
cout<<"Refund not allowed";
return 0;
}