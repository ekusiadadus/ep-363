#include<iostream>

using namespace std;

// unions can be anonymous(unnamed)
// only one member is active(alive) at a time
// you can only access the currently active member
// * any other access is undefined behavior
// No member is the default member
// Unions can have constructors and destrucotrs in C++11

consteval auto use_union() {
    union U {
//        int i;
//        float f;
//        double d;
        U() {}
        ~U(){
            s.std::string::~string();
        }

        std::string s;
    };

    U u;
    u.s = std::string();
    std::construct_at(&u.s, "Hello, World Long String!");

    // size of the union is the largest element of itself
//    return sizeof(U);
//    u.f = 4.2;
//    u.i = 42;
    return u.s.size();
}

// union can be anonymous
int main() {
   [[maybe_unused]] constexpr auto v = use_union();
   std::cout << v << std::endl;
   return v;
}