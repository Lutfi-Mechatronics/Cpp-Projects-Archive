#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	
	double x, y;


	cout << "X" << right << setw(20) << "Y" << endl;


	for (double x=1.5,n=0; n <= x; n+=0.1)
	{
		y = (exp(-3 * n))*sin(2 * n);

		cout <<setprecision(4)<< n <<right<< setw(20) << y<<endl;
		
	}
	
	
	system("pause");
	return 0;
}