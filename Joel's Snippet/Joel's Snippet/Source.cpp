#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
using namespace std;

int getchoice();
void updateschedule(string uname);
void appendschedule(string name, string date, string name2, string d1, string d2, string d3, string d4, string d5);
void resetschedule();
void viewschedule();

int main()
{
	fstream myFile;
	int choice;
	string uname, name, date;

	choice = getchoice();

	while (choice >= 1 && choice <= 3)
	{
		choice = getchoice();
		if (choice == 1) viewschedule();
		else if (choice == 2) updateschedule(uname);
		else if (choice == 3) resetschedule();
		else if (choice == 0) break;
	}

	system("pause");
	return 0;
}

int getchoice()
{
	int choice;
	system("cls");

	cout << "Please enter choice:" << endl;
	cout << "1. View Schedule" << endl;
	cout << "2. Update Schedule" << endl;
	cout << "3. Reset Schedule" << endl;
	cout << "0. Exit" << endl;
	cin >> choice;
	return choice;
}

void updateschedule(string uname)
{
	fstream myFile;
	string name, date;

	string d1, d2, d3, d4, d5, name2;
	cout << "Please enter name to update to:";
	cin >> name2;
	cout << "Please select up to 5 dates to update:";
	cin >> d1 >> d2 >> d3 >> d4 >> d5;

	myFile.open("scheduletest.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file" << endl;
	else
	{
		while (!myFile.eof())
		{
			myFile >> name >> date;
			if (myFile.fail())
				break;
			else
			{
				appendschedule(name, date, name2, d1, d2, d3, d4, d5);
			}
		}
		myFile.close();
		cout << "Data saved" << endl;
	}
}

void appendschedule(string name, string date, string name2, string d1, string d2, string d3, string d4, string d5)
{
	fstream myFile;
	myFile.open("scheduletest2.txt", fstream::app);
	if (!myFile)
		cout << "Unable to open file" << endl;
	else
	{
		if (date == d1 || date == d2 || date == d3 || date == d4 || date == d5) myFile << name2 << "\t" << date << endl;
		else myFile << name << "\t" << date << endl;
	}
	myFile.close();
}

void viewschedule()
{
	fstream myFile;
	string name, date;

	myFile.open("scheduletest.txt", fstream::in);
	if (!myFile)
		cout << "Unable to open file" << endl;
	else
	{
		while (!myFile.eof())
		{
			myFile << name << date;
			if (myFile.fail())
				break;
			else
			{
				cout << setw(20) << name << date << endl;
			}
		}
		myFile.close();
	}
}

void resetschedule()
{
	fstream myFile;
	string name;
	int date;

	name = "0000";

	myFile.open("scheduletest.txt", fstream::out);
	if (!myFile)
		cout << "Unable to open file";
	else
	{
		for (date = 1; date <= 31; date++)
		{
			myFile << name << "\t" << date << "a" << endl;
			myFile << name << "\t" << date << "b" << endl;
		}
	}
	myFile.close();
}