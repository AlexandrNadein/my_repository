#include "logic.h"
#include "math.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "entrypoint.h"
#include "memory.h"
#include <ctype.h>
#include <qdebug.h>


void convert(AppParams* params, Context* context){
    if (context->boxFrom == context->boxTo) {
        context->newValue = params->initial;
    }
    else {
        if (context->boxFrom == BIN){
            fromBinToAny(params, context);
        }
        else if(context->boxFrom == OCT){
            fromOctToAny(params, context);
        }
        else if(context->boxFrom == DEC){
            fromDecToAny(params, context);
        }
    }
}

void clear(Context* context){
    context->newValue = "";
}

void swap(AppParams* params, Context* context){
    const char* temp = params->initial;
    params->initial = context->newValue;
    context->newValue = temp;

    int tempS = context->boxFrom;
    context->boxFrom = context->boxTo;
    context->boxTo = tempS;
}
// abc
// abcd
// != 0 == true
// !0 == 1, !1 == 0, !40 == 0 !-40 == 0 !!-40
void validation(AppParams* params, Context* context){
    if (!strcmp(params->initial, ""))
        context->status = NO_INPUT;
    else {
        if (context->boxFrom == BIN){
            context->status = isBinaryValidation(params);
        }
        else if (context->boxFrom == OCT){
            context->status = isOctalValidation(params);
        }
        else if (context->boxFrom == DEC){
            context->status = isDecimalValidation(params);
        }
    }
}

enum Status isBinaryValidation(AppParams* params) {
    Status state = CORRECT;
    if (strlen(params->initial) > MAXBINLENGTH - 1) {
        state = INCORRECT_LENGTH;
    }
    else if(isBin(params->initial)){
        state = INCORRECT_VALUE;
        }
    return state;
}

int isBin(const char* str) {
    Status state = CORRECT;
    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '1') {
            state = INCORRECT_VALUE;
        }
    }
    return state;
}

enum Status isOctalValidation(AppParams* params) {
    Status state = CORRECT;
    if (strlen(params->initial) > MAXOCTLENGTH) {
        state = INCORRECT_LENGTH;
    } else if (isOctal(params->initial)) {
        state = INCORRECT_VALUE;
    }
    return state;
}

int isOctal(const char* str) {
    Status state = CORRECT;
    for (size_t i = 0; i < strlen(str); i++) {
        if (str[i] != '0' && str[i] != '7') {
            state = INCORRECT_VALUE;
        }
    }
    return state;
}

enum Status isDecimalValidation(AppParams* params) {
    Status state = CORRECT;
    const char* str = params->initial;
    char* endptr;
    long long intValue = strtoll(str, &endptr, TEN);
    if (intValue > INT_MAX || intValue < INT_MIN) {
        state = INCORRECT_LENGTH;
    }
    else if (isDec(str)){
        state = INCORRECT_VALUE;
    }

    if (!isdigit(str[0]) && str[0] != '-')
        state = INCORRECT_VALUE;
    return state;
}

int isDec(const char* str) {
    Status state = CORRECT;
    size_t len = strlen(str);
    if (!isdigit(str[0]) || str[0] != '-' || strlen(str) == 0) {
        for (size_t i = 1; i < len; i++) {
            if (!isdigit(str[i])) {
                state = INCORRECT_VALUE;
                break;
            }
        }
    }
    return state;
}

void fromBinToAny(AppParams* params, Context* context){
    qDebug() << '3';
    char* decValue = conversationFromBinToDec(params->initial);
    if (context->boxTo == DEC){
        context->newValue = strdup(decValue);
    }
    else if (context->boxTo == OCT){
        context->newValue = conversationFromDecToOct(atoi(decValue));
    }
    free(decValue);
}

void fromOctToAny(AppParams* params, Context* context){
    char* decValue = conversationFromOctToDec(params);
    if (context->boxTo == DEC){
        context->newValue = strdup(decValue);
    }
    else if (context->boxTo == BIN){
        context->newValue = conversationFromDecToBin(atoi(decValue));
    }
    free(decValue);
}

void fromDecToAny(AppParams* params, Context* context){
    if (context->boxTo == BIN){
        char* binValue = conversationFromDecToBin(atoi(params->initial));
        context->newValue = binValue;
        free(binValue);
    } else if (context->boxTo == OCT) {
        char* octValue = conversationFromDecToOct(atoi(params->initial));
        context->newValue = strdup(octValue);
        free(octValue);
    }
}

char* conversationFromBinToDec(const char* binValue) {
    int temp = 0;
    char* decValue = allocateMemoryForDec();
    size_t length = strlen(binValue);
    for (size_t i = 0; i < length; i++) {
        if (binValue[length - 1 - i] == '1') {
            temp += pow(2, i);
        }
    }
    sprintf(decValue, "%d", temp);
    return decValue;
}

/////////////////////

char* conversationFromOctToDec(AppParams* params) {
    const char* oct = params->initial;
    int temp = 0;
    char* decValue = allocateMemoryForDec();
    int length = strlen(oct);
    for (int i = 0; i < length; i++) {
        temp = temp * EIGHT + (oct[i] - '0');
    }
    sprintf(decValue, "%d", temp);
    return decValue;
}

char* conversationFromDecToBin(int decValue) {
    char* binValue = allocateMemoryForBin();
    for (size_t i = 0; i < MAXBINLENGTH - 1; i++)
        binValue[i] = '0';
    binValue[MAXBINLENGTH - 1] = '\0';
    int tempDec = abs(decValue);
    for (int i = MAXBINLENGTH - TWO; i >= 0; i--)
    {
        binValue[i] = (tempDec % TWO) + '0';
        tempDec /= TWO;
    }
    if (decValue < 0)
        conversationFromNegDecToBin(binValue);
    return binValue;
}

char* conversationFromDecToOct(int decValue) {
    char* oct = allocateMemoryForOct();
    if (decValue > 0)
        sprintf(oct, "%o", decValue);
    else
    {
        //char* binValue = allocateMemoryForBin(); //
        char* binValue = conversationFromDecToBin(decValue);
        //char* decValueStr = allocateMemoryForDec();//
        char* decValueStr = conversationFromBinToDec(binValue);
        free(binValue);
        sprintf(oct, "%o", atoi(decValueStr));
        free(decValueStr);
    }
    return oct;
}

void conversationFromNegDecToBin(char* binValue)
{
    for (size_t i = 0; i < MAXBINLENGTH - 1; i++)
    {
        if (binValue[i] == '0')
            binValue[i] = '1';
        else
            binValue[i] = '0';
    }
    int carry = 1;
    for (size_t i = MAXBINLENGTH - TWO; i >= 0; i--)
    {
        if (carry == 1 && binValue[i] == '1')
            binValue[i] = '0';
        else if (carry == 1 && binValue[i] == '0')
        {
            binValue[i] = '1';
            break;
        }
    }
}
