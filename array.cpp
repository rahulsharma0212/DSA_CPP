#include <iostream>
#include <limits.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int getMin(int arr[], int size)
{
    int result = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < result)
        {
            result = arr[i];
        }
    }
    return result;
}
int getMax(int arr[], int size)
{
    int result = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > result)
        {
            result = arr[i];
        }
    }
    return result;
}

int fib(int n)
{
    int arr[1000];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i <= n - 1; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    return arr[n - 1];
}

void reverseArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

void countZeroAndOne(int arr[], int size)
{
    int zero = 0;
    int one = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else if (arr[i] == 1)
        {
            one++;
        }
    }
    cout << "0 : " << zero << endl;
    cout << "1 : " << one << endl;
}

void printExtremeArray(int arr[], int size)
{
    int left = 0;
    int right = size - 1;
    while (left <= right)
    {
        if (arr[left] == arr[right])
        {
            cout << arr[left] << " ";
        }
        else
        {
            cout << arr[left] << " ";
            cout << arr[right] << " ";
        }
        left++;
        right--;
    }
    cout << endl;
}

int main()
{
    /* different method of declaring array*/
    // int arr[5] = {1, 2, 3, 4, 5};
    // printArray(arr, 5);
    // int arr1[] = {4, 2, 1};
    // printArray(arr1, 20);
    // int arr2[10] = {0};
    // printArray(arr2, 10);
    // int arr3[10] = {1, 2};
    // printArray(arr3, 10);

    /* taking input from user less than 100 size array */
    // int arr4[100];
    // cout << "ENTER SIZE OF ARRAY ::";
    // int size;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> arr4[i];
    // }
    // printArray(arr4, size);

    // byte address of an array + (index x size of data type)

    /* Get minimum and maximum value */
    // int arr[] = {5, 2, 10, 9, 7};
    // cout << "get minimum value {5, 2, 10, 9, 7} :: " << getMin(arr, (sizeof(arr) / sizeof(arr[0]))) << endl;
    // cout << "get maximum value {5, 2, 10, 9, 7} :: " << getMax(arr, (sizeof(arr) / sizeof(arr[0]))) << endl;

    /*
    TODO: Search an Element in an array
    link: https://practice.geeksforgeeks.org/problems/search-an-element-in-an-array-1587115621/
     */

    /* Reverse array */
    // int arr[] = {5, 2, 10, 9, 7, 5, 6};
    // cout << "NORMAL ARRAY :: ";
    // printArray(arr, (sizeof(arr) / sizeof(arr[0])));
    // reverseArray(arr, (sizeof(arr) / sizeof(arr[0])));
    // cout << "REVERSE ARRAY :: ";
    // printArray(arr, (sizeof(arr) / sizeof(arr[0])));

    /*
    TODO: Second Largest
    link: https://practice.geeksforgeeks.org/problems/second-largest3735/1
    */

    /*
    TODO: Missing number in array
    link: https://practice.geeksforgeeks.org/problems/missing-number-in-array1416/1
    */

    /*Find fibonacci number*/
    // cout << fib(6) << endl;
    // cout << fib(7) << endl;
    // cout << fib(8) << endl;

    /*
    TODO: Cyclically rotate an array by one
    link: https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
    */

    /*Linear Search*/
    // int arr[] = {1, 5, 6, 8, 10};
    // cout << "Is 5 is present in {1,5,6,8,10} :: " << linearSearch(arr, 5, 6) << endl;
    // cout << "Is 8 is present in {1,5,6,8,10} :: " << linearSearch(arr, 5, 8) << endl;
    // cout << "Is 9 is present in {1,5,6,8,10} :: " << linearSearch(arr, 5, 9) << endl;

    /* Count zero and ones*/
    // int arr[] = {0, 1, 1, 1, 0, 2, 1, 0};
    // cout << "counting 0 and 1 in {0,1,1,1,0,2,1,0}" << endl;
    // countZeroAndOne(arr, 8);

    /* Extreme printing of array*/
    // int arr[] = {1, 2, 3, 4, 5};
    // printExtremeArray(arr, 5);
    // int arr1[] = {1, 2, 3, 4, 5, 6};
    // printExtremeArray(arr1, 6);

    return 0;
}