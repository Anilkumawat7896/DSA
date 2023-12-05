// ? reverse a character array or String

//  ans solution of this is ---->

#include <iostream>
#include <string.h>

using namespace std;
void reverseString(char ch[])
{

    int start = 0;
    int end = strlen(ch) - 1;

    while (start <= end)
    {
        swap(ch[start], ch[end]);
        start++;
        end--;
    }

    cout << "After : " << ch << endl;
}
int main()
{

    char ch[100];

    cout << "Enter Your String : ";

    cin.getline(ch, 100);
    cout << "Before : " << ch << endl;
    reverseString(ch);

    return 0;
}