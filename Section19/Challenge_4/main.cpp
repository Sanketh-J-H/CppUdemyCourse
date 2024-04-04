// Section 19
// Challenge 4
// Copy Romeo and Juliet with line numbers
#include <iostream>
#include <fstream>

int main()
{
    std::ifstream in_file;
    std::ofstream out_file;
    in_file.open("romeoandjuliet");
    out_file.open("output.txt");
    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }
    if (!out_file)
    {
        std::cerr << "Problem creating file" << std::endl;
        return 1;
    }
    std::string line{};
    size_t lineNo{0};
    while (std::getline(in_file, line))
    {   
        // if(line == "\r")
        // {
        //     std::cout<< "\n";
        // }
        // else
        // {
        //     lineNo += 1;
        //     std::cout << lineNo << "\t"<< line << std::endl;
        // }
        if(line == "\r")
        {
            out_file << "\n";
        }
        else
        {
            lineNo += 1;
            out_file << lineNo << "\t"<< line << std::endl;
        }
    }

    in_file.close();
    out_file.close();
    return 0;
}