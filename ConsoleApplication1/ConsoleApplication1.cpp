// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//prototype function
void calc();

void calc()
{
    int num1 = 0;
    int num2 = 0;
    int op = 0;
    int result = 0;
    int loopQuery = 0;

    std::cout << "Please enter a number." << std::endl;
    std::cin >> num1;


    std::cout << "Please enter another number." << std::endl;
    std::cin >> num2;


    std::cout << "Please enter an operator. (1 = +, 2 = -, 3 = x, 4 = /)" << std::endl;
    std::cin >> op;

    switch (op)
    {
    case 1:
    {
        result = num1 += num2;
        break;
    }

    case 2:
    {
        result = num1 -= num2;
        break;
    }

    case 3:
    {
        result = num1 * num2;
        break;
    }

    case 4:
    {
        result = num1 / num2;
        break;
    }

    default:
    {
        std::cout << "That ain't a number." << std::endl;
        break;
    }
    }

    std::cout << "Your answer is: " << result << "." << std::endl;
    std::cout << "Loop again? 1/2" << std::endl;
    std::cin >> loopQuery;
    if (loopQuery == 1)
    {
        calc();
    }
    if (loopQuery == 2)
    {
        std::exit;
    }
}

int main()
{
    calc();
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
