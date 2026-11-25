#pragma once 
#include <iostream>
using namespace std;

class IDriver //Interface
{
public:
    virtual void Navigate() = 0;
};

class IEngine //Interface
{
public:
    virtual void Move() = 0;
};

class CombustionEngine : public IEngine
{
    string model;
public:
    CombustionEngine(){}
    CombustionEngine(string s) { model = s; }
    virtual void Move()
    {
        cout << "Combustion -> " << model << endl;
    }
};

class ElectricEngine : public IEngine
{
    string model;
public:
    ElectricEngine(){}
    ElectricEngine(string s) { model = s; }
    virtual void Move()
    {
        cout << "Electric -> " << model << endl;
    }
};

class DieselEngine : public IEngine
{
    string model;
public:
    DieselEngine(){}
    DieselEngine(string s) { model = s; }
    virtual void Move()
    {
        cout << "Diesel -> " << model << endl;
    }
};

class Human : public IDriver 
{
    string name;
    int age;
public:
    Human(){}
    Human(string n, int a) : name(n), age(a) {}
    void Navigate()
    {
        cout << "Navigate: " << name << " " << age << endl;
    }
};

class Robot : public IDriver
{
    int id;
public:
    Robot() {}
    Robot(int i) : id(i) {}
    void Navigate()
    {
        cout << "Navigate: " << id << endl;
    }
};

class Transport
{
    string model;
    IEngine* engine; //не важно какой енжин будет, абстрагируемся
    IDriver* driver;
public:
    Transport(){}
    Transport(string mod, IEngine* eng, IDriver* driv)
    {
        model = mod;
        engine = eng;
        driver = driv;
    }
    void SetEngine(IEngine* eng)
    {
        engine = eng;
    }
    void SetDriver(IDriver* driv)
    {
        driver = driv;
    }
    void Print()
    {
        cout << "Model: " << model << " | ";
        driver->Navigate();
        engine->Move();
        cout << endl;
    }
};