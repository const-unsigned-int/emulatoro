#include <iostream>
#include <thread>
#include <future>
#include "memory.hpp"
#include "registers.hpp"
#include "convlib.hpp"
#include "typedefs.hpp"
#include "bits.hpp"
#include "pow.hpp"

std::promise<uc> ullWriteOpPromise;

ull getStatus(Reg64 internals){
    return internals.Read(2); // Read second bit
}

const uc sp     = 0;
const uc bp     = 1;
const uc status = 2;

bool isValid(Reg64 internals, uc selector){
    if(0 > selector || internals.registers_num < selector) return false;
    return true;
}

ull ullReadOp(Reg64 internals, uc selector){
    if(!isValid(internals, selector)) {
        return 0;
    }

    return internals.Read(selector);
}

void ullWriteOp(Reg64 *internals, uc selector, ull value){
    if(!isValid(*internals, selector)) ullWriteOpPromise.set_value(1);
    
    internals->Set(selector, value);
    ullWriteOpPromise.set_value(0);
}

int main(int argc, char* argv[]){
    if(argc != 2){
        std::cout << "Usage: " << argv[0] << " binaryFile.bin" << std::endl;
        return 1;
    }
    ull memSizePow = 10;

    std::cout << "Starting emulator" << std::endl;

    // Memory
    std::cout << "Creating memory and registers." << std::endl;
    Mem memory(ullpow(2, memSizePow)); // 1st arg: size of mem
    memory.LoadBinary(argv[1]);

    printf("Memory size: 0x%llx bytes.\n", ullpow(2, memSizePow));

    Reg64 registers(4);

    // processor!

    ull pc;
    ull ir;
    // Internals:
    /*
        0 - sp
        1 - bp
        2 - status
    */
    Reg64 internals(3);

    pc = 0;
    ir = 0;

    pc = ir;
    pc++;

    std::future<uc> future = ullWriteOpPromise.get_future();
    
    ullWriteOp(&internals, sp, 15);

    //uc ullWriteOpPromiseReturn = future.get();

    //if (ullWriteOpPromiseReturn != 0){
    //    printf("There was error while simulating microprocessor!\n");
    //
    //    return 1;
    //}

    printf("%llu", ullReadOp(internals, sp));

    std::cout << "Finished execution!" << std::endl;

    return 0;
}