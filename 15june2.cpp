#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int ar[n];
    for (int i = 0; i <= n; i++)
        cin >> ar[i];
    for (int i = 0; i <= n; i++)
    {
        for (int j = i + 1; j <= n+1; j++)
        {
            if (ar[i] == ar[j])
            {
                cout << ar[i] << endl;
                break;
            }
        }
    }

    return 0;
}