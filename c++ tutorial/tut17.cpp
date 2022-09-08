#include <iostream>
using std::cout, std::cin;

void print_int(int n)
{
    cout << "I have printed the integer " << n << ".\n";
}

int main()
{
    // cout << "Which integer would you like printed?: ";
    // int n;
    // cin >> n;
    // print_int(n);

    bool found = true;
    if(found) cout << "found is " << std::boolalpha << found << std::endl;
    return 0; 
}