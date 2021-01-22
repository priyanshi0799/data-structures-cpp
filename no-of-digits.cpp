using namespace std;
#include <bits/stdc++.h>

//Iterative Solution
// ! O(n)
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
//! O(n)
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