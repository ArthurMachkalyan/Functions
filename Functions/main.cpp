#include <iostream>
using namespace std;

#define CALCULATOR
#define FACTORIAL
#define DEGREE

int Deg(int number, int degree);
int Fact(int number);
int Add(int a, int b);  // Объявление функций 
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

//Default arguments, default parameters 

void main() {
	setlocale(LC_ALL, "");

#ifdef CALCULATOR
	
	int a, b;
	cout << "Введите два числа: "; cin >> a >> b;
	int c = Add(a,b); // Вызов, использование функции (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;

#endif // CALCULATOR
	 
#ifdef FACTORIAL
	
	int number;
	cout << "Введите факториал: "; cin >> number;
	cout << Fact(number);

#endif // FACTORIAL

#ifdef DEGREE

	int number;
	int degree;
	cout << "Введите число: "; cin >> number;
	cout << "Введите степень: "; cin >> degree;
	cout << Deg(number, degree);

#endif // DEGREE


}

int Deg(int number, int degree) {
	int count = 1;

	for (int i = 0; i < degree; i++)
	{
		count = count * number;
	}
	return count;
}

int Fact(int number) {
	int count = 1;
	for (int i = 1; i < number; i++)
	{
		count += count * i;
	}
	return count;
}

// Реализация функций (Определение функций - Function definition)

int Add(int a, int b) {   
	
	//Addition - сложение
	int c = a + b;
	return c;
}

int Sub(int a, int b) {

	//Subtraction - вычитание
	return a - b;
}

int Mul(int a, int b) {
	//Multiplication - умножение
	return a * b;
}

double Div( int a, int b) {
	//Division - деление
	return double(a) / b;
}







