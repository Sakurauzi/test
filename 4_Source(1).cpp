#include <iostream>
using namespace std;

int main()
{
    int arr[9] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int* p1 = arr;
    int* p2 = &arr[8];
    cout << p1 << " " << p2 << endl;
    while (p1 != p2) {
        p1++;
        p2--;
    }
    cout << *p1;
    return 0;
}
