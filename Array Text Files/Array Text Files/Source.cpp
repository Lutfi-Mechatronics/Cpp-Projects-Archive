#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<Windows.h>

using namespace std;

int main()
{
	fstream source;
	string source[2];
	int i = 2;

	source.open("Source1.txt", fstream::in);
	while (!source.eof())
	{
		for (int i = 1; i <= 2; i++)
		{
			source >> source[i];
			cout << source[1] << source[2];
		}
	}
	source.close();

	system("pause");
	return 0;
}