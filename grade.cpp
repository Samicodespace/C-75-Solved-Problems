#include<iostream>
using namespace std;
int main(){
int a;
cout<<"Enter marks (0-100): ";
if(!(cin>>a)){
cout<<"Invalid input";
return 0;
}
if(a<0||a>100){
cout<<"Invalid marks";
}
else if(a>=90){
cout<<"Grade A";
}
else if(a>=80){
cout<<"Grade B";
}
else if(a>=70){
cout<<"Grade C";
}
else if(a>=60){
cout<<"Grade D";
}
else{
cout<<"Grade F";
}
return 0;
}