#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter delivery distance: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<=0){
cout<<"Invalid distance";
}
else if(a<=5){
cout<<"Delivery fee: Rs. 100";
}
else if(a<=10){
cout<<"Delivery fee: Rs. 200";
}
else if(a<=20){
cout<<"Delivery fee: Rs. 350";
}
else{
cout<<"Delivery fee: Rs. 500";
}
return 0;
}