#pragma once

signed char scpow(signed char base, signed char exp){
    char result = 1;
    for (signed char i = 0; exp > i; i++){
        result = result * base;
    }
    return result;
}
signed short sspow(signed short base, signed short exp){
    short result = 1;
    for (signed short i = 0; exp > i; i++){
        result = result * base;
    }
    
    return result;
}
signed long slpow(signed long base, signed long exp){
    long result = 1;
    for (signed long i = 0; exp > i; i++){
        result = result * base;
    }
    return result;
}
signed long long sllpow(signed long long base, signed long long exp){
    long long result = 1;
    for (signed long long i = 0; exp > i; i++){
        result = result * base;
    }
    return result;
}

unsigned char ucpow(unsigned char base, unsigned char exp){
    char result = 1;
    for (unsigned char i = 0; exp > i; i++){
        result = result * base;
    }
    return result;
}
unsigned short uspow(unsigned short base, unsigned short exp){
    short result = 1;
    for (unsigned short i = 0; exp > i; i++){
        result = result * base;
    }
    
    return result;
}
unsigned long ulpow(unsigned long base, unsigned long exp){
    long result = 1;
    for (unsigned long i = 0; exp > i; i++){
        result = result * base;
    }
    return result;
}
unsigned long long ullpow(unsigned long long base, unsigned long long exp){
    long long result = 1;
    for (unsigned long long i = 0; exp > i; i++){
        result = result * base;
    }
    return result;
}
