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
    else
    {
        if (((n_preta % 2 == 0) && (fila[n / 2] == -1)) || ((n_branca % 2 == 0) && (fila[n / 2] == 1)))
        {
            cout << "branca" << endl;
        }
        else
        {
            cout << "preta" << endl;
        }
    }
    return 0;
}