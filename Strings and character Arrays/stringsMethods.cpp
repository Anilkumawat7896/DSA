// ! we will see strings ans theris methods

#include <iostream>
using namespace std;

int main()
{

    // ! input output

    /*
    string name;

    cout << "Enter Your name : ";

    getline(cin, name);

    cout << "Welcome " << name << endl;

    */

    // ! string methoda which I have never crossed
    string name = "Anil Kumawat";
    // * to append a string
    // name.append(" 'this is a appended Text'");

    // *this method assign will remove the original string and assign the string you give it in there
    // name.assign("Hellow world");

    // * this method will give what character is at the given index but if you give a index which is out of the boundries of the string it will give a array out of bound error
    // cout << name.at(20);

    // * back() method will give the last character of the string
    // cout << name.back();

    // * this is a wiered one it give the strings first index address and by a astrik or * we can access it
    // auto it = name.begin();
    // cout << *it;

    // * Returns the total number of characters that the %string can holdbefore needing to allocate more memory.
    // cout << name.capacity();

    // * it makes the string clear
    // name.clear();

    // * returns the largest possible size of  a string
    // cout << name.max_size();
    // * removes the last character of the string
    // name.pop_back();

    // * append a character single character at the begining
    // name.push_back('K');

    cout << name;
    return 0;
}