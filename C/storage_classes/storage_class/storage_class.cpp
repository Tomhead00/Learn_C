#include <stdio.h>

int main() {
    auto x = 5; // Khai báo biến cục bộ x tự xác định kiểu dữ liệu
    // register int count = 0;
    // Nó được sử dụng để gợi ý cho trình biên dịch rằng biến nên được lưu trữ trong thanh ghi (register) của CPU để tăng tốc độ truy cập. Ko đc sử dụng nữa
    static int countStatic = 12;
    countStatic++;
    printf("%d", countStatic);
    return 0;
}
