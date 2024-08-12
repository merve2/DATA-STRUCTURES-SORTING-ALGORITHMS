#include <iostream>

void merge(int arr[], int left, int mid, int right) {
    // Par�alar�n uzunluklar�n� bul
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Ge�ici dinamik diziler olu�tur
    int* L = new int[n1];
    int* R = new int[n2];

    // Sol par�ay� L dizisine kopyala
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    // Sa� par�ay� R dizisine kopyala
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Birle�tirme i�lemi
    int i = 0; // Sol par�adaki indis
    int j = 0; // Sa� par�adaki indis
    int k = left; // Birle�tirilmi� dizideki indis

    while (i < n1 && j < n2) {
        // K���k olan eleman� birle�tirilmi� diziyi ekleyerek belirle
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Geriye kalan elemanlar� ekle
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }

    // Dinamik belle�i serbest b�rak
    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Diziyi ikiye b�l
        int mid = left + (right - left) / 2;

        // Her iki par�ay� s�rala
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // S�ral� par�alar� birle�tir
        merge(arr, left, mid, right);
    }
}

int main() {
    // S�ralanacak dizi
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Merge Sort'u uygula
    mergeSort(arr, 0, n - 1);

    // S�ralanm�� diziyi ekrana yazd�r
    std::cout << "S�ralanm�� dizi: \n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
