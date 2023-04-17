
#include "Header.h"

void Counter::pluse_1() {
    pole++;
}
void Counter::minus_1() {
    pole--;
}
int Counter::present_value() {
    return pole;
}
Counter::Counter() {
    pole = 1;
}
Counter::Counter(int pole_) {
    pole = pole_;
}