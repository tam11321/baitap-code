#include <stdio.h>
/* hàm kiem tra nam nhuan
   nam nhuan la nam chia het cho 4 và chia het cho 100 nhung khong chia het cho 400
 */
int kTraNamNhuan(int nam) {
  return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
}
/* ham kiem tra xem trong mot thang có bao nhieu ngay tu thang 1 den thang 12 */
int check(int thang, int nam) {
  switch (thang)
  {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
      return 31;
    case 4:
    case 6:
    case 9:
    case 11:
      return 30;
    case 2:
      //neu nam nhap vào la nam nhuan thi thang 2 se có 29 ngay
      if (kTraNamNhuan(nam))
        return 29;
      //nguoc lai neu không phai nam nhuan thi thang 2 se co 28 ngay
      else
        return 28;
    default:
      printf("So thang nhap vao khong hop le\n");
      break;
  }
}
int main() {
  int thang, nam;
  //su dung do..while do yêu cau nguoi dung nhap vào thang tu 1 den 12
  //neu nhap khac thi yeu cau nhap lai
  do {
    printf( "\nNhap thang ban can kiem tra: ");
    scanf("%d", &thang);
    printf("Nhap nam ban can kiem tra: ");
    scanf("%d",&nam);
  } while (nam < 0 || thang < 1 || thang >12);
  //sau khi nhap vào thì chi can goi ham check() dã viet de hien thi so ngày ra màn hình
  printf("So ngay trong thang la: %d \n", check(thang,nam));
 
  
}
