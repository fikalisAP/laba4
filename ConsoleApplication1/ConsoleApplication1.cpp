#include <iostream>
#include <stdlib.h>
#include <array>
#include <time.h>
#include <algorithm>
#include <iomanip>
using namespace std;

int main()
{
    setlocale(0, ""); srand(time(NULL));
    //8.	Определить, является ли данный год високосным. (Напомним, что год является високосным, если его номер кратен 4, но не кратен 100, а также если он кратен 400.)
    /*int year;
    cout << "Введите год: "; cin >> year;
    if (year % 4 == 0 ||
        (year % 100 == 0
            && year % 400 != 0))
        cout << "Високосный год";
    else cout << "Год не является високосным";*/
    //year % 4 == 0 || (year % 100 == 0 && year % 400 != 0) ? cout << "високосный год" : cout << "";
    //19.	Вывести на экран "прямоугольник", образованный из двух видов символов. Контур прямоугольника должен состоять из одного символа, а в "заливка" - из другого.
    int length, width;
    cout << "Введите длину прямоугольника: "; cin >> length;
    cout << "Введите ширину прямоугольника: "; cin >> width;
    for (int i = 1;i <= length;i++)
    {
        for (int j = 1;j <= width;j++)
        {
            if ((i == 1) || (j == 1) || (i == length) || (j == width))cout << "*";
            else cout << "@";
        }
        cout << endl;
    }

    //25.	Матрицу 10x20 заполнить случайными числами от 0 до 15. Вывести на экран саму матрицу и номера строк, в которых число 5 встречается три и более раз.
    /*const int n = 10, m = 20;
    int B[n], A[n][m], nomer=0, count,k=0;
    for (int i = 0; i < n; i++)
    {
        count = 0;
        for (int j = 0; j < m; j++)
        {
            A[i][j] = rand() % 16;
            //printf("%4d", A[i][j]);
            cout << setw(4u) << A[i][j];
            A[i][j] == 5 ? count++ : 0;
        }
        if (count > 2)
        {
            nomer = i;
            B[k] = i + 1;
            k++;
        }
        //cout << setw(9u) << count;
        cout << endl;
        
    }
    for (int i = 0; i < k; i++)
    {
        cout << B[i] << " ";
    }*/
    //cout << nomer;

    //30.	Сгенерировать 20 случайных целых чисел в диапазоне от -5 до 4, записать их в ячейки массива. Посчитать сколько среди них положительных, отрицательных и нулевых значений. Вывести на экран элементы массива и посчитанные количества.
    /*int A[21], pos=0, neg=0, null=0;
    for (int i = 0; i < 21; i++)
    {
        A[i] = rand() % 10 - 5;
        cout << A[i] << " ";
        A[i] == 0 ? null++ : A[i] > 0 ? pos++ : neg++;
    }
    cout << endl << pos << " " << neg << " " << null << " ";*/

    //33.	Найти в массиве те элементы, значение которых меньше среднего арифметического, взятого от всех элементов массива.

    /*int n, summ = 0;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* A{ new int[n] };
    for (int i = 0; i < n; i++)
    {
        A[i] = rand() % 10;
        cout << A[i] << " ";
        summ += A[i];
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (A[i]<summ/n)
        {
            cout << A[i] << " ";
        }
    }*/

    //36.	Записать элементов прямоугольной матрицы в одномерный массив в порядке следования столбцов.
    /*int n,
        k=0;
    cin >> n;
    int** A = new int* [n];
    for (int i = 0; i < n; i++)
        A[i] = new int[n];
    int* B = new int[(n * n)+1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            A[i][j] = rand() % 10;
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            k++;
            B[k] = A[i][j];
            cout << B[k] << " ";
        }
    }*/
    //40.	Составьте программу, выводящую на экран квадраты чисел от 10 до 20 включительно.

    /*for (int i = 10; i < 21; i++)
    {
        cout << i*i <<endl;
    }*/
    return 0;
}
