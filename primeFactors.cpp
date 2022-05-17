#include <iostream>

int main()
{
    long long userNum;
    std::cout << "Please enter your number" << std::endl;
    std::cin >> userNum;

    // Prime factors can be found till sqrt of userNum
    for (int i = 2; i * i <= userNum; i++)
    {
        while (userNum % i == 0) // Keep on printing a factor
        {
            std::cout << i << std::endl;
            userNum /= i;
        }
    }

    // If in the end, userNum is reduced to a prime number,
    // sqrt(userNum) won't give us any prime that can divide
    // userNum.... So we need to print userNum as well, since
    // it will be the last prime factor
    if (userNum > 1) 
    {
        std::cout << userNum << std::endl;
    }
    
    return 0;
}

// https://youtube.com/watch?v=j8Y1fDgFnsI