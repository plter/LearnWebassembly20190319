#include <iostream>
#include <emscripten.h>
#include <string>

EM_JS(int ,show_alert,(int a,int b,const char* str),{
    alert(UTF8ToString(str));
    return a+b;
})

int main() {
    int result = show_alert(2,3,std::string("你好").c_str());
    printf("%d\n",result);
    return 0;
}