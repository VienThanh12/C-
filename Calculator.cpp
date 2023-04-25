#include <iostream>

using namespace std;

class Calculator
{
private:
    int operand1, operand2;
    double result;
    char oper;

public:
    double calculate()
    {
        result = 0;

        switch (oper)
        {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            if (operand2 != 0) {
                result = (double)operand1 / operand2;
            }
            break;
        default:
            cout << "No result\n";
        }
        return result;
    }

    void setOperand1(int& val)
    {
        operand1 = val;
    }

    void setOperand2(int& val)
    {
        operand2 = val;
    }

    void setOperator(char& op)
    {
        oper = op;
    }
};

int main()
{
    Calculator c;
    int value1, value2;
    char op;

    while (true)
    {
        cout << "Calculator: ";
        cin >> value1;
        c.setOperand1(value1);
        cin >> op;
        c.setOperator(op);
        cin >> value2;
        c.setOperand2(value2);

        cout << c.calculate() << endl;
    }
}
