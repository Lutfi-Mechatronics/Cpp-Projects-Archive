#include<iostream>

using namespace std;

void z();
void y(), x(), w(), g();


double a, b, c, i,q;
const double Pi = 3.141592653;

int main()
{
	cout << "Enter grades : " ;
	cin >> i;
	if (i>=80 && i<=100)
	{
		z();
	}
	else if (i >= 70 && i <= 79)
	{
		y();
	}
	else if (i >= 60 && i <= 69)
		x();
	else if (i >= 50 && i <= 59)
		w();
	else if (i >= 0 && i <= 50)
		g();
	else if (i >= 0 && i <= 50)
	
	system("pause");
	return 0;

}

void z()
{
	cout << " Grade A";
	main();
}
void y()
{
	cout << " Grade B";
	main();
}
void x()
{
	cout << " Grade C";
	main();
}
void w()
{
	cout << " Grade D";
	main();
}
void g()
{
	cout << " Grade F";
	main();

}
