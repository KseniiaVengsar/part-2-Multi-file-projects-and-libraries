#pragma once


//�������� ������
class Counter {
    //�������� ����� ������
private:
    //����
    int pole;
public:
    void pluse_1();
    void minus_1();

    int present_value();

    Counter();
    Counter(int pole_);
};