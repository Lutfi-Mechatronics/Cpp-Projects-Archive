




#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include <stdlib.h>
#include<fstream>
#include<Windows.h>

using namespace std;

int a = 0;

void hello();

fstream Hello;

string name;

int main()
{
	system("Color aa");
	string Menu[5] = { "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n                             View Product Details",
		"                  Update Product Details", "                  Attending Customers",
		"\n\n                             Main Menu ( Portal )", "                  Log0ut" };//30 \n, 30 spaces, 20 spaces
	

	while (true)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		for (int I = 0; I < 5; I = I + 1)
		{
			

			if (I == a)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);   // 12 must change to set colour to red
				cout << Menu[I] ;
			}

			else
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);   //set the text colour back to blue
				cout << Menu[I] ;
			}

		}

		while (true)
		{

			if (GetAsyncKeyState(VK_LEFT) != 0)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15); //Go to the bottom (Exit)
				a -= 1; 
				
				if (a == -1)
				{
					a = 4;   
				}break;

			}

			else if (GetAsyncKeyState(VK_RIGHT) != 0)
			{
				a += 1;
				if (a == 5)
				{
					a = 0;
				}break;
			}

			else if (GetAsyncKeyState(VK_CONTROL) != 0)
			{
				switch (a)
				{
				case 0:
				{ cout << endl<< "hello"; system("pause"); main(); break; }
				case 1:
				{ cout << endl << "hello"; system("pause"); main(); break; }
				case 2:
				{ cout << endl << "hello"; system("pause"); main(); break; }
				case 3:
				{ cout << endl << "hello"; system("pause"); main(); break; }
				case 4:
				{exit(EXIT_SUCCESS); }
				}
				a = 5;
			}

		}
		Sleep(130);
	}
	
}

