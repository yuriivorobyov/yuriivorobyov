#include <iostream>
#include <cmath>
using namespace std;

float calculate(char operation, float one, float two)
{
    if (operation == '+')
    {
        return one + two;
    }
    if (operation == '-')
    {
        return one - two;
    }
    if (operation == '*')
    {
        return one * two;
    }
    if (operation == '/')
    {
        return one / two;
    }
}

int main()
{
calculate:
    cout << "Enter two numbers: \n\n";
    float first, second;
    cin >> first >> second;

    cout << "\n Enter  operation (+, -, *, /): ";
    char operation;
    cin >> operation;

    if (operation == '/' && second == 0)
    {
        cout << "Cannot divide by 0";
    }

    float result;


    result = calculate(operation, first, second);

    std::cout << "\nResult = " << result;
    int choice;
    cout << "\n Continue (1),  Exit(2): ";
    cin >> choice;
    if (choice == 1) {
        goto calculate;
    }
}