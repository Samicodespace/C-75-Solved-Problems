#include<iostream>
using namespace std;
int main(){
int a,b;
cout<<"Enter available rooms: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100000){
cout<<"Invalid room count";
return 0;
}
cout<<"Enter rooms required: ";
if(!(cin>>b)){
cout<<"Invalid input";
return 0;
}
if(b<=0||b>100000){
cout<<"Invalid room count";
return 0;
}
if(a>=b)
cout<<"Booking confirmed";
else
cout<<"Rooms not available";
return 0;
}