#ifndef LOGIC_H
#define LOGIC_H

#include "entrypoint.h"

void convert(AppParams* params, Context* context);
void clear(Context* context);
void swap(AppParams* params, Context* context);
void validation(AppParams* params, Context* context);
enum Status isBinaryValidation(AppParams* params);
enum Status isOctalValidation(AppParams* params);
enum Status isDecimalValidation(AppParams* params);
void fromBinToAny(AppParams* params, Context* context);
void fromOctToAny(AppParams* params, Context* context);
void fromDecToAny(AppParams* params, Context* context);
char* conversationFromBinToDec(const char* binValue);
char* conversationFromOctToDec(AppParams* params);
char* conversationFromDecToBin(int decValue);
char* conversationFromDecToOct(int decValue);
void conversationFromNegDecToBin(char* binValue);
int isBin(const char* str);
int isOctal(const char* str);
int isDec(const char* str);

#endif // LOGIC_H
