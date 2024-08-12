#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    // Dýþtaki döngü, diziyi sýralý hale getirir.
    for (i = 1; i < n; i++) {
        key = arr[i]; // Þu anki elemaný key'e kaydediyoruz.
        j = i - 1; // Ýlk sýralý bölgedeki elemanýn indisini alýyoruz.

        // Ýçteki döngü, key'i doðru konuma eklemek için kaydýrma iþlemini gerçekleþtirir.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Elemanlarý bir saða kaydýr.
            j = j - 1; // Sýralý bölgedeki bir önceki elemana geç.
        }
        arr[j + 1] = key; // Doðru konuma key'i ekle.
    }
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "Sýralanmýþ dizi: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Sýralanmýþ diziyi ekrana yazdýr.
    }

    return 0;
}
