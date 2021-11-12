#include <fstream>
#include <iostream>
#include <string>

/*
STEPS TO READING A FILE:
1. #include <fstream>
2. Create a std::ifstream object using the path of your file.
3. Evaluate the std::ifstream object as a bool to ensure that the stream creation did not fail.
4. Use a while loop with getline to write file line to a string.
*/

int main()
{
    std::ifstream my_file;
    my_file.open("files/1.board");
    if (my_file)
    {
        std::cout << "The file stream has been created!" << "\n";
        std::string line;
        while (getline(my_file, line))
        {
            std::cout << line << "\n";
        }
    }
}