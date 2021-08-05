#include "driver.h"

void driver :: prc_driver(){
    sc_uint<2> var;
    var = 0;
    while(var<4){
    cout<<var<<endl;    
    d_i0 = var[0];
    d_i1 = var[1];
    wait(5,SC_NS);
    var++;
    }
}