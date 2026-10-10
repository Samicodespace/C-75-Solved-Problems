#include<iostream>
using namespace std;
int main(){
float inter,test,income;
cin>>inter>>test>>income;
if(inter>=85&&test>=80&&income<50000)
cout<<"Eligible";
else
cout<<"Not eligible";
return 0;
}