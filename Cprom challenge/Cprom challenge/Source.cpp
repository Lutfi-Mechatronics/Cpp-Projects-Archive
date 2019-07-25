#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<fstream>
#include<Windows.h>

using namespace std;

int i, a,s,j;
int main()
{
	cin >> i;
	
	{
		j = s % 2;
		if (j != 0)
			cout << i << " is an even number.";
		else
		{
			j = s % 3;
			if (j != 0)
				cout << i << " is a multiple of 3";
			else
			{
				j = s % 5;
				if (j != 0)
					cout << i << " is a multiple of 3";
				else
					cout << i << " is prime";
			}
		}
	}

	system("pause");
	return 0;
}