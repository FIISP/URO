#include <bits/stdc++.h>
using namespace std;

class Robot{
	private :
		
	public :
		string name;
		int health;
		int damage;
		int ulti;
		int ultidamage;
		Robot(string inputname, int inputhealth, int inputdamage, int inputulti, int inputultidamage){
			name = inputname;
			health = inputhealth;
			damage = inputdamage;
			ulti = inputulti;
			ultidamage = inputultidamage;
			
//			cout << name << endl;
//			cout << health << endl;
//			cout << damage << endl;
//			cout << ulti << endl;
//			cout << ultidamage << endl;
		}
	int getDamage(){
		int x = (rand()%damage)+1;
		return x;
	}
	void bermain(int x, int y){
		
	}
		
};
		
int main(){
	int x,y;
	srand((unsigned) time(NULL));
	Robot robot1 = Robot("RoboOne",110,15,1,25);
	Robot robot2 = Robot("RoboTwo",100,20,1,30);
	Robot robot3 = Robot("RoboThree",95,23,1,32);
    
	
	cout << "Choose robots for the battle:" << endl;
	cout << "1. RoboOne" << endl;
	cout << "2. RoboTwo" << endl;
	cout << "3. RoboThree" << endl;
	cout << "Select the first robot:";
	cin >> x;
	cout << "Select the second robot:";
	cin >> y;
	cout << "Battle Start!" << endl;
	if(x==1){
		
	}
	cout << robot1.getDamage() << endl;
}