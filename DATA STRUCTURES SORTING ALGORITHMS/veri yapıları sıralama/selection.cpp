/*#include <iostream>
using namespace std;

int main() {
    int i, enKucukId, length;

    // Diziyi tanýmlayýn ve boyutunu belirtin
    int arr[] = { 5, 2, 9, 1, 5, 6 };
    length = sizeof(arr) / sizeof(arr[0]);

    for (i = 0; i < length; i++) {  
        enKucukId = i;
        for (int j = i + 1; j < length; j++) {
            if (arr[j] < arr[enKucukId]) {
                enKucukId = j;
            }
        }

        // Swap iþlemi
        int temp = arr[i];
        arr[i] = arr[enKucukId];
        arr[enKucukId] = temp;
    }

    // Sýralanmýþ diziyi ekrana yazdýrýn
    cout << "Siralanmis dizi: ";
    for (i = 0; i < length; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
*/