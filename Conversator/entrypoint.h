#ifndef ENTRYPOINT_H
#define ENTRYPOINT_H

enum Operations{
    CONVERT,
    SWAP,
    CLEAR,
    VALIDATION
};

enum Status{
    CORRECT,
    INCORRECT_LENGTH,
    INCORRECT_VALUE,
    NO_INPUT
}typedef Status;

enum{
    BIN = 0,
    OCT = 1,
    DEC = 2
};

enum{
    TWO = 2,
    EIGHT = 8,
    TEN = 10
};

enum{
    MAXBINLENGTH = 33,
    MAXOCTLENGTH = 12,
    MAXDECLENGTH = 11,
};

struct AppParams{
    const char* initial;
};

struct Context{
    int boxFrom;
    int boxTo;
    const char* newValue;
    enum Status status;
};

void doOperation(Operations operations, Context* context, AppParams* initial);

#endif // ENTRYPOINT_H
