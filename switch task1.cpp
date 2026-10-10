#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<" Enter the number you want to determinre day of weeken from ( 1 to 7)"<<endl;
	cin>>a;
	switch(a){
		case 1:
			cout<<"Sundady";
			break;
			case 2:
				cout<<"Monday";
				break;
				case 3:
					cout<<"Tuesday";
					break;
					case 4:
						cout<<"wednesday";
						break;
						case 5:
							cout<<"Thursday";
							break;
							case 6:
								cout<<"Friday";
								break;
								case 7:
									cout<<"Saturday";
									break;
									default:
										cout<<"Invald Number";
	}
	return 0;
}
