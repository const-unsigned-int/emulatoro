#pragma once
#include "typedefs.hpp"

uc ucbit_test(uc bit, uc value){
    return ((value>>bit)%2!=0);
}

uc ucbit_set(uc bit, uc value){
    return (value |(1 << bit));
}

uc ucbit_clear(uc bit, uc value){
    return value &(~(1<<bit));
}

uc ucbit_toggle(uc bit, uc value){
    return ucbit_test(bit, value) ? ucbit_clear(bit, value) : ucbit_set(bit, value);
}


sc scbit_test(sc bit, sc value){
    return ((value>>bit)%2!=0);
}

sc scbit_set(sc bit, sc value){
    return (value |(1 << bit));
}

sc scbit_clear(sc bit, sc value){
    return value &(~(1<<bit));
}

sc scbit_toggle(sc bit, sc value){
    return scbit_test(bit, value) ? scbit_clear(bit, value) : scbit_set(bit, value);
}

us usbit_test(us bit, us value){
    return ((value>>bit)%2!=0);
}

us usbit_set(us bit, us value){
    return (value |(1 << bit));
}

us usbit_clear(us bit, us value){
    return value &(~(1<<bit));
}

us usbit_toggle(us bit, us value){
    return usbit_test(bit, value) ? usbit_clear(bit, value) : usbit_set(bit, value);
}

ss ssbit_test(ss bit, ss value){
    return ((value>>bit)%2!=0);
}

ss ssbit_set(ss bit, ss value){
    return (value |(1 << bit));
}

ss ssbit_clear(ss bit, ss value){
    return value &(~(1<<bit));
}

ss ssbit_toggle(ss bit, ss value){
    return ssbit_test(bit, value) ? ssbit_clear(bit, value) : ssbit_set(bit, value);
}

ul ulbit_test(ul bit, ul value){
    return ((value>>bit)%2!=0);
}

ul ulbit_set(ul bit, ul value){
    return (value |(1 << bit));
}

ul ulbit_clear(ul bit, ul value){
    return value &(~(1<<bit));
}

ul ulbit_toggle(ul bit, ul value){
    return ulbit_test(bit, value) ? ulbit_clear(bit, value) : ulbit_set(bit, value);
}

sl slbit_test(sl bit, sl value){
    return ((value>>bit)%2!=0);
}

sl slbit_set(sl bit, sl value){
    return (value |(1 << bit));
}

sl slbit_clear(sl bit, sl value){
    return value &(~(1<<bit));
}

sl slbit_toggle(sl bit, sl value){
    return slbit_test(bit, value) ? slbit_clear(bit, value) : slbit_set(bit, value);
}


ull ullbit_test(ull bit, ull value){
    return ((value>>bit)%2!=0);
}

ull ullbit_set(ull bit, ull value){
    return (value |(1 << bit));
}

ull ullbit_clear(ull bit, ull value){
    return value &(~(1<<bit));
}

ull ullbit_toggle(ull bit, ull value){
    return ullbit_test(bit, value) ? ullbit_clear(bit, value) : ullbit_set(bit, value);
}

sll sllbit_test(sll bit, sll value){
    return ((value>>bit)%2!=0);
}

sll sllbit_set(sll bit, sll value){
    return (value |(1 << bit));
}

sll sllbit_clear(sll bit, sll value){
    return value &(~(1<<bit));
}

sll sllbit_toggle(sll bit, sll value){
    return ullbit_test(bit, value) ? ullbit_clear(bit, value) : ullbit_set(bit, value);
}
