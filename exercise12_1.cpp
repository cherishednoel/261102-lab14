#include <iostream>

using namespace std;

template <typename Type>
void insert(const Type[], Type[], int, Type, int);

int main() {
    int N = 4;
    int x[] = {1, 4, 9, 7};
    int y[N+1], z[N+1];

    insert(x,y,N,69,2); //insert value 69 at index 2
    insert(x,z,N,77,0); //insert value 77 at index 0

    cout << "x = ";
    for(int i = 0; i < N;i++) cout << x[i] << " ";

    cout << "\ny = ";
    for(int i = 0; i < N+1;i++) cout << y[i] << " ";

    cout << "\nz = ";
    for(int i = 0; i < N+1;i++) cout << z[i] << " ";

    return 0;
}

template <typename Type>
void insert(const Type refArr[], Type insertArr[], int temp, Type insert, int index) {
    int refInd = 0;
    for (int i = 0; i < temp + 1; i++) {
        if (i == index) insertArray[i] = insert;
        else insertArray[i] = refArray[refInd++];
    }
}