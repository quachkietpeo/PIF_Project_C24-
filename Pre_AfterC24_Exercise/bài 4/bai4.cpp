
#include <iostream>
#include <vector>
#include <iomanip>

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

  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += arr[i];
  }

  double average = (double)sum / n;

  cout << endl<< "Gia tri trung binh cua mang: " << fixed << setprecision(3) << average << endl;

  return 0;
}
