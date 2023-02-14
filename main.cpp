#include<iostream>

using namespace std;


consteval auto use_union() {
    union U {
        int i;
        float f;
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