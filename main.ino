void setup() {//��ʼ��������Ĵ���ִֻ��һ�� 

  Keyboard.begin();//��ʼ����ͨѶ 

  delay(3000);//��ʱ �����ʼ���Ժ������Ӱ�죬����̫�� 

  Keyboard.press(KEY_LEFT_GUI);//����win�� 

  delay(500); 

  Keyboard.press('r');//����r�� 

  delay(500); 

  Keyboard.release(KEY_LEFT_GUI);//�ͷ�win�� 

  Keyboard.release('r');//�ͷ�r�� 

  delay(500); 

  Keyboard.println("cmd");//���벢�س� 

  delay(1000); 

  Keyboard.println("echo wooyun"); 

  Keyboard.end();//��������ͨѶ 

} 

void loop()//ѭ��������Ĵ�������ѭ�� 

{ 

//������Ĵ���Ϊ�գ�����ʲôҲ��ִ�� 

//��Ȼ��������д���룬����ֻ����ִֻ��һ�Σ�Ҳ���԰�����Ĵ���ŵ����棬ѭ��ִ �У�Ҳ���������ѭ����� 

}