//  ? find pivot element (we will consider the maximum one as pivot ) in a roteted sorted array

#include <iostream>
using namespace std;
int findPivot(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        // corner case
        if (start == end)
        {
            return start;
        }
        // todo yaha galti hui thi mid-1 ko zero se bada ya barabar hona chahiye islie condition lagana bhule the
        if ((mid - 1) >= 0 && arr[mid] < arr[mid - 1])
        {
            return (mid - 1);
        }
        // todo yaha galti hui thi mid+1 boundry se bhr yani n -1 se chota ya barabr hona chhaiye islie condition lagana bhule the
        else if (arr[mid] > arr[mid + 1] && (mid + 1) < n)
        {
            return mid;
        }
        else if (arr[start] > arr[mid])
        {
            // left m jao

            end = mid - 1;
        }
        else
        {
            // right m jao

            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{

    int arr[] = {1, 2};
    int size = 2;

    int ans = findPivot(arr, size);

    ans == -1 ? cout << "Element not Found Array is incorrect" : cout << "Pivot element fount at index : " << ans << " and pivot element is : " << arr[ans];
    return 0;
}

// ! consider edge case of a single element
/*
        if(start ==  end) return start;
 */