// ? find the lenght of a String (character array not a string datatype) do not use perdefiend methods

// ans solution for this is ----->
#include <iostream>

using namespace std;

int lenghtOfString(char str[], int size)
{
    int count = 0;

    for (int i = 0; i < size; i++)
    {

        if (str[i] == '\0')
        {
            break;
        }
        else
        {
            count++;
        }
    }

    return count;
}

int main()
{

    char str[100];

    cout << "Enter a String : ";

    cin.getline(str, 100);

    int ans = lenghtOfString(str, 100);

    ans == 0 ? cout << "Something went Wrong ....... !!!" : cout << "Lenght of the entered string is : " << ans;

    return 0;
}   


