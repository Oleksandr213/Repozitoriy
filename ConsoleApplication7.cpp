#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	int n1 = 10, s = 100, m = 50, t;
	double n2;

	n2 = (n1 * s) / m;
	t = s - m;
	cout << "n2=" << n2 << endl;

	system("pause");
	return 0;
}
