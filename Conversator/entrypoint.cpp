#include "logic.h"
#include "entrypoint.h"

#include <qdebug.h>

void doOperation(Operations operations, Context* context, AppParams* params){
    switch(operations){
    case VALIDATION:
        validation(params, context);
        break;
    case CONVERT:
        convert(params, context);
        break;
    case SWAP:
        swap(params, context);
        break;
    case CLEAR:
        clear(context);
        break;
    }
}
