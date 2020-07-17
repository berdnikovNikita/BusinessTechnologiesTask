#include <iostream>

void Merge(int* A, int p, int q, int r);
void Sort(int* A, int p, int r);

int main(){
    int size = 8;
    int A[] = {5, 2, 4, 6, 1, 3, 2, 6};

    std::cout << "Sorting predefined array:" << std::endl;

    Sort(A, 1, size);
    for (int i : A) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;

    return 0;
}

void Sort(int* A, int p, int r) {
    if (p < r) {
        int q = (p+r)/2;
        Sort(A, p, q);
        Sort(A, q + 1, r);
        Merge(A, p, q, r);
    }
}