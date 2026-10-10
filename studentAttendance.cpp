#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter attendance percentage: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid percentage";
}
else if(a>=95){
cout<<"Excellent";
}
else if(a>=85){
cout<<"Good";
}
else if(a>=75){
cout<<"Average";
}
else{
cout<<"Short Attendance";
}
return 0;
}