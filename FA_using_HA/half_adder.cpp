#include "half_adder.h"

void half_adder ::  prc_half_adder(){
    sum = a^b;
    carry = a&b;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Carry: "<<carry<<endl;
    cout<<"The End";
}

