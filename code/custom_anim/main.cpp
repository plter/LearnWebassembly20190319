#include <iostream>
#include <emscripten.h>
#include <emscripten/bind.h>

emscripten::val content = emscripten::val::null();

int top = 0;

void loopHandler() {
    top++;

    char buf[10];
    sprintf(buf, "%dpx", top);

    content["style"].set("top", std::string(buf));
}

int main() {
    content = emscripten::val::global("document").call<emscripten::val>("querySelector", std::string("#content"));
    emscripten_set_main_loop(loopHandler, 0, false);
    return 0;
}