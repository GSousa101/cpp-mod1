#include <iostream>
#include <stack>
#include <sstream>
#include <cstdlib>
#include <cctype>

static void     doRPN(std::stack<int> operandStack, std::string token) {
    int operand2 = operandStack.top();
    operandStack.pop();
    int operand1 = operandStack.top();
    operandStack.pop();

    switch (token[0]) {
        case '+':
            operandStack.push(operand1 + operand2);
            break;
        case '-':
            operandStack.push(operand1 - operand2);
            break;
        case '*':
            operandStack.push(operand1 * operand2);
            break;
        case '/':
            operandStack.push(operand1 / operand2);
            break;
        default:
			throw std::exception();
    }
}

static bool         stackHasTwoNumbers(std::stack<int> operandStack) {
    std::stack<int> tempStack = operandStack;
    
    int stackSize = 0;
    while (!tempStack.empty()) {
        tempStack.pop();
        stackSize++;
        if (stackSize == 2)
            return true;
    }
    return false;
}

static bool         isNegative(std::string token)
{
    return ((token.size() > 1 && token[0] == '-' && isdigit(token[1])))
}

int                 calculate(const std::string& expression) {
    std::stack<int> operandStack;

    std::istringstream iss(expression);
    std::string token;

    while (iss >> token) {
        if (isdigit(token[0]) || (isNegative(token)))
        {
            operandStack.push(atoi(token.c_str()));
        }
        else if (stackHasTwoNumbers(operandStack))
        {
            doRPN(operandStack, token);
        }
    }
	if (operandStack.size() != 1)
			throw std::exception();
    return operandStack.top();
}
