//
// Created by cruisin on 2021/12/11.
//
#include <iostream>
using namespace std;
class stu1{
public:
    stu1(){}
    ~stu1(){}
    int hh();
protected:
    int hh2;
private:
    int hh3;
};
class stu2: public stu1{
public:
    stu2(){}
    ~stu2(){}
    using stu1::hh;
};