#include "memory.h"

char*   allocateMemoryForBin(){
    char* binValue = (char*)malloc(sizeof(char) * MAXBINLENGTH);
    return binValue;
}

char* allocateMemoryForOct(){
    char* oct = (char*)malloc(sizeof(char) * MAXOCTLENGTH);
    return oct;
}

char* allocateMemoryForDec(){
    char* decValueStr = (char*)malloc(sizeof(char) * MAXDECLENGTH);
    return decValueStr;
}

