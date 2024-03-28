// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>

using namespace std;

void ruler()
{
    cout << "\n123456789012345678901324567890" << endl;
}

int main()
{

    ruler();
    cout << setw(15) << left << "Student"
         << setw(15) << right << "Score"
         << endl;
    cout << setw(30) << setfill('-') << "" << endl;

    ifstream in_file;
    string word;
    int score{0};

    in_file.open("responses.txt");
    if (!in_file)
    {
        cerr << "Problem opening file" << endl;
        return 1;
    }
    while (in_file >> word)
    {
        cout << setw(15) << left << left << word
             << setw(15) << right << score
             << endl;
    }
    in_file.close();

    return 0;
}
