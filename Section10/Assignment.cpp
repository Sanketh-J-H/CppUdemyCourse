#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "enter the string you want displayed in the form of pyramid : ";
    string userString{};
    getline(cin, userString);

    for (size_t length{0}; length < userString.length(); length += 1)
    {
        for (auto space{(userString.length() - length)}; space > 0; space -= 1)
        {
            cout << ' ';
        }
        for (int charecterIndex{0}; charecterIndex <= length; charecterIndex += 1)
        {
            auto charecter = userString.at(charecterIndex);
            cout << charecter;
        }
        if (length != 0)
        {
            for (int charecterIndex = length - 1  ; charecterIndex >= 0 ; charecterIndex -= 1)
            {
                auto charecter = userString.at(charecterIndex);
                cout << charecter;
            }
        }
        cout << endl;
    }

    return 0;
}