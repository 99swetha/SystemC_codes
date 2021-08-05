#include "systemc.h"
SC_MODULE(driver){
sc_out<bool> d_i0, d_i1;

void prc_driver();
SC_CTOR(driver){
SC_THREAD(prc_driver);

}
};