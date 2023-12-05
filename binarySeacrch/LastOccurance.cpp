// ? find first,last and tottle occurance of the given element

#include <iostream>

using namespace std;
int findFirstOcc(int arr[], int n, int targate)
{

    int ans = -1;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == targate)
        {
            ans = mid;

            end = mid - 1;
        }
        if (arr[mid] < targate)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}

int findLastOcc(int arr[], int n, int targate)
{
    int ans = -1;
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        /* code */

        if (arr[mid] == targate)
        {
            ans = mid;
            start = mid + 1;
        }
        if (arr[mid] < targate)
        {
            start = mid + 1;
        }
        if (arr[mid] > targate)
        {
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

void findTotleOcc(int first, int last, int targate)
{
    cout << "Tottle Occurance of " << targate << " is : " << (last - first) + 1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 5, 6, 7};
    int size = 10;

    int targate = 5;

    int last = findLastOcc(arr, size, targate);
    int first = findFirstOcc(arr, size, targate);

    cout << "First Occurance of " << targate << " is at index :" << first << endl;
    cout << "Last Occurance of " << targate << " is at index :" << last << endl;

    findTotleOcc(first, last, targate);
    return 0;
}

// !  1.1.13