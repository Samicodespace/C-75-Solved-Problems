#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter your age: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>120){
cout<<"Invalid age";
return 0;
}
if(a>=21)
cout<<"Car rental allowed";
else
cout<<"Car rental not allowed";
return 0;
}