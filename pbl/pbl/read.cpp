#include < iostream>
#include <fstream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	int num, sum = 0, a;
	ifstream inFile;
	inFile.open("example1.txt");
	if (!inFile)
		cout << "File unavailable" << endl;

	else
		while (true)
		{
			while (!inFile.eof())                    //
			{
				inFile >> num;                      // reading from the text 
				if (inFile.fail())
					break;
				else
				{
					cout << num << endl;
					sum += num;
				} // end of while

			} //end of else
			cout << "sum is : " << sum << endl;
			cout << "rerun : \t1).yes\t2).no";
			cin >> a;
			if (a == 1)
				true;
			else
				break;
		}
	inFile.close();
	system("pause");
	return 0;

}