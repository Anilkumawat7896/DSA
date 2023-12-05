// now we will see input output of character arrays

#include <iostream>

using namespace std;

int main()
{

    // ! for a whole string input but cin will not take input after a space tab or a enter so to get the whole string we need somehting else

    // ! and what that will be let's see......

    /*     char name[100];
        cout << "Enter a 10 Character name : ";

        // ! to get one string
        // cin >> name;

        // ! to get one line
        cin.getline(name, 100);



        cout << "You Entered This name : " << name;
     */

    //  For a specific index input output

    /* // ! for checking that inetger 0 is the null character in a character array which denotes that character have no character nay furthur


       char name[10];
       cin >> name;
       cout << endl;
       cout << name << endl;
       cout << "Index 9 of the name array : value is " << (int)name[9] << endl;

       // cout << "Index 0 of the name : " << name[0] << endl;

        */
    // ! now with strings

    // string name = "Anil Kumawat";

    // for (size_t i = 0; i <= name.length(); i++)
    // {
    //     /* code */
    //     cout << name[i] << endl;
    // }

    return 0;
}