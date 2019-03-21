#include <iostream>
#include <string>
#include <emscripten.h>
#include <emscripten/bind.h>

void cppCallback(unsigned long funcPointer, emscripten::val data) {
    ((void (*)(emscripten::val)) funcPointer)(data);
}

EMSCRIPTEN_BINDINGS(main_module) {
    emscripten::function("cppCallback", &cppCallback);
}


EM_JS(int, getResult, (), {
    return 5;
});

EM_JS(void, getResultDelay, (unsigned long callback), {
    setTimeout(function(){
        Module.cppCallback(callback, "Hello World");
    }, 2000);
});

void getResultDelayCallback(emscripten::val data) {
    if (data.isNumber()) {
        printf("%d\n", data.as<int>());
    } else if (data.isString()) {
        std::cout << data.as<std::string>() << "\n";
    } else {
        printf("Unsupported type\n");
    }
}


int main() {
//    auto result = getResult();
//
//    printf("%d\n", result);

    getResultDelay((unsigned long) (&getResultDelayCallback));
    return 0;
}