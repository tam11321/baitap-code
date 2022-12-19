#include <stdio.h>
/* h�m kiem tra nam nhuan
   nam nhuan la nam chia het cho 4 v� chia het cho 100 nhung khong chia het cho 400
 */
int kTraNamNhuan(int nam) {
  return ((nam % 4 == 0 && nam % 100 != 0) || nam % 400 == 0);
}
/* ham kiem tra xem trong mot thang c� bao nhieu ngay tu thang 1 den thang 12 */
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
      //neu nam nhap v�o la nam nhuan thi thang 2 se c� 29 ngay
      if (kTraNamNhuan(nam))
        return 29;
      //nguoc lai neu kh�ng phai nam nhuan thi thang 2 se co 28 ngay
      else
        return 28;
    default:
      printf("So thang nhap vao khong hop le\n");
      break;
  }
}
int main() {
  int thang, nam;
  //su dung do..while do y�u cau nguoi dung nhap v�o thang tu 1 den 12
  //neu nhap khac thi yeu cau nhap lai
  do {
    printf( "\nNhap thang ban can kiem tra: ");
    scanf("%d", &thang);
    printf("Nhap nam ban can kiem tra: ");
    scanf("%d",&nam);
  } while (nam < 0 || thang < 1 || thang >12);
  //sau khi nhap v�o th� chi can goi ham check() d� viet de hien thi so ng�y ra m�n h�nh
  printf("So ngay trong thang la: %d \n", check(thang,nam));
 
  
}
