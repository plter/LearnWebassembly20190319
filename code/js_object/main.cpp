#include <iostream>
#include <emscripten/bind.h>

int main() {

    auto alert = emscripten::val::global("alert");

    alert(std::string("Hello World 你好"));
    return 0;
}