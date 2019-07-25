#include < iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int id, limit,i=0, a;
	double resource, percentage,sum=0;
	ifstream LabEx1;
	LabEx1.open("example1.txt");
	if (!LabEx1)
		cout << "File unavailable" << endl;

	else
		while (true)
		{
			while (!LabEx1.eof())                    //
			{
				LabEx1 >> id>>limit>>resource;                      // reading from the text 
				if (LabEx1.fail())
					break;
				else
				{
					percentage = (resource / limit) * 100;
					cout <<id  << limit<<resource<<percentage<<"%"<< endl;
					sum += resource;
					i = i + 1;
					
				} // end of while

			} //end of else
			cout << "Average sum is : " << sum/i << endl;
			cout << "rerun : \t1).yes\t2).no";
			cin >> a;
			if (a == 1)
				true;
			else
				break;
		}
	LabEx1.close();
	system("pause");
	return 0;

}
