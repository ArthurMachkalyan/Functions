#include <iostream>
using namespace std;

#define CALCULATOR
#define FACTORIAL
#define DEGREE

int Deg(int number, int degree);
int Fact(int number);
int Add(int a, int b);  // ���������� ������� 
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);

//Default arguments, default parameters 

void main() {
	setlocale(LC_ALL, "");

#ifdef CALCULATOR
	
	int a, b;
	cout << "������� ��� �����: "; cin >> a >> b;
	int c = Add(a,b); // �����, ������������� ������� (Function call)
	cout << a << " + " << b << " = " << c << endl;
	cout << a << " - " << b << " = " << Sub(a, b) << endl;
	cout << a << " * " << b << " = " << Mul(a, b) << endl;
	cout << a << " / " << b << " = " << Div(a, b) << endl;

#endif // CALCULATOR
	 
#ifdef FACTORIAL
	
	int number;
	cout << "������� ���������: "; cin >> number;
	cout << Fact(number);

#endif // FACTORIAL

#ifdef DEGREE

	int number;
	int degree;
	cout << "������� �����: "; cin >> number;
	cout << "������� �������: "; cin >> degree;
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

// ���������� ������� (����������� ������� - Function definition)

int Add(int a, int b) {   
	
	//Addition - ��������
	int c = a + b;
	return c;
}

int Sub(int a, int b) {

	//Subtraction - ���������
	return a - b;
}

int Mul(int a, int b) {
	//Multiplication - ���������
	return a * b;
}

double Div( int a, int b) {
	//Division - �������
	return double(a) / b;
}







