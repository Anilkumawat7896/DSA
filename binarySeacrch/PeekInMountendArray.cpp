// ? find the peek element in a mounted array

#include <iostream>
using namespace std;

int findPeekElementInMountedArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start != end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            // go in right
            start = mid + 1;
        }
        else
        {
            // left m jao
            end = mid;
        }

        mid = start + (end - start) / 2;
    }

    return mid;
}
int main()
{
    int arr[] = {1, 2, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int n = 11;
    int ans = findPeekElementInMountedArray(arr, n);

    cout << "Peek Element in the Given Array is : " << arr[ans] << " at index : " << ans << endl;

    return 0;
}