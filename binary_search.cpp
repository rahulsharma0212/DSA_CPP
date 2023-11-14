#include <iostream>
using namespace std;

int binarySearchASC(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}

int binarySearchDESC(int arr[], int size, int key)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}

int findOccurance(int arr[], int size, int target)
{
    int start = 0, end = size - 1, first = -1, last = -1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            first = mid;
            end = mid - 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    start = 0;
    end = size - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == target)
        {
            last = mid;
            start = mid + 1;
        }
        else if (arr[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return last - first + 1;
}

int main()
{
    // int arr1[] = {1, 2, 4, 5, 8, 9, 12};
    // int size1 = sizeof(arr1) / sizeof(arr1[0]);
    // cout << "Finding 8 in {1, 2, 4, 5, 8, 9, 12} :: " << binarySearchASC(arr1, size1, 8) << endl;

    // int arr2[] = {12, 9, 8, 5, 4, 2, 1};
    // int size2 = sizeof(arr2) / sizeof(arr2[0]);
    // cout << "Finding 8 in {12, 9, 8, 5, 4, 2, 1} :: " << binarySearchDESC(arr2, size2, 8) << endl;

    /*
    TODO: Binary Search
    link: https://leetcode.com/problems/binary-search/
     */

    /* find first and last occurance in sorted array */
    // int arr[] = {5, 7, 7, 7, 8, 9}, target = 7;
    // int size = sizeof(arr) / sizeof(arr[0]);
    // int start = 0;
    // int end = size - 1;
    // int first = -1, last = -1;
    // // finding first occurance
    // while (start <= end)
    // {
    //     int mid = start + (end - start) / 2;
    //     if (arr[mid] == target)
    //     {
    //         first = mid;
    //         end = mid - 1;
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid - 1;
    //     }
    // }
    // // finding last occurance
    // start = 0;
    // end = size - 1;
    // while (start <= end)
    // {
    //     int mid = start + (end - start) / 2;
    //     if (arr[mid] == target)
    //     {
    //         last = mid;
    //         start = mid + 1;
    //     }
    //     else if (arr[mid] < target)
    //     {
    //         start = mid + 1;
    //     }
    //     else
    //     {
    //         end = mid - 1;
    //     }
    // }
    // cout << "first occurance of 7 :: " << first << endl;
    // cout << "last occurance of 7 :: " << last << endl;

    /*
    TODO: Find First and Last Position of Element in Sorted Array
    link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
     */

    // int arr[] = {1, 4, 4, 4, 5, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // cout << "Total Occurance of 4 :: " << findOccurance(arr, size, 4) << endl;

    /*
    TODO: Search Insert Position
    link: https://leetcode.com/problems/search-insert-position/description/
     */

    /*
    TODO: Sqrt(x)
    link: https://leetcode.com/problems/sqrtx/description/
     */

    /*
    TODO: Peak Index in a Mountain Array
    link: https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
     */

    /*
    TODO: Find Minimum in Rotated Sorted Array
    link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/
     */

    /*
    TODO: Search in Rotated Sorted Array
    link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
     */

    /*
    TODO: Kth Missing Positive Number
    link: https://leetcode.com/problems/kth-missing-positive-number/
     */

    return 0;
}