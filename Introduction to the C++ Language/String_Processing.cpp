#include <iostream>
#include <sstream>
#include <string>

using std::istringstream;
using std::string;
using std::cout;

// int main()
// {
//     string a("1 2 3");

//     istringstream my_stream(a);

//     int n;

//     // Testing to see if the stream was successful and printing results.
//     while (my_stream)
//     {
//         my_stream >> n;
//         if (my_stream) 
//         {
//             cout << "That stream was successful: " << n << "\n";
//         }
//         else
//         {
//             cout << "That stream was NOT successful!" << "\n";
//         }
//     }
// }

int main()
{
    string a("1 2 3");
    string b("1,2,3");

    istringstream my_stream(a);
    istringstream my_stream2(b);

    int n;
    char c;

    while(my_stream2 >> n >> c)
    {
        cout << "That stream was successful: " << n << " " << c << "\n";
    }
    cout << "The stream has failed!" << "\n";

    while (my_stream >> n)
    {
        cout << "That stream was successful: " << n << "\n";
    }
    cout << "The stream has failed." << "\n";
}