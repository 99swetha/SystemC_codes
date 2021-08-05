//Hare Krishna
#include "systemc.h"
SC_MODULE(monitor){
sc_in<bool> m_i0, m_i1, m_y0, m_y1, m_y2, m_y3;
void prc_monitor();
SC_CTOR(monitor){
SC_METHOD(prc_monitor);
sensitive<<m_y0<<m_y1<<m_y2<<m_y3;
}
};