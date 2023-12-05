
// ! Revised it once again
#include <iostream>

using namespace std;

int findOddOccInAGivenArray(int arr[], int n)

{

    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (start == end)
        {
            return start;
        }

        // agr mid odd index pr h to

        if (mid & 1) // Odd
        {
            // to compair mid se phle vale index se krenge
            // array out of bound b check kro
            if (mid - 1 >= 0 && arr[mid - 1] == arr[mid])
            {
                // go in right
                // kyoki jab hum mid-1 ko mid se compair krenge to right me jaane ke lie mid+1 karna padega
                start = mid + 1;
            }
            else
            {
                //  go in left
                //  or yaha hum mid-1 islie krenge kyoki humne mid-1 vale emelemnt ko mid se compair kr liya or agr hum end = mid krenge to mid-1 vala element double compair ho jagea is lie mid-1 krna padega
                end = mid - 1;
            }
        }
        else // Even
        {
            // mid agr even index pr ho to

            //  ? to compair mid se baad vale index se krenge
            // array out of bound b check krna hoga
            if (mid + 1 < n && arr[mid] == arr[mid + 1])
            {
                // go in right
                start = mid + 2;
            }
            else
            {
                // go in left
                end = mid;
            }
        }

        mid = start + (end - start) / 2;
    }
    return -1;
}

int main()
{

    int arr[] = {3, 1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11};

    int size = 23;

    int ansIndex = findOddOccInAGivenArray(arr, size);
    ansIndex == -1 ? cout << endl
                          << "No Odd Element found in the Array \n"
                   : cout << endl
                          << "Odd Element found at the index : " << ansIndex << " found element is : " << arr[ansIndex] << endl
                          << endl;

    return 0;
}