# LCD1602<br>
data sheet https://www.sparkfun.com/datasheets/LCD/HD44780.pdf<br>
![image](https://user-images.githubusercontent.com/118428350/217688687-2aff19cd-9c2f-4c35-b815-93f16dfe1ec3.png)<Br>
1. Tập lệnh LCD cơ bản: <br>
![image](https://user-images.githubusercontent.com/118428350/217688798-c5c7a8a3-0684-4a8a-8b81-220550c9f501.png)<br>
2.Kết nối phần cứng: <br>
  a. Mode 8bits: <br>
  ![image](https://user-images.githubusercontent.com/118428350/217688963-80611a1d-34d4-48d7-b6b2-96a502eaa453.png)<br>
  b. Mode 4bits: <br> (tốc độ chậm hơn nhưng tốn ít chân hơn)<br>
3.Giao tiếp: <br>
  a. Mode 8bits: <br>
**Gửi lệnh ra LCD: <br>
  - RW=0 để chọn chế độ ghi
  - RS=0 để chọn ghi cmd
  - Gửi data vào D0:-7
  - Gửi 1 xung cạnh xuống vào chân E để ghi lệnh
  - Delay ......
            ![image](https://user-images.githubusercontent.com/118428350/217689461-1c858ec3-79de-422d-b42d-b75f64f364f6.png)<br>
**Gửi dữ liệu ra LCD: <br>
  - RW=0 để chọn chế độ ghi
  - RS=1 để chọn ghi data
  - Gửi data vào D0:-7
  - Gửi 1 xung cạnh xuống vào chân E để ghi lệnh
  - Delay ......
          ![image](https://user-images.githubusercontent.com/118428350/217689685-155be978-3c54-4cce-a338-0cd86d0abaff.png)<br>
**Khởi tạo LCD: <br>
  - Chọn chế độ 8/4 bits
  - Bật/tắt con trỏ
  - ...
    ![image](https://user-images.githubusercontent.com/118428350/217689933-b9c004e1-f499-4c7c-8a13-ef5b469a7f87.png)<br>



  


