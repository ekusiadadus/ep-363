#include<iostream>

using namespace std;

// unions can be anonymous(unnamed)
// only one member is active(alive) at a time
// you can only access the currently active member
// * any other access is undefined behavior

consteval auto use_union() {
    union U {
        int i;
        float f;
        double d;
    };

    U u;

    // size of the union is the largest element of itself
    return sizeof(U);
//    u.f = 4.2;
//    u.i = 42;
//    return u.i;
}

// union can be anonymous
int main() {
   [[maybe_unused]] constexpr auto v = use_union();
   std::cout << v << std::endl;
   return v;
}