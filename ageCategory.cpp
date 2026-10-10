#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter age: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>120){
cout<<"Invalid age";
}
else if(a<13){
cout<<"Child";
}
else if(a<=19){
cout<<"Teenager";
}
else if(a<=59){
cout<<"Adult";
}
else{
cout<<"Senior Citizen";
}
return 0;
}