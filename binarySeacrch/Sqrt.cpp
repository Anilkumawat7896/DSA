// ? find the squar root of a given number in a interger

#include <iostream>

using namespace std;
int findSQRT(int targate)
{

    int start = 0;
    int end = targate / 4;
    // todo because mid*mid krne par agr value interer ki range se bhr chali jaegi to hum check kese krenge islie long long int
    long long int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (start == mid)
        {
            return start;
        }
        if (mid * mid == targate)
        {
            return mid;
        }

        if (mid * mid > targate)
        {
            end = mid;
        }
        else if (mid * mid < targate)
        {
            start = mid;
        }
        mid = start + (end - start) / 2;
    }

    return mid;
}
int main()
{

    int targate = 171;

    int ans = findSQRT(targate);

    cout << "Squar Root if the given number is : " << ans;

    return 0;
}

// ! home work decimal vala b nikalo