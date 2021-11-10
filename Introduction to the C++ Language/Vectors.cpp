#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main()
{
    // Three ways of declaring and initializing vectors.
    vector<int> v_1 {0, 1, 2};
    vector<int> v_2 = {3, 4, 5};
    vector<int> v_3;
    v_3 = {6};
    cout << "Everything worked!" << "\n";

    // Creating a 2D vector.
    vector<vector<int>> v {{1, 2}, {3, 4}};
    cout << "Great! A 2D vector has been created." << "\n";

    // 1D Vector Access
    vector<int> a = {0, 1, 2, 3, 4};
    cout << a[0];
    cout << a[1];
    cout << a[2];
    cout << "\n";

    // 2D Vector Access
    vector<vector<int>> b = {{1, 1, 2, 3},
                             {2, 1, 2, 3},
                             {3, 1, 2, 3}};

    // Get vector size (i.e. length of the vector)
    cout << a.size();

    // Get 2D vector size
    cout << b[0].size() << "\n";

}