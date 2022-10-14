// Suss.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");

	// ПІБ
	string studentFullName = "Aomine Daiki";
	// Ідентифікатор студента/залікової книжки
	unsigned int studentID = 5;
	// Вік студента
	unsigned short int studentAge = 16;
	// Зріст гравця
	unsigned short int growth = 192 ;
	// Вага гравця
	unsigned short int weight = 85 ;
	// День народження гравця
	float BirthDay = 31.07;
	// Непереможний?
	bool invincible = false;
	// Адреса прописки гравця
	string originAddress = "Tokyo, Japan";
	unsigned int totalMemoryInBytes = sizeof(studentFullName) +


		sizeof(studentID) +
		sizeof(studentAge) +
		sizeof(growth) +
		sizeof(weight) +
		sizeof(BirthDay) +
		sizeof(invincible) +
		sizeof(originAddress);

	cout << "Iм'я гравця:\t\t" << studentFullName << endl;
	cout << "Номер гравця в командi:\t" << studentID << endl;
	cout << "Вiк гравця:\t\t" << studentAge << endl;
	cout << "Зрiст гравця(см):\t\t" << growth << endl;
	cout << "Вага гравця(кг):\t\t" << weight << endl;
	cout << "День народження гравця:\t\t" << BirthDay << endl;
	cout << "Непереможний:\t" << ((invincible) ? "Так" : "Нi") << endl;
	cout << "Адреса:\t\t\t" << originAddress << endl;

	cout << "Загальний об'єм використанної пам'ятi (в байтах):\t" <<

		totalMemoryInBytes << endl;
}