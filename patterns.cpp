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

void fancyPattern1(int n = 5)
{
    // ********1********
    // *******2*2*******
    // ******3*3*3******
    // *****4*4*4*4*****
    // ****5*5*5*5*5****

    int max_star = 8;
    for (int row = 0; row < n; row++)
    {
        for (int star = 0; star <= max_star - row - 1; star++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 1)
            {
                cout << "*";
            }
            else
            {
                cout << row + 1;
            }
        }
        for (int star = 0; star <= max_star - row - 1; star++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void fancyPattern2(int n = 4)
{
    // 1
    // 2*3
    // 4*5*6
    // 7*8*9*10
    // 7*8*9*10
    // 4*5*6
    // 2*3
    // 1

    int out = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col % 2 == 1)
            {
                cout << "*";
            }
            else
            {
                cout << out;
                out++;
            }
        }
        cout << endl;
    }
    for (int row = 0; row < n; row++)
    {
        int start = out - (n - row);
        for (int col = 0; col < 2 * (n - row) - 1; col++)
        {
            if (col % 2 == 1)
            {
                cout << "*";
            }
            else
            {
                cout << start;
                start++;
            }
        }
        out -= (n - row);
        cout << endl;
    }
}

void fancyPattern3(int n = 5)
{
    // *
    // *1*
    // *121*
    // *12321*
    // *121*
    // *1*
    // *

    cout << "*" << endl;
    for (int row = 0; row < n; row++)
    {
        int cond = row <= (n / 2) ? 2 * row + 1 : 2 * (n - row) - 1;
        cout << "*";
        for (int col = 0; col < cond; col++)
        {
            if (col <= (cond / 2))
            {
                cout << col + 1;
            }
            else
            {
                cout << cond - col;
            }
        }
        cout << "*" << endl;
    }
    cout << "*" << endl;
}

void flyodsTrianglePattern(int n = 5)
{
    int out = 1;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << out++ << " ";
        }
        cout << endl;
    }
}

void pascalsTrianglePattern(int n = 5)
{
    for (int row = 1; row <= n; row++)
    {
        int out = 1;
        for (int col = 1; col <= row; col++)
        {
            cout << out << " ";
            out = out * (row - col) / col;
        }
        cout << endl;
    }
}

void butterFlyPattern(int n = 5)
{
    for (int row = 0; row < 2 * n; row++)
    {
        int cond = row < n ? row : 2 * n - row - 1;
        int space = row <= n ? 2 * (n - row - 1) : row - cond - 1;
        for (int col = 0; col < 2 * n; col++)
        {
            if (col <= cond)
            {
                cout << "*";
            }
            else if (space > 0)
            {
                cout << " ";
                space--;
            }
            else
            {
                cout << "*";
            }
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
    // fancyPattern1();
    // fancyPattern2();
    // fancyPattern3();
    // flyodsTrianglePattern();
    // pascalsTrianglePattern();
    // butterFlyPattern();
    return 0;
}
