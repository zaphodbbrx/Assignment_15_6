#include <iostream>

void enterData(int & var, const char *name, int low, int high){
    do{
        std::cout << "\nEnter " << name << ": ";
        std::cin >> var;
    } while(var > high || var < low);
}

void isolationLevel(){
    int n = 0, peoplePerFloor=0;
    int totalPeopleInHouse = 0;
    std::cout << "task 3\n";
    std::cout << "================================\n";
    enterData(n, "total number of people", 0, 9000);
    for (int i = 0; i < 5; i++){
        std::cout << "Floor " << i+1 << "\n";
        enterData(peoplePerFloor, "number of people", 0, n - totalPeopleInHouse);
        totalPeopleInHouse += peoplePerFloor;
    }
    std::cout << "Isolation level: " << (float) totalPeopleInHouse * 100.0 / (float) n << "\n";
    std::cout << "================================\n";
}