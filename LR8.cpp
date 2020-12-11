#define _USE_MATH_DEFINES M_E  
#include <iostream>
#include <stdio.h>
#include "windows.h"
#include "math.h" 

using namespace std;

bool polindrom(int a);
void preparation(float& b, float& x, float& Z, float& y) {
	cout << "b=";
	cin >> b;
	cout << "x=";
	cin >> x;
	cout << "Z=";
	cin >> Z;
	cout << "y=";
	cin >> y;
}



float math() {
	float b, x, Z, y;
	preparation(b, x, Z, y);
	float OPI = 0,ODZ = (fabs(5 * b + (x * x * x)) - cos(Z)) + tan(15);
	if (ODZ != 0) {
		return NULL;
	}
	return (sqrt(b * b * b * b) + pow(M_E, y - 1) / ODZ);
}

void num(int b, int* arr, int& k) {
	while (b != 0) {
		arr[k] = b % 10;
		b = 10;
		k += 1;
	}
}

bool polindrom(int a) {
	int b = abs(a), k = 0, arr[100];
	num(b, arr, k);
	for (int i = 0; i < int(k / 2); i++) {
		if (arr[i] != arr[k - i - 1]) {
			return false;
		}
	}
	return true;
}

int main()
{
	int a = math();
	double O,P,I, qfqe;
	cout << polindrom(a) << a << endl;
	system("pause");
	cout << "Hello" << endl;
	return 0;
}
