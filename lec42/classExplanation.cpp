#include <iostream>
#include <String>
using namespace std;
class Hero
{
	private:
	char name;
	int health;
	char level;
	char getName(){
		return name;
	};
	int getHealth()
	{
		return health;
	}
	char getLevel()
	{
		return level;
	}
	void setName(char n)
	{
		name = n;
	}
	void setHealth(int h)
	{
		health = h;
	}
	void setLevel(char l)
	{
		level = l;
	}
	
};
int main()
{
	Hero paul;
	paul.name = 'MMnoon';
	paul.health = 80;
	paul.level = 'A';
	cout << "Size of : " << sizeof(paul) << endl;
	cout << "Name of hero: " << paul.name << endl;
	cout << "Health of Paul: " << paul.health << endl;
	cout << "Level of Paul: " << paul.level << endl;
		
}
