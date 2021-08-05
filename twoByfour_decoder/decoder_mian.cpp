#include "driver.h"
#include "monitor.h"
#include "decoder.h"

int sc_main(int argc, char* argv[]){
    sc_signal <bool> t_i0,t_i1,t_y0,t_y1,t_y2,t_y3;
    decoder d1 ("twoByfour");
    d1.i0(t_i0);
    d1.i1(t_i1);
    d1.y0(t_y0);
    d1.y1(t_y1);
    d1.y2(t_y2);
    d1.y3(t_y3);

    driver d2 ("Driver");
    d2.d_i0(t_i0);
    d2.d_i1(t_i1);

    monitor d3 ("Monitor");
    d3.m_i0(t_i0);
    d3.m_i1(t_i1);
    d3.m_y0(t_y0);
    d3.m_y1(t_y1);
    d3.m_y2(t_y2);
    d3.m_y3(t_y3);

    sc_start(100,SC_NS); //commands are case sensitive
    return(0);
}