#include <iostream>

// Swap fonksiyonu: iki elemanýn yerini deðiþtirir
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Partition fonksiyonu: diziyi pivot elemanýna göre böler ve pivot'un doðru konumunu belirler
int partition(int arr[], int low, int high) {
    // Pivot olarak dizinin sonundaki elemaný seç
    int pivot = arr[high];

    // Index of the smaller element
    int i = (low - 1);

    // Diziyi tarayarak pivot'tan küçük elemanlarý sol tarafa, büyük olanlarý sað tarafa yerleþtir
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }

    // Pivot'u doðru konuma yerleþtir
    swap(arr[i + 1], arr[high]);

    // Pivot'un yeni konumu
    return (i + 1);
}

// Quick Sort algoritmasý
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // Diziyi böl ve pivot'u bul
        int pivotIndex = partition(arr, low, high);

        // Her iki parçayý da ayrý ayrý sýrala
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

int main() {
    // Sýralanacak dizi
    int arr[] = { 64, 25, 12, 22, 11 };
    int n = sizeof(arr) / sizeof(arr[0]);

    // Quick Sort'u uygula
    quickSort(arr, 0, n - 1);

    // Sýralanmýþ diziyi ekrana yazdýr
    std::cout << "Sýralanmýþ dizi: \n";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
