#include<iostream>

using namespace std;


consteval auto use_union() {
    union {
        int i;
        float f;
    };
    i = 42;
    return i;
}

// union can be anonymous
int main() {
   [[maybe_unused]] constexpr auto v = use_union();
}