#include <iostream>
#include <string>
#include <emscripten.h>
#include <emscripten/bind.h>

int main() {
    auto document = emscripten::val::global("document");
    auto body = document["body"];
    body.set("innerHTML", std::string("<div>Hello World</div>"));
    body["style"].set("color", std::string("red"));
    return 0;
}
