#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<Windows.h>

using namespace std;

void read(); void update(); void app(); void update2();

fstream test;

int a;
string input, inputanswer, noun, adjective, adjectiveinput, nouninput;
string file[3];

int main()
{

	system("cls");
	string Menu[4] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             Read",
		"                  Update", "                  Append", "                  Exit" };


	while (true)
	{

		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   // change colour to blue


		for (int I = 0; I < 4; I = I + 1)
		{

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);   // change colour to purple
				cout << Menu[I];
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //change colour to blue
				cout << Menu[I];
			}

		}


		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				a -= 1;
				if (a == -1)
				{
					a = 3;                                        //Go to the right (Exit)
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 4)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{read(); break; }
				case 1:
				{update(); break; }
				case 2:
				{app(); break; }
				case 3:
				{exit(EXIT_SUCCESS); }
				}
				a = 4;
			}

		}

		Sleep(130);                                       // Sensitivity of the arrow keys

	}

	return 0;

}

void read()
{

	system("cls");
	cin >> input;
	test.open("name.txt", fstream::in);
	while (!test.eof())
	{
		test >> file[1] >> file[2] >> file[3];
		if (input == file[1])
		{
			cout << file[1] << " " << file[2] << " " << file[3] << ".";
			system("pause"); test.close(); main();
		}

	}
	if (input != inputanswer)
	{
		cout << "error";
		test.close();
		system("pause"); main();
	}

}

void update()
{
	system("cls");
	cin >> input;
	test.open("name.txt", fstream::in);
	while (!test.eof())
	{
		test >> file[1] >> file[2] >> file[3];
		if (input == file[1])
		{
			test.close();

			string nameReplace;
			cout << "Enter new adjective : ";
			cin >> nameReplace;

			if (file[3] != nameReplace)
			{
				test.open("name.txt", fstream::app);
				file[3] = nameReplace;
				test << file[3];
				
				test.close();
				system("pause"); main();
			}

		}

	}
	if (input != inputanswer)
	{
		cout << "error";
		test.close();
		system("pause"); main();
	}
}
void app()
{
	system("cls");
	test.open("name.txt", fstream::app);
	cout << "enter name, noun, adjecive : ";
	cin >> input >> nouninput >> adjectiveinput;
	file[1] = input;
	file[2] = nouninput;
	file[3] = adjectiveinput;
	cout << inputanswer << " " << noun << " " << adjective << ".";
	test << endl << file[1] << "\t" << file[2] << "\t" << file[3];


	test.close();
	system("pause");
	main();
}

