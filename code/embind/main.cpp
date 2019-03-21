#include <iostream>
#include <emscripten.h>
#include <emscripten/bind.h>


void printHello() {
    printf("Hello World\n");
}

EMSCRIPTEN_BINDINGS(main_module) {
    emscripten::function("printHello", &printHello);
}

int main() {
    EM_ASM(Module.printHello());
    return 0;
}