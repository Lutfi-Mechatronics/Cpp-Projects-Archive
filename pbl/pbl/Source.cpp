#include < iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	ofstream inFile;
	string name;
	double salary;
	inFile.open("salary.txt");

	if (!inFile)
		cout << "Unable to access file";

	else
	{
		int i = 0;
		while (i < 3)
		{
			cout << "Name and Salary : ";
			cin >> name >> salary;
			cout << name << "     " << salary << endl;
			inFile << name << "     " << salary << endl;
			i++;

		}
		cout << "Data Saved";
	}
	inFile.close();
	system("pause");
	return 0;

}