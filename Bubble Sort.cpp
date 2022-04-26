#include <iostream>

using namespace std;

//Deklarasi fungsi voidbubble

void bubbleSort(int arr[], int n){
	
//Deklarasi variabel
  int i, j, tmp;
  
//looping sebanyak n dan looping variabel dikurang i dan 1
  for (i = 0; i < n; i++){
    for (j = 0; j < n - i - 1; j++){

//pengecekan fungsi, jiko tidak sesuai akan dilakukan penukaran variabel
      if (arr[j] > arr[j + 1]){
        tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}

int main(){
//deklarasi variabel
  int array[100], n, i, j;
  cout << "Masukkan banyak elemen: ";
  cin >> n;
  cout << "Masukkan nilai: \n";
  for (i = 0; i < n; i++){
    cin >> array[i];
  }
  bubbleSort(array, n);
  cout << "Hasil pengurutan sebagai berikut:\n";
  for (i = 0; i < n; i++){
    cout << array[i] << " ";
  }
  cout << "\n";
}
