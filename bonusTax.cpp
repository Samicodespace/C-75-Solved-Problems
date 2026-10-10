
#include<iostream>
using namespace std;

int main(){
    double s, b, total, tax, net;
    int r;

    cout<<"Enter basic salary: ";
    if(!(cin>>s)){
        cout<<"Invalid input";
        return 0;
    }

    cout<<"Enter performance rating (1-5): ";
    if(!(cin>>r)){
        cout<<"Invalid input";
        return 0;
    }

    if(s<=0 || r<1 || r>5){
        cout<<"Invalid salary or rating";
    }
    else if(r==5){
        b=s*20/100;
    }
    else if(r==4){
        b=s*15/100;
    }
    else if(r==3){
        b=s*10/100;
    }
    else if(r==2){
        b=s*5/100;
    }
    else{
        b=0;
    }

    if(s>0 && r>=1 && r<=5){
        total=s+b;

        if(total<=50000){
            tax=0;
        }
        else if(total<=100000){
            tax=total*5/100;
        }
        else{
            tax=total*10/100;
        }

        net=total-tax;

        cout<<"Bonus: Rs. "<<b<<endl;
        cout<<"Salary after bonus: Rs. "<<total<<endl;
        cout<<"Tax: Rs. "<<tax<<endl;
        cout<<"Final salary: Rs. "<<net;
    }

    return 0;
}
