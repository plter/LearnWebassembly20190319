#include <iostream>
#include <emscripten.h>

int main() {
    emscripten_run_script("alert('Hello emscripten')");
    return 0;
}