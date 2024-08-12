#include <iostream>

void merge(int arr[], int left, int mid, int right) {
    // Parçalarýn uzunluklarýný bul
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Geçici dinamik diziler oluþtur
    int* L = new int[n1];
    int* R = new int[n2];

    // Sol parçayý L dizisine kopyala
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];

    // Sað parçayý R dizisine kopyala
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Birleþtirme iþlemi
    int i = 0; // Sol parçadaki indis
    int j = 0; // Sað parçadaki indis
    int k = left; // Birleþtirilmiþ dizideki indis

    while (i < n1 && j < n2) {
        // Küçük olan elemaný birleþtirilmiþ diziyi ekleyerek belirle
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

    // Geriye kalan elemanlarý ekle
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

    // Dinamik belleði serbest býrak
    delete[] L;
    delete[] R;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // Diziyi ikiye böl
        int mid = left + (right - left) / 2;

        // Her iki parçayý sýrala
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // Sýralý parçalarý birleþtir
        merge(arr, left, mid, right);
    }
}

int main() {
    // Sýralanacak dizi
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Merge Sort'u uygula
    mergeSort(arr, 0, n - 1);

    // Sýralanmýþ diziyi ekrana yazdýr
    std::cout << "Sýralanmýþ dizi: \n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
