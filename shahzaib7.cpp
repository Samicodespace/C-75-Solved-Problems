#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter minutes before departure: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>1440){
cout<<"Invalid time";
return 0;
}
if(a>=60)
cout<<"Check-in allowed";
else
cout<<"Check-in closed";
return 0;
}