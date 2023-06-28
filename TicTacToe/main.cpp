#include <iostream>
#include <conio.h>	
using namespace std;

#define tab "\t";

#define VERTICAL_OFFSET "\n\n\n\n\n"
#define HORIZONTAL_OFFSET "\t\t\t\t\t"

void PrintField(char field[], const int n, player);
void Move(char field[], const int n, player);


void main() {
	setlocale(LC_ALL, "");
	const int n = 9;
	char field[n] = {/*0, 1, 2, 3, 4, 5, 6, 7, 8, 9*/ };
	PrintField(field, n, 'X');
	Move(field, n, player);
}

void PrintField(char field[], const int n, char player) {
	system("CLS");
	cout << VERTICAL_OFFSET;
	for (int i = 6; i >= 0; i-=3)
	{
		cout << HORIZONTAL_OFFSET;
		cout << " ";
		for (int j = 0; j < 3; j++) 
		{
			cout << /*(int)*/field[i + j];
			if (j < 2)cout << " | ";
		}
		cout << endl;
		cout << HORIZONTAL_OFFSET;
		if(i>0)cout << "--- --- ---";
		cout << endl;

	}
	Move(field, n, player);
}

void Move(char field[], const int n, player) {
	/*for (int i = 0; i < 256; i++)
	{
		cout << i << "\t " << (char)i << endl;
	}*/
	char key;
	do
	{
	key = _getch();
	if (key == 27)return;
	field[key - 49] = player;
	if (key < '1' || key > '9')cout << "Error: выход за пределы игрового поля" << endl;
	} while (key < '1' || key > '9');
	PrintField(field, n, player);
}

 




