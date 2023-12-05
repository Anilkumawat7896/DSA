// ? apply binary search for nearly sorted array

/*

sorted array -->  [10,20,30,40,50,60,70,80,90];

if any number in sorted array is at index i

then in a neary sorted aaray that number could be at i-1 , i , i+1 index

here is a neary sorted aaray for the above sorted array:

nearly sorted array -->  [20,10,40,30,60,50,80,70,90];

 */

#include <iostream>

using namespace std;

int BinarySearchOnNearlySortedArray(int arr[], int n, int targate)
{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    int ans = 0;

    while (start <= end)
    {

        if (arr[mid] == targate)
            return mid;

        if (arr[mid - 1] == targate)
            return mid - 1;

        if (arr[mid + 1] == targate)
            return mid + 1;

        if (arr[mid] > targate)
        {
            // left m jao
            end = mid - 2;
        }
        else
        {
            // left m jao
            start = mid + 2;
        }

        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int nearlySortedArray[] = {20, 10, 40, 30, 60, 50, 80, 70, 90};
    int size = 9;
    int targate = 10;

    int ans = BinarySearchOnNearlySortedArray(nearlySortedArray, size, targate);

    ans == -1 ? cout << "Given Targate is not Found in the given array." : cout << "The targate value : " << targate << " in the given array is at index : " << ans;

    return 0;
}