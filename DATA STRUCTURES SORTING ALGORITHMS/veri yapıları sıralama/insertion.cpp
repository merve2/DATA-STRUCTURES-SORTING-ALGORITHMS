#include <iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    // D��taki d�ng�, diziyi s�ral� hale getirir.
    for (i = 1; i < n; i++) {
        key = arr[i]; // �u anki eleman� key'e kaydediyoruz.
        j = i - 1; // �lk s�ral� b�lgedeki eleman�n indisini al�yoruz.

        // ��teki d�ng�, key'i do�ru konuma eklemek i�in kayd�rma i�lemini ger�ekle�tirir.
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j]; // Elemanlar� bir sa�a kayd�r.
            j = j - 1; // S�ral� b�lgedeki bir �nceki elemana ge�.
        }
        arr[j + 1] = key; // Do�ru konuma key'i ekle.
    }
}

int main() {
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    cout << "S�ralanm�� dizi: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // S�ralanm�� diziyi ekrana yazd�r.
    }

    return 0;
}
