#include<iostream>
#include<conio.h>
using namespace std;

//#define ELEVATOR
//#define FACTORIAL
//#define POWER
#define FIBONACCI

#define tab "\t"

void elevator(int floor);
int factorial(int number);
double power(int number, int degree);
void fibonacci(long long int n, long long int a = 0, long long int b = 1);

void main() {
	setlocale(LC_ALL, "");

#ifdef POWER
	int number, degree;
	cout << "Введите число: "; cin >> number;
	cout << "Введите степень: "; cin >> degree;
	cout << power(number, degree);
#endif // POWER


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

#ifdef FIBONACCI
	int n;
	cout << "Введите предельное число: "; cin >> n;
	fibonacci(n);
#endif // FIBONACCI


}

int factorial(int number) {
	return number == 0 ? 1 : number * factorial(number - 1);
}

double power(int number, int degree) {
	//if (degree == 0) return 1;
	//else if (degree > 0) return number * power(number, degree - 1);
	//else return 1 / power(number, -degree);
	return degree == 0 ? 1 : degree > 0 ? number * power(number, degree - 1) : 1 / power(number, -degree);
}

void fibonacci(long long int n, long long int a, long long int b) {
	if (a > n)return;
	cout << a << tab;
	fibonacci(n, b, a + b);
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