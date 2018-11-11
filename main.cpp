#include <iostream> 
#include "pow.h"
#include <cmath>

using namespace std;

int main()
{
	double a;
	double b;
	int k;
	cout << 'a';cin >> a;
	cout << 'b'; cin >> b;
	cout << "komanda: ";
	cin >> k;

	switch (k)

	{
	case '1':cout << MyMylt(a, b); break;
	//case '2':cout <<     ; break;
	//case '3':cout <<     ; break;
	//case '4':cout <<     ; break;

	default:
		break;

	system("pause");
	return 0;
