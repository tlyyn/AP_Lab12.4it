#include <cassert>
#include "../AP_Lab12.4it/Source.cpp"


void test_countNegativeElements() {
    Elem* L = NULL;
    assert(countNegativeElements(L) == 0);

    insert(L, 1);
    assert(countNegativeElements(L) == 0);

    insert(L, -2);
    assert(countNegativeElements(L) == 1);

    insert(L, 3);
    assert(countNegativeElements(L) == 1);

    insert(L, -4);
    assert(countNegativeElements(L) == 2);

    insert(L, 5);
    assert(countNegativeElements(L) == 2);

    insert(L, 6);
    assert(countNegativeElements(L) == 2);
}

int main() {
    test_countNegativeElements();
    std::cout << "All tests passed." << std::endl;
    return 0;
}