#include<iostream>
using namespace std;

#include"class.h"

Man::Man()
{
    cout << "Man()" << endl;
}
Man::~Man()
{
    cout << "~Man()" <<endl;
}
void Man::setage(int age)
{
    this->age = age;
}
int Man::getage(void)
{
    return this->age;
}

worker::worker()
{
    cout << "worker()" << endl;
}
worker::~worker()
{
    cout << "~workwer()" << endl;
}
