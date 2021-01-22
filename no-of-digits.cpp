using namespace std;
#include <bits/stdc++.h>

//Iterative Solution
// ! O(digitsCount)
int findNoOfDigits(int n)
{
    int count = 0;

    while (n)
    {
        n /= 10;
        count++;
    }
    return count;
}

//Recusive Solution
//! O(digitsCount)
int recursive(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return 1 + recursive(n / 10);
}

//Logarithmic Solution
//! O(1)
//* Suppose the number of digits in the number N is K.
//* Therefore, we can say that: 10^K-1 <= N < 10^K
//* Applying base-10 logarithm to both sides in the above equation, we get:
/*
    K-1 <= log10(N) < K.

    or, K - 1 + 1 <= log10(N) + 1 < K + 1
    or, K <= log10(N) + 1 < K + 1 
    K = floor(log10(N) + 1)
*/
int logarithmic(int n)
{
    return floor(log10(n) + 1);
}

int main()
{
    cout << findNoOfDigits(50) << '/n';
    cout << recursive(100) << '/n';
    cout << logarithmic(1987);
}