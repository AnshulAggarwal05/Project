#include <bits/stdc++.h>
using namespace std;

void comp_level1(){
	srand(time(0));
	int i= rand()%2 + 1;
	cout<<"Welcome to the Game.\nThe goal of the game is simple: First person to reach 0 or less wins the game.\n";
	cout<<"First let's have a look at the rules:\nYou can only subtract 1 or 2 from the number 21\n";
	cout<<"Press 0 to give up!\n";
	int number=21;
	cout<<number<<"\n";
	int p1;
	while(number > 0){
		cout<<"player 1 press 1 or 2 \n"<<"P1:";
		cin>>p1;
		while(p1>2 || p1<0){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P1:";
			cin>>p1;
		}
		if(p1==0){
			cout<<"player 1 gave up!\n"<<"computer is the winner\n";
			break;
		}
		number=number-p1;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<" player 1 is the winner";
			break;
		}
		number=number-i;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<"computer is the winner";
		}
	}
}
void comp_level2(){
	srand(time(0));
	int i= rand()%3 +1;
	cout<<"Welcome to the Game.\nThe goal of the game is simple: First person to reach 0 or less wins the game.\n";
	cout<<"First let's have a look at the rules:\nYou can only subtract 1 or 2 or 3 from the number 29\n";
	cout<<"Press 0 to give up!\n";
	int number=29;
	cout<<number<<"\n";
	int p1;
	while(number > 0){
		cout<<"player 1 press 1 or 2 or 3 \n"<<"P1:";
		cin>>p1;
		while(p1>3 || p1<0){
			cout<<"invalid input.....Please try again pressing 1 or 2 or 3\n"<<"P1:";
			cin>>p1;
		}
		if(p1==0){
			cout<<"player 1 gave up!\n"<<"player 2 is the winner\n";
			break;
		}
		number=number-p1;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<" player 1 is the winner";
			break;
		}
		number=number-i;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<"computer is the winner";
		}
	}
}	
void Level1(){
	cout<<"Welcome to the Game.\nThe goal of the game is simple: First person to reach 0 or less wins the game.\n";
	cout<<"First let's have a look at the rules:\nYou can only subtract 1 or 2 from the number 21\n";
	cout<<"Press 0 to give up!\n";
	int number=21;
	cout<<number<<"\n";
	int p1,p2;
	while(number > 0){
		cout<<"player 1 press 1 or 2 \n"<<"P1:";
		cin>>p1;
		while(p1>2 || p1<0){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P1:";
			cin>>p1;
		}
		if(p1==0){
			cout<<"player 1 gave up!\n"<<"player 2 is the winner\n";
			break;
		}
		number=number-p1;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<" player 1 is the winner";
			break;
		}
		cout<<"player 2 press 1 or 2 \n"<<"P2:";
		cin>>p2;
		while(p2>2 || p2<0 ){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P2:";
			cin>>p2;
		}
		if(p2==0){
			cout<<"player 2 gave up!\n"<<"player 1 is the winner\n";
			break;
		}
		number=number-p2;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<"player 2 is the winner";
		}
	}
}
void Level2(){
	cout<<"Welcome to the Game.\nThe goal of the game is simple: First person to reach 0 or less wins the game.\n";
	cout<<"First let's have a look at the rules:\nYou can only subtract 1 or 2 or 3 from the number 29\n";
	cout<<"Press 0 to give up!\n";
	int number=29;
	cout<<number<<"\n";
	int p1,p2;
	while(number > 0){
		cout<<"player 1 press 1 or 2 or 3 \n"<<"P1:";
		cin>>p1;
		while(p1>3 || p1<0){
			cout<<"invalid input.....Please try again pressing 1 or 2 or 3\n"<<"P1:";
			cin>>p1;
		}
		if(p1==0){
			cout<<"player 1 gave up!\n"<<"player 2 is the winner\n";
			break;
		}
		number=number-p1;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<" player 1 is the winner";
			break;
		}
		cout<<"player 2 press 1 or 2 or 3\n"<<"P2:";
		cin>>p2;
		while(p2>3 || p2<0 ){
			cout<<"invalid input.....Please try again pressing 1 or 2\n"<<"P2:";
			cin>>p2;
		}
		if(p2==0){
			cout<<"player 2 gave up!\n"<<"player 1 is the winner\n";
			break;
		}
		number=number-p2;
		cout<<"Remaining number is:"<<number<<"\n";
		if(number<=0){
			cout<<"player 2 is the winner";
		}
	}
}
	int main(){
		int level,against;
		cout<<"press 1 to play against computer and press 2 to play against human\n";
		cin>>against;
		if(against==1){
			cout<<"choose the Difficulty between 1 or 2\n";
			cin>>level;
			if(level==1){
				comp_level1();
			}
			if(level==2){
				comp_level2();
			}
		}
		if(against==2){
			cout<<"choose the difficulty between 1 or 2\n";
			cin>>level;
			if(level==1){
				Level1();
			}
			if(level==2){
				Level2();
			}
		}
		return 0;
	}
