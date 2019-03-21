#include <iostream>
#include <emscripten.h>

int main() {
    EM_ASM(
//            FS.writeFile("/data.txt", "Hello World");
        FS.mkdir("/node_data");
        FS.mount(NODEFS,{root:"."},"/node_data");
    );

//    auto fp = fopen("/node_data/data.txt", "w");
//    fprintf(fp, "Hello C++");
//    fclose(fp);

    auto fp = fopen("/node_data/data.txt", "r");
    if (fp) {
        char buf[20];
        fread(buf, 1, 20, fp);
        fclose(fp);

        printf("%s\n", buf);
    } else {
        printf("File not found\n");
    }

    return 0;
}