#pragma once

#include <vector>
#include "typedefs.hpp"

class Reg64{
public:
    // Registers
    std::vector <unsigned long long>registers;
    int registers_num;

    // Push eight registers
    Reg64(int registers_num){
        registers_num = registers_num;
        for (int i = 0; registers_num > i; i++) registers.push_back(0);
    }

    void Set(int idx, unsigned long long value) {
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = value;
    }
    void Increment(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]++;
    }
    void Decrement(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]--;
    }
    void Clear(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = 0;
    }
    ull Read(int idx){
        if(!isValid(idx)) return 0;
        return registers.at(idx);
    }

private:
    bool isValid(int idx){
        if (idx > registers_num || 0 > idx) return false;
        
        return true;
    }
};

class Reg32{
public:
    // Registers
    std::vector <unsigned long>registers;
    int registers_num;

    // Push eight registers
    Reg32(int registers_num){
        registers_num = registers_num;
        for (int i = 0; registers_num > i; i++) registers.push_back(0);
    }

    void Set(int idx, unsigned long value) {
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = value;
    }
    void Increment(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]++;
    }
    void Decrement(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]--;
    }
    void Clear(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = 0;
    }

private:
    bool isValid(int idx){
        if (idx > registers_num || 0 > idx) return false;
        
        return true;
    }
};

class Reg16{
public:
    // Registers
    std::vector <unsigned short>registers;
    int registers_num;

    // Push eight registers
    Reg16(int registers_num){
        registers_num = registers_num;
        for (int i = 0; registers_num > i; i++) registers.push_back(0);
    }

    void Set(int idx, unsigned short value) {
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = value;
    }
    void Increment(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]++;
    }
    void Decrement(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]--;
    }
    void Clear(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = 0;
    }

private:
    bool isValid(int idx){
        if (idx > registers_num || 0 > idx) return false;
        
        return true;
    }
};

class Reg8{
public:
    // Registers
    std::vector <unsigned char>registers;
    int registers_num;

    // Push eight registers
    Reg8(int registers_num){
        registers_num = registers_num;
        for (int i = 0; registers_num > i; i++) registers.push_back(0);
    }

    void Set(int idx, unsigned char value) {
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = value;
    }
    void Increment(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]++;
    }
    void Decrement(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx]--;
    }
    void Clear(int idx){
        if(!isValid(idx)) return;  // Is valid register?!???
        registers[idx] = 0;
    }

private:
    bool isValid(int idx){
        if (idx > registers_num || 0 > idx) return false;
        
        return true;
    }
};