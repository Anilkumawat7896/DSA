#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int target)
{

    int start = 0;
    int end = n;
    // int mid = (start + end) / 2; // ! this could make integer overflow

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        /* code */

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}
int main()
{

    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90};
    int n = 9;
    int target = 60;

    int ans = binarySearch(arr, n, target);

    ans == -1 ? cout << "Element not Found" : cout << "Element found at index :" << ans;
    return 0;
}