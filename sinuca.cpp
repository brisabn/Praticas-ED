#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int **fila = new int *[n];

    for (int i = 0; i < n; i++)
    {
        fila[i] = new int[n - i];
    }

    for (int i = 0; i < n; i++)
    {
        cin >> fila[0][i];
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            fila[i][j] = fila[i - 1][j] * fila[i - 1][j + 1];
        }
    }

    int ultima = fila[n - 1][0];
    if (ultima == -1)
    {
        cout << "branca -1" << endl;
    }
    if (ultima == 1)
    {
        cout << "preta 1" << endl;
    }

    return 0;
}