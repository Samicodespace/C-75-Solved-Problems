#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter monthly income: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid income";
return 0;
}
if(a>=3000)
cout<<"Application approved";
else
cout<<"Application rejected";
return 0;
}