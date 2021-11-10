#include <iostream>
using std::cout;

int main()
{
    // Set a equal to true
    bool a = true;
    auto i = 0;

    if (a) 
    {
        cout << "Hooray! You made it into the if statement!" << "\n";
    }

    while (i < 5) 
    {
        cout << i << "\n";
        i++;
    }
}