#ifndef _SINGLETON_H_
#define _SINGLETON_H_
#include <iostream>

class Singleton
{
public:
    Singleton(const Singleton &) = delete;
    Singleton(Singleton &&) = delete;
    Singleton &operator=(const Singleton &) = delete;
    Singleton &operator=(Singleton &&) = delete;
    ~Singleton() {
        std::cout << "Singleton destructor\n";
        instance = nullptr;
        // if (instance != nullptr) {
        //     delete instance;
        //     instance = nullptr;
        // }
    }

    static Singleton *getInstance(int number)
    {
        if (instance == nullptr)
        {
            instance = new Singleton(number);
        }
        return instance;
    }
    int getNumber() { return number; }

private:
    Singleton(int number) : number(number){};
    static Singleton *instance;
    int number = 0;
};

#endif /* _SINGLETON_H_ */