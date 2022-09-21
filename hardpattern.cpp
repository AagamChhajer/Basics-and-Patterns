#include <iostream>
using namespace std;

int main()
{
    int row, col1, col2, m, n, space, after;
    cout << "Enter the number:" << endl;
    cin >> n;
    m = n / 2;
    row = 1;

    while (row <= m)
    {
        space = m - row;
        col1 = 1;
        col2 = 5;
        while (space)
        {
            cout << "_ ";
            space = space - 1;
            col1++;
            
        }
        int a = 1;

        while (col1 <= m)
        {

            cout << a << " ";
            a = a + 1;
            col1++;}
            
            while (col2 < n)
            {
                after = row - 1;
                while (after > 0)
                {
                    cout << after<< " ";
                    after = after - 1;
                    col2++;
                }
                while (col2<n){
                cout << "_ ";
                col2++;}
            }
        

        cout << endl;
        row = row + 1;
    }

    return 0;
}
