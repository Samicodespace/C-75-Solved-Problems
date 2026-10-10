#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter ID status (1 valid, 0 invalid): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>1){
cout<<"Invalid ID status";
return 0;
}
if(a==1)
cout<<"Access allowed";
else
cout<<"Access denied";
return 0;
}