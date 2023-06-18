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
	cout << "������� �����: "; cin >> number;
	cout << "������� �������: "; cin >> degree;
#endif // POWER


#ifdef FACTORIAL
	int number;
	cout << "������� ���������: "; cin >> number;
	cout << factorial(number);
#endif // FACTORIAL


#ifdef ELEVATOR
	int floor;
	cout << "������� ����� �����: "; cin >> floor;
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
		cout << "�� � �������" << endl;
		return;
	}
	cout << "�� �� " << floor << " �����" << endl;
	elevator(floor - 1);
	cout << "�� �� " << floor << " �����" << endl;
}