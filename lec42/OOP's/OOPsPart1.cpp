#include <iostream>
#include <stdlib.h>
#include <String.h>
using namespace std;
class Person
{
	public:
	string name = "Zakey";
	string fatherName;
	string address;
	char *country;
	//without parameter constructor
	Person()
	{
		cout << " Constructor Called..... " << endl;
		country = new char[100];
	}
	Person(string name, string fatherName, string address  )
	{
		this -> name = name;
		this -> fatherName = fatherName;
		this -> address = address;
		cout << "This : " << this << endl;
		cout << "Parameterized " << endl;
		cout << name << endl;
		cout << fatherName << endl;
		cout << address << endl;


	}
	//copy constructor it must be pass by reference
	Person(Person& temp)
	{
			cout << "copy constructor ccalled " << endl;
		this->name = temp.name;
		this->fatherName = temp.fatherName;
		this->address = temp.address;
	}
	string getName(){
		return name;
	}
	string setName(string n){
		name = n;
	}
	string getfatherName(){
		return fatherName;
	}
	string setfatherName(string f){
		name = f;
	};
	string getCountry(){
		return country;
	}
	void setCountry(char country[])
	{
		strcpy(this->country, country);
	}

	void print(){
		cout << this->name << endl;
		cout << this ->fatherName << endl;
		cout << this ->address << endl;
		cout << this ->country << endl;
		cout << strcpy(this->country, country) << endl;
	}
	
};
int main()
{



	Person person1;
	person1.getName();
	person1.setName("Zakey");
	person1.print();


	Person person2(person1);
	person2.print();



/* //copy cosntructor one into other
Person zakey("Mmnoon" , "Amin" , "Addree");
zakey.print();
Person mmnoon(zakey);
mmnoon.print();
 */

	/* // Statically declaring object
	Person p;
	p.setName("Mmnoon");
	p.setfatherName("Amin");
	cout << "Static obj:" << endl;
		cout << sizeof(p) << endl;

	cout << "Name is " << p.getName() << endl;
	cout << "Father name is " << p.getfatherName() << endl;


	//Dynamically
	Person *b = new Person;
	b->setName("Zakey");
	b->setfatherName("Amin Saud");
	/* cout << "Dynamic obj:" << endl;
	cout << sizeof(b) << endl;
	cout << "Name is " << (*b).getName() << endl;
	cout << "Father name is " << (*b).getfatherName() << endl; */
	//instead of dereferencing like () instead using arrow
	/*cout << "Name is " << b->getName() << endl;
	cout << "Father name is " << b->getfatherName() << endl; */

	

}