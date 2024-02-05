#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>
#include <array>
using namespace std;

void firstNumber(int a) {
	int count = 0, b = a;
	while (b > 9)
		b /= 10;
	do
	{
		if (a % 10 == b) count++;
		a /= 10;
	} while (a > 0);

	cout << "Первая цифра числа встречается: " << count << " раз";
}
float maxi(float a, float b, float c) {
	if (a > b && a > c)
		return a;
	if (b > a && b > c)
		return b;
	if (c > a && c > a)
		return c;
}
float mini(float a, float b, float c) {
	if (a < b && a < c)
		return a;
	if (b < a && b < c)
		return b;
	else
		return c;
}
void arr(int* arr, int n) {

	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 13 - 3;
		cout << arr[i] << " ";
	}
	cout << endl;
}
int sum(int* arr, int n) {
	int result = 0;
	//cout << "\t" << n << endl;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > 0) {
			result += arr[i];
		}

	}
	return result;
}
int main()
{
	setlocale(0, "Ru-ru"); srand(time(0));
	int number,a,b,c, n1, n2, n3
		,result=0;
	cout << "\tЗадание 1"<<endl;
	cout << "Введите число: "; cin >> number;
	firstNumber(number);

	cout << endl << "\tЗадание 2" << endl;
	cout << "Введите три числа: " << endl;
	cin >> a; cin >> b; cin >> c;
	//cout << max(a, b, c);
	//cout << min(a, b, c);
	mini(a * b + a, b * b + c, c * b + a) ? cout << (maxi(a + b, b + c, c + a) - mini(sqrt(a), sqrt(b), sqrt(c) + a)) / mini(a * b + a, b * b + c, c * b + a) << endl : cout << "Деление на 0";
	
	cout << endl << "\tЗадание 3" << endl;
	cout << "Введите количество элементов в массиве A: "; cin >> n1;
	int* A{ new int[n1] };
	cout << "Введите количество элементов в массиве B: "; cin >> n2;
	int* B{ new int[n2] };
	cout << "Введите количество элементов в массиве C: "; cin >> n3;
	int* C{ new int[n3] };
	arr(A, n1); arr(B, n2); arr(C, n3);
	cout << endl;
	cout << sum(A,n1) << endl;;
	cout << sum(B,n2) << endl;;
	cout << sum(C,n3) << endl;;
	return 0;
}