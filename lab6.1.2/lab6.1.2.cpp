#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void Create(int* a, const int size, int i)
{
	if (i < size)
	{
		a[i] = -10 + rand() % 46;
		Create(a, size, i + 1);
		return;
	}
}

void Print(int* a, const int size, int i)
{
	if (i < size)
	{
		if (i == 0)
			cout << "{";
		cout << a[i];
		if (i != size - 1)
			cout << ", ";
		else cout << "}" << endl;
		Print(a, size, i + 1);
		return;
	}
}

int Sum(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0 || !(a[i] % 3 == 0))
			return a[i] + Sum(a, size, i + 1);
		else
			return  Sum(a, size, i + 1);
	}
	else return 0;
}

int Count(int* a, const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0 || !(a[i] % 3 == 0))
			return 1 + Count(a, size, i + 1);
		else
			return  Count(a, size, i + 1);
	}
	else return 0;
}

void Replace(int a[], const int size, int i)
{
	if (i < size)
	{
		if (a[i] > 0 || !(a[i] % 3 == 0))
			a[i] = 0;
		Replace(a, size, i + 1);
		return;
	}
}

int main()
{
	srand((unsigned)time(NULL)); // ініціалізація генератора випадкових чисел

	const int size = 22;
	int a[size];

	Create(a, size, 0);
	Print(a, size, 0);
	cout << "The sum of the elements that satisfy the condition = " << Sum(a, size, 0) << endl;
	cout << "The number of elements that satisfy the condition = " << Count(a, size, 0) << endl;
	Replace(a, size, 0);
	Print(a, size, 0);
	return 0;
}
