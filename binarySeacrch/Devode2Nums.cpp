//  ? devide two numbes using binary search

#include <iostream>

using namespace std;

int numsDevision(int num1, int num2)
{
    int ans = 0;
    int diviser = 0;
    int divident = 0;
    int quotient = 0;

    // ? to find out who is diviser and who is dovident
    if (num1 > num2)
    {
        divident = num1;
        diviser = num2;
    }
    else
    {
        divident = num2;
        diviser = num1;
    };

    int start = 0;
    int end = divident;
    int mid = start + (end - start) / 2;

    if (diviser == 0)
    {

        cout << "the answer by dividing " << num1 << " and " << num2 << " is : infinity ";
        return 0;
    }
    else if (divident == 0)
    {
        cout << "the answer by dividing " << num1 << " and " << num2 << " is : 0 ";
        return 0;
    }

    while (start <= end)
    {

        if ((mid * diviser) > divident)
        {
            // go left
            end = mid - 1;
        }
        if ((mid * diviser) <= divident)
        {
            ans = mid;
            // go right
            start = mid + 1;
        }

        mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int num1 = 0;
    int num2 = -3;

    int ans = numsDevision(abs(num1), abs(num2));

    if ((num1 > 0 && num2 > 0) || (num1 < 0 && num2 < 0))
    {

        cout << "the answer by dividing " << num1 << " and " << num2 << " is : " << ans;
    }
    else
    {
        cout << "the answer by dividing " << num1 << " and " << num2 << " is :  -" << ans;
    }

    return 0;
}