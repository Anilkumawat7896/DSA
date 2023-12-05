// ? check is a string is palindrom of not

#include <iostream>

using namespace std;

int lengthOfString(char ch[])
{

    int lenght = 0;
    while (ch[lenght] != '\0')
    {
        lenght++;
    }
    return lenght;
}

bool isPalindram(char ch[])
{
    int start = 0;
    int end = lengthOfString(ch) - 1;

    for (int i = 0; i < end; i++)
    {

        if (ch[start++] != ch[end--])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    char ch[100];
    cout << "Enter a string : ";
    cin.getline(ch, 100);
    int ans = isPalindram(ch);
    ans ? cout << "Given string is a palindram.\n" : cout << "Given string is not palindram.\n";
    return 0;
}