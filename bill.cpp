#include<iostream>
using namespace std;
int main(){
int a;
double b;
cout<<"Enter electricity units: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid units";
}
else if(a<=100){
b=a*10;
cout<<"Bill: Rs. "<<b;
}
else if(a<=200){
b=a*15;
cout<<"Bill: Rs. "<<b;
}
else if(a<=300){
b=a*20;
cout<<"Bill: Rs. "<<b;
}
else{
b=a*25;
cout<<"Bill: Rs. "<<b;
}
return 0;
}