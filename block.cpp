#include <iostream>

void averageFloors(){
    int shop[1];
    int fitnessClub[2];
    int cottage[3];
    int appartmentHouse[15];
    int skyscraper[50];
    float avgFloors = 0.0;

    avgFloors += (sizeof(shop) + sizeof(fitnessClub) + sizeof(cottage) + sizeof(appartmentHouse) + sizeof(skyscraper));
    avgFloors /= sizeof(int) * 5.0;
    std::cout << "task 2\n";
    std::cout << "================================\n";
    std::cout << "Average floors: " << avgFloors << "\n";
    std::cout << "================================\n";
}