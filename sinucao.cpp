#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int fila[n];

    for (int i = 0; i < n; i++)
    {
        cin >> fila[i];
    }

    int n_preta = 0;
    int n_branca = 0;

    for (int i = 0; i < n; i++)
    {
        if (fila[i] == 1)
        {
            n_preta++;
        }
        else
        {
            n_branca++;
        }
    }

    if (n % 2 == 0)
    {
        if (n_preta % 2 == 0)
        {
            cout << "preta" << endl;
        }
        else
        {
            cout << "branca" << endl;
        }
    }
    else if (n % 2 != 0)
    {
        n_branca = 0, n_preta = 0;
        int fila_cima[n - 1];

        for (int i = 0; i < n - 1; i++)
        {
            fila_cima[i] = fila[i] * fila[i + 1];
            if (fila_cima[i] == 1)
            {
                n_preta++;
            }
            else
            {
                n_branca++;
            }
        }
        if (n_preta % 2 == 0)
        {
            cout << "preta" << endl;
        }
        else
        {
            cout << "branca" << endl;
        }
    }
    return 0;
}