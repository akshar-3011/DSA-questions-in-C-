// Find the number of factors for a given integer n.

//  Examples:

// Input: n = 5
// Output: 2
// Explanation: 5 has 2 factors 1 and 5
// Input: n = 25
// Output: 3
// Explanation: 25 has 3 factors 1, 5, 25
// Constraints:
// 1 ≤ n ≤ 105

#include <iostream>
using namespace std;

int countFactors(int n)
{
    int count = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i == n / i)
                count++; // perfect square (count once)
            else
                count += 2; // pair of factors
        }
    }

    return count;
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid input" << '\n';
        return 0;
    }

    int result = countFactors(n);
    cout << "Number of factors: " << result << '\n';

    return 0;
}