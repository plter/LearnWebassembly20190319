#include <iostream>
#include <emscripten.h>

int main() {
    EM_ASM(alert("Hello wasm" + ($0 + $1 + $2)), 1, 3, 5);
    return 0;
}