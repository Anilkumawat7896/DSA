// ? convert every latter of a string or character to uppercase

// ans solution to this is ------->

#include <iostream>

using namespace std;

void toUpperCase(char ch[], int size)
{

    for (int i = 0; i < size; i++)
    {

        if (ch[i] >= 'a' && ch[i] <= 'z')
        {
            ch[i] = ch[i] - 32;
        }
    }

    cout << "After : " << ch << endl;
}
int main()
{

    char ch[100];

    cout << "Enter a String : ";

    cin.getline(ch, 100);

    cout << "Before : " << endl;

    toUpperCase(ch, 100);

    return 0;
}