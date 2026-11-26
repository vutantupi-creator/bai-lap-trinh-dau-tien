#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Nhap so thu nhat: ";
    cin >> a;
    cout << "Nhap so thu hai: ";
    cin >> b;

    double tong = a + b;
    double trungBinh = tong / 2;

    cout << "Tong hai so la: " << tong << endl;
    cout << "Trung binh cong la: " << trungBinh << endl;

    return 0;
}
