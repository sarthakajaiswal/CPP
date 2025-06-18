#include <iostream>

const int gc_num = 100;

int main(void)
{
    const int lc_num = 200;
    int* ptr1 = 0;
    int* ptr2 = 0;

//    gc_num = 1000;
//    lc_num = 2000;
//
//    ptr1 = &gc_num;

    ptr2 = const_cast<int*>(&lc_num);
    std::cout << "Before *ptr=2000: (display via *ptr2): " << *ptr2 << std::endl;
    *ptr2 = 2000;
    std::cout << "After *ptr = 2000: (display via *ptr2): " << *ptr2 << std::endl;

    std::cout << "Before *ptr = 20000 (display via lc_num) : " << lc_num << std::endl;
    *ptr2 = 20000;
    std::cout << "After *ptr = 20000 (display via lc_num): " << lc_num << std::endl;
    std::cout << "After *ptr = 20000 (display via *ptr2): " << *ptr2 << std::endl;

    //----------

    static const int x = 3000;

    ptr1 = const_cast<int*>(&x);
    std::cout << "Before *ptr1 = 300 (display via *ptr1) : " << *ptr1 << std::endl;
    *ptr1 = 300; // seg fault
    std::cout << "After *ptr1 = 300 (display via *ptr1): " << *ptr1 << std::endl;
    std::cout << "After *ptr1 = 300 (display via x): " << x << std::endl;

    return 0;
}