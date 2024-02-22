#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cout << "Nhap n: ";
  cin >> n;


  while (n <= 0 || n > 16) {
    cout << "Nhap lai n (0 < n <= 16): ";
    cin >> n;
  }
  vector<int> arr(n);

  for (int i = 0; i < n; i++) {
    cout << "Nhap gia tri cho phan tu thu " << i + 1 << ": ";
    cin >> arr[i];
  }
  cout << endl;
  cout  << "Gia tri cua cac phan tu: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
  cout << "Dia chi cua cac phan tu: ";
  for (int i = 0; i < n; i++) {
    cout << &arr[i] << " ";
  }

  return 0;
}
