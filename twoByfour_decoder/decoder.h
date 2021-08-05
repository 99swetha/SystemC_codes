#include "systemc.h"
SC_MODULE(decoder){
sc_in<bool> i0,i1;
sc_out<bool> y0,y1,y2,y3;
void prc_decoder();
SC_CTOR(decoder){
SC_METHOD(prc_decoder);
sensitive<<i0<<i1;
}

};