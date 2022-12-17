#pragma once
#include <cstring>
#include <stdlib.h>
#include <malloc.h>
#include <iostream>
#include <stdint.h>
#include <vector>
#include <fstream>
#include "convlib.hpp"
#include "typedefs.hpp"

class Mem{
public:

    unsigned char* memptr;
    size_t memorySize;

    Mem(size_t memorySize){
        memptr = (unsigned char*)malloc(memorySize);
        memorySize = memorySize;
        memset(memptr, 0, malloc_usable_size(memptr)); // xnopyt
    }
    ~Mem(){
        std::cout << "Cleaning up memory...\n";
        free(memptr);
    }

    uint8_t Read1(uint64_t address){
        if(address>=memorySize) return false; // false = not good; true = good;
        return memptr[address];
    }
    bool Write1(uint64_t address, uint8_t value){
        if(address>=memorySize) return false; // false = not good; true = good;
        memptr[address] = value;
        return true;
    }

    uint16_t Read2(uint64_t address){
        std::vector <uint8_t>values;

        values.push_back(memptr[address]);
        values.push_back(memptr[address+1]);

        return (uint16_t)values.at(1) * 256 + (uint16_t)values.at(0);
    }
    bool Write2(uint64_t address, uint16_t value);

    uint32_t Read4(uint64_t address);
    bool Write4(uint64_t address, uint32_t value);

    uint64_t Read8(uint64_t address);
    bool Write8(uint64_t address, uint64_t value);

    void LoadBinary(std::string filename){
        std::ifstream binaryFile;
        binaryFile.open(filename, std::ios::binary);

        binaryFile.seekg(0, std::ios::end);
        ull length = binaryFile.tellg();
        binaryFile.seekg(0, std::ios::beg);

        char* buffer = new char[length];

        binaryFile.read(buffer, length);
        binaryFile.close();

        for(ull i = 0; length > i; i++){
            memptr[i] = buffer[i];
        }

        std::cout << "Loaded the binary file." << std::endl;
    }
private:
protected:
};