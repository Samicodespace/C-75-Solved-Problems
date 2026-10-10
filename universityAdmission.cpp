
#include<iostream>
using namespace std;

int main(){
    int m, i, t;
    double mp, ip;

    cout<<"Enter Matric marks out of 1100: ";
    if(!(cin>>m)){
        cout<<"Invalid input";
        return 0;
    }

    cout<<"Enter Intermediate marks out of 1100: ";
    if(!(cin>>i)){
        cout<<"Invalid input";
        return 0;
    }

    cout<<"Enter entry test marks out of 100: ";
    if(!(cin>>t)){
        cout<<"Invalid input";
        return 0;
    }

    if(m<0 || m>1100 || i<0 || i>1100 || t<0 || t>100){
        cout<<"Invalid marks";
    }
    else if(t<50){
        cout<<"Admission rejected: Entry test score is too low";
    }
    else{
        mp=m*100.0/1100;
        ip=i*100.0/1100;

        if(mp>=80 && ip>=80 && t>=85){
            cout<<"Eligible for scholarship";
        }
        else if(ip>=60){
            cout<<"Eligible for admission";
        }
        else{
            cout<<"Admission rejected";
        }
    }

    return 0;
}
