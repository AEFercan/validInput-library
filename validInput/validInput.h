#pragma once

namespace validInput{
    int intInputAny();
    double doubleInputAny();
    float floatInputAny();
    char charInputAny();
    char letterInputAny();
    int intInput(int min, int max);
    double doubleInput(double min, double max);
    float floatInput(float min, float max);
    char charInput(char min, char max);
    char letterInput(char min, char max);
}