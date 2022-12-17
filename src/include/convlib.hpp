#pragma once
#include <vector>

std::vector<uint8_t> qword_to_bytes(uint64_t number){
    std::vector<uint8_t> result;
    uint8_t *p = (uint8_t *)&number;
    for(int i = 0; i < 8; i++) {
        result.push_back(p[i]);     
    }

    return result;
}

std::vector<uint8_t> dword_to_bytes(uint32_t number){
    std::vector<uint8_t> result;
    uint8_t *p = (uint8_t *)&number;
    for(int i = 0; i < 4; i++) {
        result.push_back(p[i]);     
    }

    return result;
}

std::vector<uint8_t> word_to_bytes(uint16_t number){
    std::vector<uint8_t> result;
    uint8_t *p = (uint8_t *)&number;
    for(int i = 0; i < 2; i++) {
        result.push_back(p[i]);     
    }

    return result;
}