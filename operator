1. Hàm bạn, lớp bạn
   Hàm bạn không thuộc về class.
   Thông thường hàm bạn có tham số truyền vào là một object.
   Khai báo private hay public đều được.
   Hàm bạn không thể truy cập các thuộc tính của bạn mình một cách trực tiếp mà phải thông qua object là parameter của hàm bạn.
   Phương thức của một class có thể là hàm bạn của một class khác. VD:
   Class X có function là bạn của class Y --> X có thể truy cập đến mọi thuộc tính của Y.
   Lớp bạn: class X là bạn của class Z --> X có thể truy cập đến các thuộc tính của Z.
   Một class có thể có nhiều hàm bạn, và một hàm có thể là hàm bạn của nhiều class.

2. Nạp chồng toán tử:
   Có 3 cách sử dụng: member function, non-member function, friend function
   Example:
   //declarce
   PhanSo operator+(PhanSo ps);
   friend PhanSo operator*(PhanSo ps1, PhanSo ps2);
   //define
   PhanSo operator*(PhanSo ps1, PhanSo ps2) {
       PhanSo tmp;
       tmp.TuSo = ps1.TuSo*ps2.TuSo;
       tmp.MauSo = ps1.MauSo*ps2.MauSo;
       return tmp;
   }
