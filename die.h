//
// Created by Izzy Avilez on 2/14/20.
//

#ifndef CRAPS_DIE_H
#define CRAPS_DIE_H

#include <string>

class Die {

private:
    int numberOfSides;
    int increment;
    int value;
    std::string color;
    bool isSymbols;
    std::string material;
    int startingValue;

public:
    Die (int staritngNumberOfSides, int startingIncrement, int startingStartingValue, std::string color="White",
    bool isSymbols=false, std::string material="Bone");
    int roll();
    void setNumberOfSides(int newNumberOfSides);
    int getNumberOfSides();
    void setIncFrement(int newIncrement);
    int getIncrement();
    void setValue(int newStartingValue);
    int getValue();
    void setColor(std::string newColor);
    std::string getColor();
    void setIsSymbol (bool newIsSymbol);
    bool isSymbol();
    void setMaterial(std::string newMaterial);
    std::string getMaterial();


}

#endif //CRAPS_DIE_H
