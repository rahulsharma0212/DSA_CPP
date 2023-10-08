#include <iostream>
using namespace std;

void solid_rectangle(int n = 5)
{
    /*
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     * * * * *
     */
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    solid_rectangle();

    return 0;
}
