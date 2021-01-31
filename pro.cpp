#include <bits/stdc++.h>
using namespace std;

void Level1(){
	cout<<"Welcome to the Game.\nThe goal of the game is simple: First person to reach 0 or less wins the game.\n";
	cout<<"First let's have a look at the rules:\nYou can only subtract 1 or 2 from the number 21\n";
	int number=21;
	cout<<number<<"\n";
	int p1,p2;
	while(number > 0){
		cout<<"player 1 press 1 or 2 \n"<<"P1:";
		cin>>p1;
		while(p1>2 || p1<=0){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P1:";
			cin>>p1;
		}
		number=number-p1;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<" Player 1 is the winner";
			break;
		}
		cout<<"player 2 press 1 or 2 \n"<<"P2:";
		cin>>p2;
		while(p2>2 || p2<=0 ){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P2:";
			cin>>p2;
		}
		number=number-p2;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<"Player 2 is the winner";
		}
	}
}
void Level2(){
	cout<<"Welcome to the Game.\nThe goal of the game is simple: First person to reach 0 or less wins the game.\n";
	cout<<"First let's have a look at the rules:\nYou can only subtract 1 or 2 or 3 from the number 29\n";
	int number=29;
	cout<<number<<"\n";
	int p1,p2;
	while(number > 0){
		cout<<"player 1 press 1 or 2 or 3 \n"<<"P1:";
		cin>>p1;
		while(p1>3 || p1<=0){
			cout<<"invalid input.....Please try again pressing 1 or 2 or 3\n"<<"P1:";
			cin>>p1;
		}
		number=number-p1;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<" player 1 is the winner";
			break;
		}
		cout<<"player 2 press 1 or 2 or 3\n"<<"P2:";
		cin>>p2;
		while(p2>3 || p2<=0 ){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P2:";
			cin>>p2;
		}
		number=number-p2;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<"player 2 is the winner";
		}
	}
}
	int main(){
		cout<<"choose the Difficulty between 1 or 2\n";
		int level;
		cin>>level;
		if(level==1){
			Level1();
		}
		if(level==2){
			Level2();
		}
		return 0;
	}
