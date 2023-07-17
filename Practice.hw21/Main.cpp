#include <iostream>
#include <string>

class Employer {
public:
    virtual void Print() const = 0;
};

class President : public Employer {
public:
    void Print() const override {
        std::cout << "I am the President" << std::endl;
    }
};

class Manager : public Employer {
public:
    void Print() const override {
        std::cout << "I am a Manager" << std::endl;
    }
};

class Worker : public Employer {
public:
    void Print() const override {
        std::cout << "I am a Worker" << std::endl;
    }
};

int main() {
    Employer* emp1 = new President();
    Employer* emp2 = new Manager();
    Employer* emp3 = new Worker();

    emp1->Print(); // Виведе "I am the President"
    emp2->Print(); // Виведе "I am a Manager"
    emp3->Print(); // Виведе "I am a Worker"

    delete emp1;
    delete emp2;
    delete emp3;

    return 0;
}
