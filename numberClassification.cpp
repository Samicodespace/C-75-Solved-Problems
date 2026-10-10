#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter an integer: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a>0){
cout<<"Positive";
}
else if(a<0){
cout<<"Negative";
}
else{
cout<<"Zero";
}
return 0;
}