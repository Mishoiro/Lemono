#include<iostream>
#include<string>
#include<Windows.h>

using namespace std;
void bookName();
void bookAuthor();
void bookRating();
bool isNumber(string rating);
string rating = "";
string title = "";
string author = "";

class Book {
private:
	string title = "None";
	string author = "None";
	int rating = 0;
public:
	Book(string title, string author, int rating) {
		setTitle(title);
		setAuthor(author);
		setRating(rating);
	}
	void setTitle(string title) {
		this->title = title;
	}
	void setAuthor(string author) {
		this->author = author;
	}
	void setRating(int rating) {
		this->rating = rating;
	}
	string getTitle() {
		return title;
	}
	string getAuthor() {
		return author;
	}
	int getRating() {
		return rating;
	}
};
int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleOutputCP(CP_UTF8);

	int option;
	wcout << L"Меню:" << endl;
	wcout << L"1.) Введіть назву книги:" << endl;
	wcout << L"2.) Введіть автора книги:" << endl;
	wcout << L"3.) Введіть оцінку книги: " << endl;

	do
	{
		cout << "Оберіть пункт меню:" << endl;
		wcin >> option;
		
		switch (option)
		{
		case 1:
			bookName();
			break;
		case 2:
			bookAuthor();
			break;
		case 3:
			bookRating();
			if (!isNumber(rating)) 
			{
				rating = "";
				cout << "Ви помилилися. Спробуйте знову." << endl;
			}
			break;
		default:
			cout << "Не зрозуміла команда" << endl;
			break;
		}
		
	} while (title == "" || author == "" || rating == "");
	if (stoi(rating) > 10)
	{
		rating = "10";
	}

	Book book = Book(title, author, stoi(rating));
	cout << "Назва книги: " + book.getTitle() << endl;
	cout << "Автор книги: " + book.getAuthor() << endl;
	cout << "Оцінка книги: " + to_string(book.getRating()) << endl;
	return 0;
}
void bookName()
{
	cout << "Введіть назву книги:" << endl;
	cin.ignore();
	getline(cin, title);

}
void bookAuthor()
{
	cout << "Введіть автора книги:" << endl;
	cin.ignore();
	getline(cin, author);
}
void bookRating()
{
	cout << "Введіть оцінку книги:" << endl;
	cin >> rating;
}
bool isNumber(string rating)
{
	bool isNum = true;
	for (int i = 0; i < rating.length(); i++)
	{
		if (!isdigit(rating[i]))
		{
			isNum = false;
		}
	}
	return isNum;
}