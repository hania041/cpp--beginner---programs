#include<iostream>
using namespace std;
int main(){
	double value,result;
	int choice;
	cout<<"UNIT CONVERSION!\n";
	cout<<"1. inches to centimeters.\n";
	cout<<"2. gallons to liters.\n";
	cout<<"3. miles to kilometers.\n";
	cout<<"4. pounds to kilograms.\n";
	cout<<"5. MB to KB.\n";
	cout<<"\n Enter choice 1-5: ";
	cin>>choice;
	cout<<"enter value to convert: ";
	cin>>value;
	switch(choice){
		case 1: result = value * 2.54;
		        cout<<value<<" inch = "<<result <<" cm"<<endl;break;
		case 2: result = value* 3.785;
		        cout<<value<<" gallons = "<<result<<" liters"<<endl;break;
		case 3: result = value * 1.609;
		        cout<<value<<" mile = "<<result<<" km"<<endl;break;
		case 4: result = value * 0.4536;
		        cout<<value<<" pounds = "<<result<<" kg"<<endl;break;
		case 5:result = value * 1024;
		       cout<<value<<" MB = "<<result<< " KB";break;
		default: cout<<"invalid choice";
		
	}
	return 0;
}
