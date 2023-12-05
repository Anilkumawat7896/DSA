// ? convert every latter of the string to lowe Case

// ans sotution of this question is this--->

#include <iostream>

using namespace std;

void toLowerCase(char ch[], int size)
{

    for (int i = 0; i < size; i++)
    {
        if (ch[i] >= 'A' && ch[i] <= 'Z')
        {
            ch[i] = ch[i] + 32;
        }
    }

    cout << "After : " << ch << endl;
}
int main()
{

    char ch[100];

    cout << "Enter a string : ";
    cin.getline(ch, 100);

    cout << "Before : " << ch << endl;

    toLowerCase(ch, 100);
    return 0;
}