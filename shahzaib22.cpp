#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter annual income: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid income";
return 0;
}
if(a<=500000)
cout<<"Loan application accepted";
else
cout<<"Loan application rejected";
return 0;
}