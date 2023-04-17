#pragma once


//описание класса
class Counter {
    //закрытые члены класса
private:
    //поля
    int pole;
public:
    void pluse_1();
    void minus_1();

    int present_value();

    Counter();
    Counter(int pole_);
};
