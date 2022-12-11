#include<iostream>
#include<string>
#include<Windows.h>
using namespace std;
string name;
int age;
string sex;
void enteringName();
void enteringAge();
void choosing();
void data();
void clear();

class Person {
public:
	string name = "None";
	int age = 0;
	string sex = "None";
	Person(string name, int age, string sex) {
		setName(name);
		setAge(age);
		setSex(sex);
	}
	void setName(string name) {
		this->name = name;
	}
	void setAge(int age) {
		this->age = age;
	}
	void setSex(string sex) {
		this->sex = sex;
	}
	string getName() {
		return name;
	}
	int getAge() {

		return age;
	}
	string getSex() {
		return sex;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(CP_UTF8);

	data();
	int option;
	bool exit = true;
	cout << "Actions with data:" << endl;
	cout << "1.) Refresh data." << endl;
	cout << "2.) Delete data." << endl;
	cout << "3.) Do nothing." << endl;

	cout << "Choose action:" << endl;
	cin >> option;
	do
	{
		switch (option)
		{
		case 1:
			clear();
			data();
			exit = false;
			break;
		case 2:
			clear();
			exit = false;
			break;
		case 3:
			exit = false;
			break;
		default:
			cout << "Unknown command." << endl;
			exit = false;
			break;
		}
	} while (exit);
}
void data() {
	cout << "Entering of your data:" << endl;
	enteringName();
	enteringAge();
	choosing();

	Person person = Person(name, age, sex);
	cout << "Your name: " + person.getName() << endl;
	cout << "Your age: " + to_string(person.getAge()) << endl;
	cout << "Your sex: " + person.getSex() << endl << endl;
}
void clear() {
	string name = "None";
	int age = 0;
	string sex = "None";
}
void enteringName() {
	cout << "Enter your name: ";
	cin >> name;
}
void enteringAge() {
	cout << "Enter your age: ";
	cin >> age;
}
void choosing() {
	int choose;
	cout << "Choose your sex: " << endl;;
	cout << "1) Male" << endl;
	cout << "2) Female" << endl;
	cout << "3) Combat helicopter A322/1" << endl;
	cin >> choose;
	switch (choose)
	{
	case 1:
		sex = "Your sex is male.";
		break;
	case 2:
		sex = "Your sex is female.";
		break;
	case 3:
		sex = "Your sex is combat helicopter A322/1. You won this life before you were born.";
		break;
	default:
		break;
	}
}