#include <iostream>
#include <string.h>

using namespace std;

void operatorCheck(){
    char operators[] = {'+', '-', '*', '/'};
    string names[] = {"Addition", "Subtraction", "Multiplication", "Division"};
    char input;
    int i;

    cout << "Enter an operator: ";
    cin >> input;

    for (i = 0; i < 4; i++){
        if (operators[i] == input){
            cout << names[i] << " operator.";
            break;
        }
    }

    if (i == 4){
        cout << "Invalid operator.";
    }

}

int main()
{
    operatorCheck();
    return 0;
}
