#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<Windows.h>

using namespace std;

fstream test;

int main()
{
	system("cls");
	string input, inputanswer, noun, adjective;
	
	cin >> input;
	test.open("test.txt", fstream::in);
	while (!test.eof())
	{
		test >> inputanswer >> noun >> adjective;
		if (input == inputanswer)
		{
			cout << input << " " << noun << " " << adjective << ".";
			test.close(); system("pause"); main();
		}
		
	}
	if (input != inputanswer)
	{
		cout << "error";
		test.close(); system("pause");
		main();
	}
	
}