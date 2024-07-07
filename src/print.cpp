module;
#include <cstdio>

export module foo.print;

export void print(const char *msg) {
    printf("%s", msg);
}