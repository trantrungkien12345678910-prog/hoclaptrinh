#include <iostream>
using namespace std;

int main() 
{
    // ĐÂY CHÍNH LÀ CHỖ BẠN DÙNG CHÚNG NÈ:
    int khoa = 68;             // Lấy hộp int để chứa số nguyên (ví dụ khóa 68 của bạn)
    float diem_toan = 8.5;     // Lấy hộp float để chứa số thực (có dấu phẩy thập phân)
    char xep_loai = 'A';       // Lấy hộp char để chứa đúng 1 ký tự (bắt buộc kẹp nháy đơn)
    
    // Tạo hộp và cất dữ liệu xong, giờ dùng lệnh cout để in đồ trong hộp ra màn hình:
    cout << "Chao tan sinh vien khoa " << khoa << "!" << endl;
    cout << "Diem Toan cua ban la: " << diem_toan << endl;
    cout << "Ban dat xep loai: " << xep_loai << endl;

    return 0;
}