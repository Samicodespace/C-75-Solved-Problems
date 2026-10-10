#include<iostream>
using namespace std;
int main(){
bool active,pin;
double balance,amount;
cin>>active>>balance>>amount>>pin;
if(active&&pin&&amount>0&&amount<=balance&&amount<=100000)
cout<<"Approved";
else
cout<<"Rejected";
return 0;
}