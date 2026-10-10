#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter sales amount: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0){
cout<<"Invalid sales amount";
return 0;
}
if(a>=100000)
cout<<"Bonus awarded";
else
cout<<"No bonus";
return 0;
}