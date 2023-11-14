#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selectionSort(int arr[], int size)
{
    /* Minimum at first */
    // for (int i = 0; i < size - 1; i++)
    // {
    //     int minIndex = i;
    //     for (int j = i + 1; j < size; j++)
    //     {
    //         if (arr[j] < arr[minIndex])
    //         {
    //             minIndex = j;
    //         }
    //     }
    //     swap(arr[i], arr[minIndex]);
    // }

    /* Maximum at last */
    for (int i = size - 1; i > 0; i--)
    {
        int maxIndex = i;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[maxIndex])
            {
                maxIndex = j;
            }
        }
        swap(arr[i], arr[maxIndex]);
    }
    printArray(arr, size);
}

void bubbleSort(int arr[], int size)
{
    /* Maximum at last (asceneding order)*/
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     bool swapped = 0;
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (arr[j] > arr[j + 1])
    //         {
    //             swapped = 1;
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }

    //     if (swapped == 0)
    //     {
    //         break;
    //     }
    // }

    /* Increasing but start making bubble from last */
    // for (int i = 1; i < size; i++)
    // {
    //     for (int j = size - 1; j >= i; j--)
    //     {
    //         if (arr[j - 1] > arr[j])
    //         {
    //             swap(arr[j - 1], arr[j]);
    //         }
    //     }
    // }

    /* Minimum at last (decreasing order)*/
    // for (int i = size - 1; i >= 0; i--)
    // {
    //     for (int j = 0; j < i; j++)
    //     {
    //         if (arr[j] < arr[j + 1])
    //         {
    //             swap(arr[j], arr[j + 1]);
    //         }
    //     }
    // }
    printArray(arr, size);
}

void insertionSort(int arr[], int size)
{
    /* increasing order from start*/
    // for (int i = 1; i < size; i++)
    // {
    //     cout << i << endl;
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (arr[j] < arr[j - 1])
    //         {
    //             swap(arr[j], arr[j - 1]);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    // }
    /* decreasing order from start*/
    // for (int i = 1; i < size; i++)
    // {
    //     for (int j = i; j > 0; j--)
    //     {
    //         if (arr[j] > arr[j - 1])
    //         {
    //             swap(arr[j], arr[j - 1]);
    //         }
    //         else
    //         {
    //             break;
    //         }
    //     }
    // }
    /* increasing order from end */
    for (int i = size - 2; i >= 0; i--)
    {
        for (int j = i; j < size - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
            else
            {
                break;
            }
        }
    }
    printArray(arr, size);
}

int main()
{
    int arr[] = {5, 8, 1, 4, 3, 9};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "sorting of array {5,8,1,4,3,9}" << endl;
    // selectionSort(arr, size);
    // bubbleSort(arr, size);
    insertionSort(arr, size);

    /*
    TODO: Insertion Sort
    LINK: https://practice.geeksforgeeks.org/problems/insertion-sort/1
     */
}