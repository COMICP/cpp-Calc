#include <iostream>
#include <string>
using namespace std;
double InputMath() {
    try {
        double userNum;
        std::string userImp;
        std::cin >> userImp;
        userNum = stod(userImp);

        return userNum;
        
    }
    catch(int ){

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
int main()
{
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



}


