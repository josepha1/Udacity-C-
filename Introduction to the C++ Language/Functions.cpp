#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::vector;
using std::string;

// Function declared and defined here.
int AdditionFunction(int i, int j)
{
    return i + j;
}

// More complicated addition function
int VectorAddition(vector<int> v)
{
    int sum = 0;
    for (auto i : v)
    {
        sum += i;
    }
    return sum;
}

// function with void return type
void PrintStrings(string s1, string s2)
{
    cout << s1 << s2 << "\n";
}

int main()
{
    auto d = 3;
    auto f = 7; 
    string s1 = "C++ is ";
    string s2 = "super awesome!";
    vector<int> v = {1, 2, 3, 4};
    cout << AdditionFunction(d, f) << "\n";
    cout << VectorAddition(v) << "\n";
    PrintStrings(s1, s2);
}