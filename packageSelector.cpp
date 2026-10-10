#include<iostream>
using namespace std;
int main(){
double a;
cout<<"Enter monthly data usage in GB: ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100000){
cout<<"Invalid data usage";
}
else if(a<=10){
cout<<"Basic Package";
}
else if(a<=50){
cout<<"Standard Package";
}
else if(a<=100){
cout<<"Premium Package";
}
else{
cout<<"Heavy User Package";
}
return 0;
}