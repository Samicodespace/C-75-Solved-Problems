#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter 1 for Red, 2 for Yellow, 3 for Green: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<1||a>3){
cout<<"Invalid choice";
}
else if(a==1){
cout<<"Stop";
}
else if(a==2){
cout<<"Get ready";
}
else{
cout<<"Go";
}
return 0;
}