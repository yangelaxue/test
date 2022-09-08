#include <iostream> // import package called "input/output stream"

int main() //main function. It is always necessay and runs always when the file is loaded.
           //output type is an integer
{
    std::cout << "Hello World\n"; // std=="standard" is a "namespace"
                                  // cout=="console out" is an "object" which is from a class called ostream from the iostream file from std
                                  // e.g. flow_forecast.py has a function called print_helloworld
                                  // if "using namespace std;", then we can just use the function cout as is. This imports all functions without having to write std::
                                  // Same as Python, usually wise to keep the preface to avoid naming conflicts.
                                  // "<<" is an operator which operates on cout and "Hello World\n" which gives the string to the object.
    // Alternative way of doing things:
    // using namespace std;
    // cout << "Hello World\n";
    // or
    // using std::cout; // to just import this one instance. Within {}, the declaration only works in {}.

    int num_slices = 5; // This is defining a variable.
    // This is equivalent to:
    // int num_slices; // declares the variable
    // slices = 5; // assigns value to the variable.

    return 0; //return 0 indicates that everything went well. It's just convention/
}