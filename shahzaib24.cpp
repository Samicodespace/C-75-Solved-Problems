#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter password code: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>9999){
cout<<"Invalid password format";
return 0;
}
if(a==1234)
cout<<"Login successful";
else
cout<<"Invalid password";
return 0;
}