#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter CPU usage (0-100): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid percentage";
return 0;
}
if(a>80)
cout<<"High CPU usage";
else
cout<<"CPU usage is normal";
return 0;
}