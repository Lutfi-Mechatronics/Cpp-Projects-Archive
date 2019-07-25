


#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b,c,d;

	c= "raven";
	d = "claw";

	while (true)
	{
		cout << "\nUsername : ";
		cin >> a;
		cout << "\nPassword";
		cin >> b;

		if (a != c || b != d)
		{
			cout << "\n\t\tAccess Denied";
			true;
		}
		else if (a != c && b != d)
		{
			cout << "\n\t\tAccess Denied";
			true;
		}
		else
		{
			break;

		}
	}

	cout << "\t\tAccess Granted";
	
	return 0;
}