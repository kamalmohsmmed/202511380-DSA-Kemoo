#include <iostream>
using namespace std;
int main()
{
    string name[5], key;
    int age[5];
    bool found = false;

    for(int i=0; i<5; i++)
    {
        cout << "Enter name: ";
        cin >> name[i];

        cout << "Enter age: ";
        cin >> age[i];
    }

    cout << "Enter name to search: ";
    cin >> key;

    for(int i=0; i<5; i++)
    {
        if(name[i] == key)
        {
            cout << key << " was found and is aged " << age[i];
            found = true;
        }
    }

    if(found == false)
    {
        cout << "Not found";
    }

    return 0;
}

