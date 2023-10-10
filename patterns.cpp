#include <iostream>
using namespace std;

void solidRectangle(int n = 5)
{
    //  * * * * *
    //  * * * * *
    //  * * * * *
    //  * * * * *
    //  * * * * *

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void hollowRectangle(int n = 5)
{
    //  * * * * *
    //  *       *
    //  *       *
    //  *       *
    //  * * * * *

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (col == 0 || col == n - 1 || row == 0 || row == n - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void halfPyramid(int n = 5)
{
    //  *
    //  * *
    //  * * *
    //  * * * *
    //  * * * * *

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void invertedHalfPyramid(int n = 5)
{
    //  * * * * *
    //  * * * *
    //  * * *
    //  * *
    //  *

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void hollowInvertedHalfPyramid(int n = 5)
{
    //  * * * * *
    //  *     *
    //  *   *
    //  * *
    //  *

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || col == (n - row - 1) || col == 0)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void fullPyramid(int n = 5)
{
    //      *
    //     * *
    //    * * *
    //   * * * *
    //  * * * * *

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }

        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void hollowFullPyramid(int n = 5)
{
    //     *
    //    * *
    //   *   *
    //  *     *
    // * * * * *

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - (row + 1); space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void invertedFullPyramid(int n = 5)
{
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void hollowInvertedFullPyramid(int n = 5)
{
    // * * * * *
    //  *     *
    //   *   *
    //    * *
    //     *

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1 || row == 0)
            {

                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void solidDiamond(int n = 5)
{
    //     *
    //    * *
    //   * * *
    //  * * * *
    // * * * * *
    // * * * * *
    //  * * * *
    //   * * *
    //    * *
    //     *

    fullPyramid(n);
    invertedFullPyramid(n);
}

void hollowSolidDiamond(int n = 5)
{
    //     *
    //    * *
    //   *   *
    //  *     *
    // *       *
    // *       *
    //  *     *
    //   *   *
    //    * *
    //     *

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < row; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < n - row; col++)
        {
            if (col == 0 || col == n - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void flippedSolidDiamond(int n = 5)
{
    // * * * * * * * * * *
    // * * * *     * * * *
    // * * *         * * *
    // * *             * *
    // *                 *
    // *                 *
    // * *             * *
    // * * *         * * *
    // * * * *     * * * *
    // * * * * * * * * * *

    for (int row = 0; row < n; row++)
    {
        for (int firstPyramid = 0; firstPyramid < n - row; firstPyramid++)
        {
            cout << "* ";
        }
        for (int space = 0; space < 2 * (row); space++)
        {
            cout << "  ";
        }
        for (int secondPyramid = 0; secondPyramid < n - row; secondPyramid++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        for (int firstPyramid = 0; firstPyramid < row + 1; firstPyramid++)
        {
            cout << "* ";
        }
        for (int space = 0; space < 2 * n - 2 * (row + 1); space++)
        {
            cout << "  ";
        }
        for (int secondPyramid = 0; secondPyramid < row + 1; secondPyramid++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void alphabetPalindromePyramid(int n = 5)
{
    // A
    // A B A
    // A B C B A
    // A B C D C B A
    // A B C D E D C B A

    for (int row = 0; row < n; row++)
    {
        char out = 'A';
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << out << " ";
            if (col < (2 * row + 1) / 2)
            {
                out++;
            }
            else
            {
                out--;
            }
        }
        cout << endl;
    }
}

void numericHollowFullPyramid(int n = 5)
{
    //     1
    //    1 2
    //   1   3
    //  1     4
    // 1 2 3 4 5

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {

                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numericHollowHalfPyramid(int n = 5)
{
    // 1
    // 1 2
    // 1   3
    // 1     4
    // 1 2 3 4 5

    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (col == 0 || col == row || row == n - 1)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numericHollowInvertedHalfpyramid(int n = 5)
{
    // 1 2 3 4 5
    // 2     5
    // 3   5
    // 4 5
    // 5

    for (int row = 0; row < n; row++)
    {
        for (int col = row; col < n; col++)
        {
            if (col == row || col == n - 1 || row == 0)
            {
                cout << col + 1 << " ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}

void numericPalindromeEquilateralPyramid(int n = 5)
{
    //         1
    //       1 2 1
    //     1 2 3 2 1
    //   1 2 3 4 3 2 1
    // 1 2 3 4 5 4 3 2 1

    for (int row = 0; row < n; row++)
    {
        int out = 1;
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << out << " ";
            if (col < (2 * row + 1) / 2)
            {
                out++;
            }
            else
            {
                out--;
            }
        }

        cout << endl;
    }
}

void solidHalfDiamond(int n = 5)
{
    // *
    // * *
    // * * *
    // * * * *
    // * * * * *
    // * * * *
    // * * *
    // * *
    // *

    int cond = 0;
    for (int row = 0; row < 2 * n; row++)
    {
        if (row < n)
        {
            cond++;
        }
        else
        {
            cond--;
        }
        for (int col = 0; col < cond; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void numericFullPyramid(int n = 5)
{
    //         1
    //       2 3 2
    //     3 4 5 4 3
    //   4 5 6 7 6 5 4
    // 5 6 7 8 9 8 7 6 5

    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            cout << "  ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + row + 1 << " ";
        }
        int start = 2 * row;
        for (int col = 0; col < row; col++)
        {
            cout << start << " ";
            start--;
        }
        cout << endl;
    }
}

int main()
{
    // solidRectangle();
    // hollowRectangle();
    // halfPyramid();
    // invertedHalfPyramid();
    // hollowInvertedHalfPyramid();
    // fullPyramid();
    // hollowFullPyramid();
    // invertedFullPyramid();
    // hollowInvertedFullPyramid();
    // solidDiamond();
    // hollowSolidDiamond();
    // flippedSolidDiamond();
    // alphabetPalindromePyramid();
    // numericHollowFullPyramid();
    // numericHollowHalfPyramid();
    // numericHollowInvertedHalfpyramid();
    // numericPalindromeEquilateralPyramid();
    // solidHalfDiamond();
    // numericFullPyramid();
    return 0;
}
