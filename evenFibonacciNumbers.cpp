#include <iostream>

#define BOUND 4000000

int main()
{
    long first = 0, second = 1;
    long sum = 0;
    long finalSum = 0;

    while (sum < BOUND)
    {
        sum = first + second;
        first = second;
        second = sum;

        if ((sum % 2) == 0)
        {
            finalSum += sum;
        }
    }

    std::cout << finalSum << std::endl;
    return 0;
}