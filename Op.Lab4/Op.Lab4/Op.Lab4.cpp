//
//Завдання:
//Сума чисел х та у, не перевищує 25, при тому, що х менше 10
//
#include <iostream>

using namespace std;
void induct();
void deduct();
int x, y, xAndySum;

int main(){
    int choice;
    cout << "Choose between induction and deduction:\n 1) Induction\n 2) Deduction" << endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        induct();
        main();
        break;
    case 2:
        deduct();
        main();
        break;
    default:
        cout << "Error: not correct command!" << endl;
        break;
    }
    return 0;
}
void induct() {
    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;
    xAndySum = x + y;
    if (xAndySum <= 25 && x < 10){      
        cout << "x + y =  ";
        cout << xAndySum << endl;
    }
    else{
        cout << "Error: not correct condition!" << endl;
    }
}
void deduct() {
    cout << "Enter x: "; cin >> x;
    cout << "Enter y: "; cin >> y;
    xAndySum = x + y;
    if (xAndySum > 25 || x >= 10) {    
        cout << "Error: not correct condition!" << endl;
    }
    else {
        cout << "x + y =  ";   cout << xAndySum << endl;
    }
}