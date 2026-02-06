#include <iostream>

using namespace std;

// using recusive solution
double power(double x, int n)
{
    if (n == 0)
        return 1;

    double half = power(x, n / 2);

    if (n % 2 == 0)
        return half * half;
    else
        return x * half * half;
}

// using iterative solution
double power1(double x, double n)
{
    double ans = 1.0;

    while (N > 0)
    {
        // agar power odd hai
        if (N % 2 == 1)
        {
            ans = ans * x;
        }

        // base ko square karo
        x = x * x;

        // power half karo
        N = N / 2;
    }

    return ans;
}

int main()
{
    int X = 2;
    int N = 5;

    if (N < 0)
    {
        x = 1 / x;
        N = -N;
    }

    double ans = power(X, N);

    cout << "power is " << ans << endl;

    return 0;
}