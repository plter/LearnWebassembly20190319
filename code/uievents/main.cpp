#include <iostream>
#include <emscripten.h>
#include <emscripten/html5.h>


EM_BOOL btnClickedHandler(int eventType, const EmscriptenMouseEvent *mouseEvent, void *userData) {
    emscripten_console_log("Button clicked");
    return false;
}

int main() {
    emscripten_set_click_callback("btnclickme", nullptr, false, &btnClickedHandler);
    return 0;
}