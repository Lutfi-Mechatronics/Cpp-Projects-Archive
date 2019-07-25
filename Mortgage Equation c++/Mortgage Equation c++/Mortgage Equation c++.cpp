#include <iostream>
#include<cmath>
#include <iomanip>
using namespace std;
int main()

{
	double M, L, i, n;

	cout << "Loan Payment : $";
	cin >> L;
	cout << "Interest rate in percentage : ";
	cin >> i;
	cout << "Number of Purchase : ";
	cin >> n;

	M = -(L*((i*pow((1.0 + i) / n)) / pow((1.0 + i) / n) - 1));

	cout << "Total payment : $" << M;

	system("pause");
	return 0;
}