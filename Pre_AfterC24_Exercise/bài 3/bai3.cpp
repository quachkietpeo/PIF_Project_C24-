#include <iostream>
#include <vector>

using namespace std;

int main() {

  int n;
  do {
    cout << "Nhap n (5 < n <= 16): ";
    cin >> n;
  } while (n <= 5 || n > 16);

  vector<int> arr(n);


  for (int i = 0; i < n; i++) {
    cout << "Nhap gia tri cho phan tu thu " << i + 1 << ": ";
    cin >> arr[i];
  }


  int max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }


  int min = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] < min) {
      min = arr[i];
    }
  }


  cout << endl << "Phan tu lon nhat: " << max << endl;
  cout << "Phan tu be nhat: " << min << endl;

  return 0;
}

