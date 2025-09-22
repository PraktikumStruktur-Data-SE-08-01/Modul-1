#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> msg {"Hello", "World"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl;

    cout << "\n103122400018 - Muhammad Rasyid Ridho" << endl;

}
