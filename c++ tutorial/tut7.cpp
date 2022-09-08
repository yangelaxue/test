#include <iostream>

int main()
{
    int num_slices;
    std::cout << "You many slices of pizza do you want?: "; // cout is an instance of ostream
    std::cin >> num_slices;                                 // cin is an instance of istream
    std::cout << "You have " << num_slices << " slices of pizza." << std::endl;

    // Alternative way of doing things.
    // printf("You have %i slices of pizza. %i\n", num_slices, num_slices+1); // same as the old Python print format thing.

    /*
    Multiple 
    line 
    comments 
    :D
    */
}