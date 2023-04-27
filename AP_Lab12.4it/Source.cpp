#include <iostream>
#include <cstdlib>
#include <ctime>

    using namespace std;

struct Elem {
    Elem* link;
    int info;
};

void insert(Elem*& L, int value) {
    Elem* tmp = new Elem;
    tmp->info = value;
    if (L != NULL) {
        Elem* T = L;
        while (T->link != L)
            T = T->link;
        T->link = tmp;
    }
    else {
        L = tmp;
    }
    tmp->link = L;
}

void printList(Elem* L) {
    if (L == NULL) {
        cout << "Empty List" << endl;
        return;
    }
    Elem* T = L;
    do {
        cout << T->info << " ";
        T = T->link;
    } while (T != L);
    cout << endl;
}

int countNegativeElements(Elem* L) {
    int count = 0;
    if (L == NULL) {
        return count;
    }
    Elem* curr = L;
    do {
        if (curr->info < 0) {
            count++;
        }
        curr = curr->link;
    } while (curr != L);
    return count;
}


int main() {
    Elem* L = NULL;
    insert(L, 1);
    insert(L, -2);
    insert(L, 3);
    insert(L, -4);
    insert(L, 5);
    insert(L, 6);
    printList(L);
    int count = countNegativeElements(L);
    std::cout << "Number of negative elements: " << count << std::endl;
    while (L != NULL) {
        Elem* temp = L;
        L = L->link;
        delete temp;
    }
    return 0;
}

