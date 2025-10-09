#include <iostream>

//
// void doubleValue(const int& n) {
//     n *= 2;
// }

// void print_name(const std::string& name) {
//     std::cout << name << std::endl;
// }
//
//
// int& bigger(int& a, int& b) {
//     return (a > b) ? a : b;
// }

// void swap_values(int&a, int&b) {
//     int temp = a;
//     a = b;
//     b = temp;
// }

void normalize(std::vector<float>& v) {
    float sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += 0.10f;
        v[i] = sum;
    }
}
int& maxRef(int& a, int& b) {
    return a > b ? a : b;
}

int main() {

    std::vector<float> v(10);
    normalize(v);
    for (const float&value: v) {
        std::cout << value << std::endl;
    }

    int x = 5;
    int y = 9;
    std::cout << "x before: " << x << std::endl;
    std::cout << "y before: " << y << std::endl;

    maxRef(x,y) = 0;
    std::cout << "x: " << x << std::endl;
    std::cout << "y: " << y << std::endl;


    std::vector<std::string> names{"Larry", "Moe", "Curly"};

    for (auto name : names) {
        std::string full = "";
        std::string prefix = "Jr. ";
        full += prefix + name;
        std::cout << full << std::endl;
    }

    for (auto& name: names) {
        std::string full {};
        std::string prefix = "Jr. ";
        full += prefix + name;
        std::cout << full << std::endl;
    }







    // int x = 10;
    // int& ref = x;
    // ref = 20;
    // std::cout << ref << std::endl;
    // ref = 4;
    // std::cout << "ref" << ref << std::endl;
    // std::cout << "x "  << x << std::endl;
    // x = 50;
    // std::cout << "x: " << x << std::endl;
    // std::cout << "ref: " << ref << std::endl;
    //

    // int n = 10;
    // std::cout << n << std::endl;
    // doubleValue(n);
    // std::cout << n << std::endl;
    //

    // int x = 5;
    // int y = 8;
    // std::cout << "x = " << x << std::endl;
    // std::cout << "y = " << y << std::endl;
    //
    // bigger(x,y) = 42;
    // std::cout << "x = " << x << std::endl;
    // std::cout << "y = " << y << std::endl;
    //
    //

    // print_name("Hello World");
    //
    // std::vector<std::string> vec = {"Larry", "Moe", "Curly" };
    //
    // for (auto str : vec) {
    //     str = "Funny";
    //     std::cout << str << std::endl;
    // }

    // for (const auto& v : vec) {
    //     std::cout << v << std::endl;
    // }
    // const int& r1 = 10;
    // std::cout << r1 << std::endl;
    //

    // int x = 10, y =20;
    // std::cout << x << " " << y << std::endl;
    // swap_values(x, y);
    // std::cout << x << " " << y << std::endl;
    //

    return 0;
}