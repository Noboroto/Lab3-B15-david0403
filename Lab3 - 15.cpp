#include <iostream>
#include <iomanip> //để sử dụng setprecision

//BÀI 15 LAB 3 - LOOP

int main ()
{
    float x = -1;
    float min = 3,  max = -1;

    while (x != 0)
    {
        std::cout << "Nhap vao chieu cao: ";
        std::cin >> x;
        if (x == 0) break;
        if (x > max) max = x;
        if (x < min) min = x;
    }

    std::cout << std::fixed << std::setprecision(2); //làm tròn đến chữ số thập phân tứ 2
    std::cout << "Chieu cao cua hoc sinh dung dau danh sach: " << min << " (m)\n";
    std::cout << "Chieu cao cua hoc sinh dung cuoi danh sach: " << max << " (m)\n";

    system("pause");
    return 0;
}