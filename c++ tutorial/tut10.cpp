#include <iostream>
#include <cmath>

int times_by_2(int n)
{
    return n*2;
}

void cout_helloworld(int n)
{
    for(int i=0;i<n;i++)
    {
        std::cout << "hello world\n";
    }
}

int main()
{
    std::cout << "Number to multiply by 2: ";
    int n;
    std::cin >> n;
    std::cout << times_by_2(n) << std::endl;

    std::cout << 5./2. << std::endl;

    // cout_helloworld(n);

    return 0;
}

