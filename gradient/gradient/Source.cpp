#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
	double n, G,S,F;
	int f;
	system("cls");
	cin >> n>>S>>F;


	F = (pow(1.618,n)-pow((-1.618),(-n))) / sqrt(5);
	f = F;
	G = (f - (S / n)) / (log (n)/log(2.718281828) );

	cout << G; system("pause");
	main();
}