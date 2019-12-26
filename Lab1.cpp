#include <iostream>
#include <string.h>

using namespace std;

void commentChecker(){
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, sizeof(input));
    bool doubleSlash = false, commentStart = false, commentEnd = false;

    for(int i = 0; i < strlen(input) - 1; i++){
        if (input[i] == '/' && input[i + 1] == '/'){
            doubleSlash = true;
        }
        else if (input[i] == '/' && input[i + 1] == '*'){
            commentStart = true;
        }
        else if (input[i] == '*' && input[i + 1] == '/'){
            commentEnd = true;
        }
    }

    if (doubleSlash || (commentStart && commentEnd)){
        cout << "It is a comment.";
    }
    else{
        cout << "It is not a comment.";
    }
}

void regularExpression1(){
    //ab
    char input[100];
    cout << "For Regex: ab\n" << "Enter a string: ";
    cin >> input;

    if ((strlen(input) == 2) && (input[0] == 'a') && (input[1] == 'b')){
        cout << "String accepted.";
    }
    else{
        cout << "String rejected.";
    }
}

void regularExpression2(){
    char input[100];
    bool endOfA = false, match = true;
    cout << "For regex: a*b+\n" << "Enter a string: ";
    cin >> input;

    for(int i = 0; i < strlen(input); i++){
        if ((input[i] != 'a' && input[i] != 'b') || (endOfA && input[i] == 'a')){
            match = false;
            break;
        }

        if (input[i] == 'b'){
            endOfA = true;
        }
    }

    if (match && endOfA){
        cout << "String Accepted.";
    }
    else{
        cout << "String Rejected.";
    }
}

void regularExpression3(){
    //aab
    char input[100];
    cout << "For Regex: aab\n" << "Enter a string: ";
    cin >> input;

    if ((strlen(input) == 3) && (input[0] == 'a') && (input[1] == 'a') && (input[2] == 'b')){
        cout << "String accepted.";
    }
    else{
        cout << "String rejected.";
    }
}

void identifierChecker(){
    char input[100];
    bool match = true;
    cout << "Enter an identifier: ";
    cin >> input;

    if ((input[0] != '_') && !(isalpha(input[0]))){
        match = false;
    }
    else{
        for (int i = 1; i < strlen(input); i++){
            if (!(isalpha(input[i])) && !(isdigit(input[i]))){
                match = false;
                break;
            }
        }
    }

    if (match){
        cout << "Identifier verified.";
    }
    else{
        cout << "Identifier not verified.";
    }
}

int main()
{
    //commentChecker();
    //regularExpression1();
    //regularExpression2();
    //regularExpression3();
    //identifierChecker();
    return 0;
}
