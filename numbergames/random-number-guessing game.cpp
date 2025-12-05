#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	srand(time(0));
	int x = rand()%100+1;
	int guess;
	int atp = 0;
	do{
	atp++;
	cout<<"\n-->attempt "<<atp;
	cout<<"\nguess a number(1-100):";
	cin>>guess;
	if(guess<x)
	cout<<"\ntoo low!try again";
	else if(guess > x)
	cout<<"\ntoo high .try again!";
	else
	cout<<"\nyou are correct! the secret number was: "<<x;
}while(guess != x);
    cout<<"\nyou guessed it in "<<atp<<" attempts";
	return 0;
}