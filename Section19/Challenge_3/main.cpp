// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    std::ifstream in_file;
    std::string userString{}, fileWord{};

    std::cout << "Enter the substring to search for : ";
    std::cin >> userString;

    in_file.open("romeoandjuliet.txt");
    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    size_t wordCount{0}, matchCount{0};
    while (in_file >> fileWord)
    {
        wordCount += 1;
        auto filewordLength = fileWord.length();
        auto userStringLength = userString.length();
        for (size_t index{0}; index < filewordLength - userStringLength; index += 1)
        {
            if (filewordLength < userStringLength)
            {
                break;
            }

            // auto fileWordSubstring = fileWord.substr(index, userStringLength);
            // if (fileWordSubstring == userString)
            // {
            //     matchCount += 1;
            //     std::cout << fileWord << "\t ";
            // }
            auto found = fileWord.find(userString);
            if ( found != string::npos)
            {
                matchCount += 1;
                std::cout << fileWord << "\t";
            }
        }
    }

    std::cout << "\n"
              << wordCount << " words were searched" << std::endl;
    std::cout << "The substring " << userString << " was found " << matchCount << " times." << std::endl;

    std::cout << endl;
    return 0;
}
