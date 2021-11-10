#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main() 
{
    for (int i = 0; i < 5; i++)
    {
        cout << i << "\n";
    }

    auto i = 1;

    // Post-increment assigns i to c and then increments i
    auto c = i++;

    cout << "Post-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Reset i to 1
    i = 1;

    // Pre-increment increments i, then  assigns to c.
    c = ++i;

    cout << "Pre-increment example:" << "\n";
    cout << "The value of c is: " << c << "\n";
    cout << "The value of i is: " << i << "\n";
    cout << "\n";

    // Decrement i
    i--;
    cout << "Decrement example:" << "\n";
    cout << "The value of i is: " << i << "\n";

    // Double range-based for loop to iterate through a vector
    vector<vector<int>> b = {{1, 2},
                            {3, 4},
                            {5, 6}};

    // Outer loop iterates through each vector
    for (auto v : b)
    {
        // Inner loop iterates through each integer inside each vector
        for (int i : v)
        {
            cout << i << "\n";
        }

        cout << "\n";
    }
}