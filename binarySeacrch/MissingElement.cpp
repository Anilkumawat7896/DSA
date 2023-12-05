// ? a sorted array is given and one of the element in the arrry is missing accouding to the order so find it

#include <iostream>
using namespace std;
int findMissingElement(int arr[], int n)
{
    int ans = -1;
    int start = 0;
    int end = n - 1;

    int mid = start + (end - start) / 2;

       while (start <= end)
    {
        if ((arr[mid] - mid) == 1)
        {
            start = mid + 1;
        }
        if ((arr[mid] - mid) > 1)
        {
            ans = mid;
            end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{

    int arr[] = {1, 2, 4, 5, 6, 7, 8, 9, 10};

    int n = 9;

    int ans = findMissingElement(arr, n);

    cout << "Missing Element : " << ans + 1 << " in the given array is at index : " << ans + 1 << endl;

    return 0;
}