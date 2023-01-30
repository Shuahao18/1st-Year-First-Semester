#include <iostream>

using namespace std;

int numOne;
int numTwo;
char op;


int main()
{
    cout << "select a symbol (+ - * /): ";
    cin >> op;
    cout << "\nType the number One: ";
    cin >> numOne;
    cout << "Type the number Two: ";
    cin >> numTwo;

    switch (op){
          case '+':
      cout << numOne << " + " << numTwo << " = " << numOne + numTwo;
      break;

    case '-':
      cout << numOne << " - " << numTwo << " = " << numOne - numTwo;
      break;

    case '*':
      cout << numOne << " * " << numTwo << " = " << numOne * numTwo;
      break;

    case '/':
      cout << numOne << " / " << numTwo << " = " << numOne / numTwo;
      break;

    default:
      // If the operator is other than +, -, * or /, error message is shown
      cout << "Error! operator is not correct";
      break;

    }



}

