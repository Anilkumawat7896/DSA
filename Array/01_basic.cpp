#include <iostream>
using namespace std;

int main()
{
    /* int arr[10];
    cout << "Enter input ---> "<<endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    cout << "this is the array";
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<" ";
    }
 */

    // now if you want to get a string as a input which contains the withe spaces too try this

    string name;

    cout << "Enter Your Full name please : " << endl;

    getline(cin >> ws, name);

    cout << "Hellow " << name << " very Gooooood Moring to You";

    return 0;
}