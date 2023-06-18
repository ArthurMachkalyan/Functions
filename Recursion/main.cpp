#include<iostream>
#include<conio.h>
using namespace std;

//#define ELEVATOR
//#define FACTORIAL
//#define POWER

#define tab "\t"

void elevator(int floor);
int factorial(int number);
int power(int number, int degree);

void main() {
	setlocale(LC_ALL, "");

#ifdef POWER
	int number, degree;
	cout << "Введите число: "; cin >> number;
	cout << "Введите степень: "; cin >> degree;
#endif // POWER

	int n;
	int a = 0, b = 1, c = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		a = b;
		b = c;
		c = a + b;
		cout << c << endl;
	}






#ifdef FACTORIAL
	int number;
	cout << "Введите факториал: "; cin >> number;
	cout << factorial(number);
#endif // FACTORIAL


#ifdef ELEVATOR
	int floor;
	cout << "Введите номер этажа: "; cin >> floor;
	elevator(floor);
#endif // ELEVATOR


}

int factorial(int number) {
	if (number == 0 || number == 1)
	{
		return 1;
	}

	return number * factorial(number - 1);
}




void elevator(int floor) {
	if (floor == 0) {
		cout << "Вы в подвале" << endl;
		return;
	}
	cout << "Вы на " << floor << " этаже" << endl;
	elevator(floor - 1);
	cout << "Вы на " << floor << " этаже" << endl;
}