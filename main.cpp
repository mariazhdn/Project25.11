#include <iostream>
#include "main.h"
using namespace std;

int main()
{
    Transport obj1("Audi A5", new CombustionEngine("Super Puper X456"), new Robot(675243));
    obj1.Print();

    obj1.SetEngine(new ElectricEngine("Fyper Huper XLS"));
    obj1.Print();

    Transport obj2("Kamaz", new CombustionEngine("MicroWave XX5"), new Human("Вась", 52));
    obj2.Print();

    obj2.SetEngine(new DieselEngine("MicroDase FF9"));
    obj2.Print();
}