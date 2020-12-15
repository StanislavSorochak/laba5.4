// Lab_05_4.cpp
// < Сорочак Станіслав >
// Лабораторна робота №5.4
// Рекурсивні функції.
// Варіант 24

#include <iostream>
#include <cmath>

using namespace std;

double S0(const int N)
{
	double S = 0;
	for (int i = 1; i <= N; i++)
		S += (sqrt(1 + cos(sin(i)) * cos(sin(i))) / (1 + sin(cos(i)) * sin(cos(i))));
	return S;
}

double S1(const int N, const int i)
{
	if (i > N)
		return 0;
	else
		return (sqrt(1 + cos(sin(i)) * cos(sin(i))) / (1 + sin(cos(i)) * sin(cos(i)))) + S1(N, i + 1);
}

double S2(const int N, const int i)
{
	if (i < 1)
		return 0;
	else
		return (sqrt(1 + cos(sin(i)) * cos(sin(i))) / (1 + sin(cos(i)) * sin(cos(i)))) + S2(N,i - 1);
}

double S3(const int N, const int i, double t)
{
	t = t + (sqrt(1 + cos(sin(i)) * cos(sin(i))) / (1 + sin(cos(i)) * sin(cos(i))));
	if (i >= N)
		return t;
	else
		return S3(N, i + 1, t);
}

double S4(const int N, const int i, double t)
{
	t = t + (sqrt(1 + cos(sin(i)) * cos(sin(i))) / (1 + sin(cos(i)) * sin(cos(i))));
	if (i <= 1)
		return t;
	else
		return S4(N, i - 1, t);
}
int main()
{
	int i, N;
	cout << "i = "; cin >> i;
	cout << "N = "; cin >> N;

	cout << "(iter)        S0 = " << S0(N)      << endl;
	cout << "(rec up ++)   S1 = " << S1(N,i)    << endl;
	cout << "(rec up --)   S2 = " << S2(N,i)    << endl;
	cout << "(rec down ++) S3 = " << S3(N,i, 0) << endl;
	cout << "(rec down --) S4 = " << S4(N,i, 0) << endl;

	return 0;
}



