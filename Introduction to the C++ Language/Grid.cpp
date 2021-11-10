#include <iostream>
#include <vector>
using std::vector;
using std::cout;

void PrintBoard(vector<vector<int>> board)
{
    for (auto v : board)
    {
        for (int i : v)
        {
            cout << i;
        }

        cout << "\n";
    }
}

int main()
{
    // Declare a board variable to store the necessary data in a vector.
    vector<vector<int>> board = {{0, 1, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 0, 0},
                                 {0, 1, 0, 0, 0, 0},
                                 {0, 0, 0, 0, 1, 0}};

    PrintBoard(board);
        
}