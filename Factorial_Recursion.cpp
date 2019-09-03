#include <iostream>

using namespace std;

int fact(int N)
{
	if (N == 0) return 1;
	return N * fact(N - 1);
}

int main()
{
	int N;
	int F = 1;
	setlocale(LC_ALL, "rus");
	cout << "Факториал какого числа необходимо вычислить?\n";
	cin >> N;
	if (N < 0)
	{
		cerr << "Недопустимое значение. Введите число >= 0\n";
		return 1;
	}
	cout << "Факториал " << N << " = " << fact(N) << endl;
	return 0;
}