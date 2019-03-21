#include <iostream>
#include <emscripten.h>
#include <emscripten/html5.h>
#include <emscripten/bind.h>

int main() {
//    emscripten_console_log("Log info");
//    emscripten_console_warn("Warn info");
//    emscripten_console_error("Error info");

    auto console = emscripten::val::global("console");
//    console.call<void>("error", std::string("Hello World"));
    console.call<void>("log", console);
    return 0;
}