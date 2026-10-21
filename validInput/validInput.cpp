#include "validInput.h"
#include <iostream>
#include <limits>
#include <cctype>
using namespace std;

namespace validInput{

    bool numberTypeCheck(){
            if(cin.fail() == false)
                return(true);
            else
                return(false);   
    }

    bool charTypeCheck(string input){
            if(input.length() == 1)
                return(true);
            else
                return(false);
    }

    int intInputAny(){
        int input;
        while(true){
            cin >> input;
            if(numberTypeCheck() == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter an integer: ";
            }
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input);
            }
        }
    }

    double doubleInputAny(){
        double input;
        while(true){
            cin >> input;
            if(numberTypeCheck() == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a double: ";
            }
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input);
            }
        }
    }

    float floatInputAny(){
        float input;
        while(true){
            cin >> input;
            if(numberTypeCheck() == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a float: ";
            }
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input);
            }
        }
    }

    char charInputAny(){
        string input;
        while(true){
            cin >> input;
            if(charTypeCheck(input) == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a single character: ";
            }
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input[0]);
            }
        }
    }

    char letterInputAny(){
        string input;
        while(true){
            cin >> input;
            if(charTypeCheck(input) == false || !isalpha(input[0])){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a single alphabetic character: ";
            }
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input[0]);
            }
        }
    }

    int intInput(int min, int max){
        int input;
        while(true){
            cin >> input;
            if(numberTypeCheck() == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter an integer: ";
            }
            else if (input < min || input > max){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid input! Please enter an integer between " << min << " and " << max << ": ";
            } 
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input);
            }
        }
    }

    double doubleInput(double min, double max){
        double input;
        while(true){
            cin >> input;
            if(numberTypeCheck() == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a double: ";
            }
            else if (input < min || input > max){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid input! Please enter a double between " << min << " and " << max << ": ";
            } 
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input);
            }
        }
    }

    float floatInput(float min, float max){
        float input;
        while(true){
            cin >> input;
            if(numberTypeCheck() == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a float: ";
            }
            else if (input < min || input > max){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid input! Please enter a float between " << min << " and " << max << ": ";
            } 
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input);
            }
        }
    }

    char charInput(char min, char max){
        string input;
        while(true){
            cin >> input;
            if(charTypeCheck(input) == false){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a single character: ";
            }
            else if (input[0] < min || input[0] > max){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid input! Please enter a single character between " << min << " and " << max << ": ";
            } 
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input[0]);
            }
        }
    }

    char letterInput(char min, char max){
        string input;
        while(true){
            cin >> input;
            if(charTypeCheck(input) == false || !isalpha(input[0])){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid Input! Please enter a single alphabetic character: ";
            }
            else if (input[0] < min || input[0] > max){
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << " Invalid input! Please enter a single alphabetic character between " << min << " and " << max << ": ";
            } 
            else{
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                return(input[0]);
            }
        }
    }
}