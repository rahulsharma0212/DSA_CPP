#include <iostream>
#include <vector>
using namespace std;

void printVectorArray(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}

int findUnique(vector<int> arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    /* Initialization of vector  */
    // vector<int> arr;
    // vector<int> arr(10);
    // vector<int> arr(10, 1);
    // vector<int> arr{1, 2, 3};
    // int n;
    // cin >> n;
    // vector<int> arr(n);
    // /*when we push one item the array dynamically double its size */
    // arr.push_back(1);
    // cout << "ARRAY SIZE :: " << arr.size() << endl;
    // cout << "ARRAY CAPACITY :: " << arr.capacity() << endl;
    // cout << "ARRAY PRINT :: ";
    // printVectorArray(arr);
    // cout << endl;

    /* Find unique element (element ocurrs only ones) */
    // // xor with any number and zero result in the number itself
    // cout << (0 ^ 1) << endl;
    // vector<int> arr = {1, 2, 3, 1, 2};
    // cout << findUnique(arr);

    /* Union two array */
    // int arr1[] = {1, 2, 3};
    // int arr2[] = {4, 5, 6, 7};
    // vector<int> result;
    // for (int i = 0; i < (sizeof(arr1) / sizeof(arr1[0])); i++)
    // {
    //     result.push_back(arr1[i]);
    // }
    // for (int i = 0; i < (sizeof(arr2) / sizeof(arr2[0])); i++)
    // {
    //     result.push_back(arr2[i]);
    // }
    // printVectorArray(result);

    /* Intersection two array */
    // vector<int> arr1 = {1, 5, 6, 4, 8};
    // vector<int> arr2 = {12, 5, 8, 8, 10, 4, 7, 3};
    // vector<int> result;
    // for (int i = 0; i < arr1.size(); i++)
    // {
    //     for (int j = 0; j < arr2.size(); j++)
    //     {
    //         if (arr1[i] == arr2[j])
    //         {
    //             result.push_back(arr1[i]);
    //             break;
    //         }
    //     }
    // }
    // printVectorArray(result);

    /* traverse all pair*/
    // vector<int> arr = {1, 2, 3, 4, 5};
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         cout << "(" << arr[i] << "," << arr[j] << ") ";
    //     }
    //     cout << endl;
    // }

    /* Two pair sum */
    // vector<int> arr = {10, 20, 30, 40, 50, 60, 70};
    // int sum = 80;
    // vector<int> pair;
    // for (int i = 0; i < arr.size(); i++)
    // {
    //     for (int j = i + 1; j < arr.size(); j++)
    //     {
    //         if (arr[i] + arr[j] == sum)
    //         {
    //             cout << "PAIR FOUND FOR SUM " << sum << " :: " << arr[i] << "," << arr[j] << endl;
    //         }
    //     }
    // }

    /* Sort 0's and 1's */
    vector<int> arr = {0, 1, 1, 0, 0, 0, 1, 0, 1, 0, 0, 1};
    int left = 0;
    int i = 0;
    int right = arr.size() - 1;
    while (i < right)
    {
        if (arr[i] == 0)
        {
            swap(arr[left], arr[i]);
            left++;
            i++;
        }
        else
        {
            swap(arr[right], arr[i]);
            right--;
        }
    }
    printVectorArray(arr);
    return 0;
}