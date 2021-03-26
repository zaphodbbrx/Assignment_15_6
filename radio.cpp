#include <iostream>
#include "isolation.h"

void radio(){
    int currentFrequency=1;
    float frequencies[10] = {0.1, 0.25, 7.42, 5.1, 4.2, 8.12, 1.87, 2.22, 9.1, 1.15};
    bool isOn = true;
    std::cout << "task 4\n";
    std::cout << "================================\n";
    while (isOn){
        std::cout << "Playing station " << frequencies[currentFrequency - 1];
        enterData(currentFrequency, "new station number", 0, 10);
        if (currentFrequency == 0) isOn = false;
    }
    std::cout << "radio is off\n";
    std::cout << "================================\n";
}