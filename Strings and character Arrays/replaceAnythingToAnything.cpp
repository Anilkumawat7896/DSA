// ? replace any index value to another value

#include <iostream>

using namespace std;

string replace(char ch[], int size, char from, char to)
{

    for (int i = 0; ch[i] != '\0'; i++)
    {

        if (ch[i] == from)
        {
            ch[i] = to;
        }
    }

    return ch;
}

int main()
{

    char ch[100];

    cout << "Enter a string : ";
    cin.getline(ch, 100);

    cout << "Before : " << ch << endl;

    string str = replace(ch, 100, '@', ' ');

    cout << "After : " << str << endl;
    return 0;
}