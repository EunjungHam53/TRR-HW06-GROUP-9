# Bài số 8 giải theo cách quy hoạch động

####
![alt](https://github.com/EunjungHam53/TRR-HW06-GROUP-9/blob/main/TRRB8.png)
#### Hình ví dụ về input n = 12

#### Ở đây ta sẽ setup 1 bảng quy hoạch động F[i][j] là số xâu nhị phân có độ dài là i và có j chữ số 1
#### Ta khởi tạo trường hợp cơ bản: 
- xâu có độ dài i và có 0 chữ số 1 thì sẽ duy nhất 1 số
- xâu độ dài 1 có 1 chữ số 1 thì có 1 số 
#### Bước tiếp theo là ta quy hoạch động
- ta có xâu độ dài F[i][j] được tạo thành từ F[i-1][j] và F[i-1][j-1] vì 2 xâu con độ dài i-1 vừa nêu thiếu 1 kí tự 0 (F[i-1][j-1]) hoặc kí tự 1 (F[i-1][j]) để tạo thành xâu mới có độ dài i (F[i][j])
#### Sau khi ta lập xong được bảng ta sẽ tiến hành tính tổng (sum) các số xâu mà thỏa mãn số chữ số 1 nhiều hơn số chữ số 0 tức là j >= n/2 + 1
#### Từ đó ta tính được biến sum như mong muốn bằng phương pháp quy hoạch động
#### Ở đây, ta cần chú ý đến cong thức quan trọng nhất:
## F[i][j] = F[i-1][j] + F[i-1][j-1]
