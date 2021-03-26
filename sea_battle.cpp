#include <iostream>

/*
Задача 1. Корабли в “морском бое”

Требуется объявить массивы для игры в морской бой и вывести их размеры в консоль, не используя констант с размерами.
 Всего таких типов 4: крошечный, малый, средний и большой. Для простоты, типом элементов корабля могут быть
 обычные bool (размер 1 байт).
 * */

void getShips(){
    bool tiny[] = {false};
    bool small[] = {false, false};
    bool medium[] = {false, false, false};
    bool large[] = {false, false, false, false};
    std::cout << "task 1\n";
    std::cout << "================================\n";
    std::cout << "size of tiny: " << sizeof(tiny) / sizeof(bool) << "\n"
              << "size of small:" << sizeof(small) / sizeof(bool) << "\n"
              << "size of medium: " << sizeof(medium) / sizeof(bool) << "\n"
              << "size of large: " << sizeof(large) / sizeof(bool) << "\n";
    std::cout << "================================\n";
}