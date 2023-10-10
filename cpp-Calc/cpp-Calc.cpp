#include <iostream>
#include <string>
using namespace std;

bool is_number(const std::string& s)
{
    try
    {
        std::stod(s);
    }
    catch (...)
    {
        return false;
    }
    return true;
}

double InputMath() {
    bool inputCheck = false;
    double userNum;
    std::string userImp;

    while (inputCheck == false) {

        std::cin >> userImp;
        inputCheck = is_number(userImp);
        if (inputCheck) {

            userNum = stod(userImp);
            return userNum;
        }
        else {
            cout << "Enter Valid Input\n";
        }
    }
}

string InputOperator() {
    string operateChar;
    
    while (operateChar != "+" && operateChar != "-" && operateChar != "/" && operateChar != "*" ) {
        std::cout << "Enter operator (+ - * / )\n";
        std::cin >> operateChar;

    }
    return operateChar;
}


double math() {
    double answer, firstNum, secondNum;//Initialize number variables.
    string operand;

    std::cout << "Enter first number\n";
    firstNum = InputMath();

    operand = InputOperator();

    std::cout << "Enter second number\n";
    secondNum = InputMath();

    if (operand == "+") {
        answer = firstNum + secondNum;
    }
    else if (operand == "-") {
        answer = firstNum - secondNum;
    }
    else if (operand == "*") {
        answer = firstNum * secondNum;
    }
    else if (operand == "/") {
        answer = firstNum / secondNum;
    }
    else {
        std::cout << "Error\n";
    }
    return answer;
}

void mathLoop() {
    double answer = 0;
    while (answer == 0) {
        try {
            answer = math();

        }
        catch (double catchInt) {
            std::cout << "please input properly\n";

        }
    }
    std::cout << "answer = ";
    std::cout << answer;
    cout << "\n";
}
int main()
{
    string continueChoice = "Y";

    while (continueChoice == "Y" || continueChoice == "y") {
        mathLoop();
        cout << "Would you like to do another?\nEnter 'Y' to continue\n";
        cin >> continueChoice;
    }

}