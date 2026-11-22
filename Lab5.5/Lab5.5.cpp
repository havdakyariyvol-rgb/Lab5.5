#include <iostream>
#include <Windows.h>

using namespace std;

int C(int n, int k, int level, int& depth);

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    int n, k;
    int level = 1, depth = 0;

    cout << "Введіть n: ";
    cin >> n;
    cout << "Введіть k: ";
    cin >> k;

    if (n < 0 || k < 0 || k > n)
    {
        cout << "Помилка: має виконуватись умова 0 <= k <= n." << endl;
        return 1;
    }

    int result = C(n, k, level, depth);

    cout << "Біноміальний коефіцієнт C(" << n << ", " << k << ") = " << result << endl;
    cout << "Максимальна глибина рекурсії: " << depth << endl;

    return 0;
}

int C(int n, int k, int level, int& depth)
{
    if (level > depth)
        depth = level;

    cout << " Рівень рекурсії: " << level << endl;

    if (k == n || k == 0)
        return 1;
    else
        return C(n - 1, k - 1, level + 1, depth) + C(n - 1, k, level + 1, depth);
}