#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

// in the function parameter no of col i required
// because col * row_index + col_index gives memory location of particular array element
// so it is clear we have to declare col atleast the array you are passing contains or you can pass greater also
void printRowWiseSum(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << " ";
    }
    cout << endl;
}
bool findKey(int arr[][3], int row, int col, int key)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (key == arr[i][j])
            {
                return true;
            }
        }
    }
    return false;
}
int getMax(int arr[][3], int row, int col)
{
    int ans = INT_MIN;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] > ans)
            {
                ans = arr[i][j];
            }
        }
    }
    return ans;
}

int getMin(int arr[][3], int row, int col)
{
    int ans = INT_MAX;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] < ans)
            {
                ans = arr[i][j];
            }
        }
    }
    return ans;
}

void transposeArr(int arr[][3], int row, int col, int transpose_array[][3])
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {

            transpose_array[j][i] = arr[i][j];
        }
    }
}

int main()
{
    /* Declaring array */
    // int arr[3][3] = {
    //     {1, 2, 3},
    //     {4, 5, 6},
    //     {7, 8, 9},
    // };
    // cout << "PRINTING ROW WISE" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "PRINTING COL WISE" << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << arr[j][i] << " ";
    //     }
    //     cout << endl;
    // }
    // cout << "PRINTING ROW WISE SUM" << endl;
    // printRowWiseSum(arr, 3, 3);
    // cout << "Find 5 in above array :: " << findKey(arr, 3, 3, 5) << endl;
    // cout << "Find 10 in above array :: " << findKey(arr, 3, 3, 10) << endl;
    // cout << "Get Maximum in above array :: " << getMax(arr, 3, 3) << endl;
    // cout << "Get Minimum in above array :: " << getMin(arr, 3, 3) << endl;
    // cout << "transpose of above array :: " << endl;
    // int transpose_array[3][3];
    // transposeArr(arr, 3, 3, transpose_array);
    // cout
    //     << "Printing Transpose array :: " << endl;
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << transpose_array[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    /* 2d array generation using vector  */
    // vector<vector<int>> arr;
    // vector<int> a = {1, 2, 3};
    // vector<int> b = {4, 5, 6};
    // vector<int> c = {7, 8, 9};

    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);

    // vector<vector<int>> arr(4, vector<int>(2, 1));

    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = 0; j < arr[i].size(); j++)
    //     {
    //         cout << arr[i][j] << " ";
    //     }
    //     cout << endl;
    // }

    return 0;
}