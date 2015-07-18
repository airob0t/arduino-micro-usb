void setup() {//初始化，这里的代码只执行一次 

  Keyboard.begin();//开始键盘通讯 

  delay(3000);//延时 避免初始化对后面产生影响，不宜太短 

  Keyboard.press(KEY_LEFT_GUI);//按下win键 

  delay(500); 

  Keyboard.press('r');//按下r键 

  delay(500); 

  Keyboard.release(KEY_LEFT_GUI);//释放win键 

  Keyboard.release('r');//释放r键 

  delay(500); 

  Keyboard.println("cmd");//输入并回车 

  delay(1000); 

  Keyboard.println("echo wooyun"); 

  Keyboard.end();//结束键盘通讯 

} 

void loop()//循环，这里的代码无限循环 

{ 

//我这里的代码为空，就是什么也不执行 

//当然你可以随便写代码，但我只让它只执行一次，也可以把上面的代码放到下面，循环执 行，也可在上面加循环语句 

}