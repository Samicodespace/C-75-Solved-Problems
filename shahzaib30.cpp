#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter attendance percentage (0-100): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid percentage";
return 0;
}
if(a>=75)
cout<<"Allowed to take exam";
else
cout<<"Not allowed to take exam";
return 0;
}