#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
	fstream CPF;
	string id;
	double G, M, bonusG, bonusM;
	int age;

	CPF.open("CPF.txt", fstream::in);

	if (!CPF)
		cout << "Error";

	else
	{
		cout << "NRIC" << setw(10) << "age" << setw(20) << "Bonus for G Account" << setw(20) << "Bonus for M Account"<<endl;
		while (!CPF.eof())
		{
			CPF >> id >> age >> G >> M;

			if (CPF.fail())
				break;
			else
			{
				if (age < 40)
				{
					bonusG = 100;
					M = 200;
				}

				if (age >= 40 && age <= 55)
				{
					bonusG = 500;
					M = (1 / 100)*M;
				}

				else
				{
					bonusG = 200 + (1 / 100)*G;
					M = (5 / 100)*M;
				}
			}
			
			cout << id << setw(10) << age << setw(10) << setprecision(4) << bonusG << setw(10) << setprecision(4) << M<<endl;
		}
	}
	CPF.close();
	system("pause");
	return 0;

}