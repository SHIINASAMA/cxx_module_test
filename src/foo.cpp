export module foo;

import foo.print;

export class foo {
public:
    foo();
    ~foo();
    void hello();
};

foo::foo() = default;
foo::~foo() = default;
void foo::hello() {
    print("hello modules");
}