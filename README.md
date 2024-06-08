KG 카이로스 부트캠프 마지막 프로젝트에 쓰일 간단한 AGV 를 만들어 보았다

사용된 부품 : Rasberry pi 4B+, Arduino MEGA, 엔코더 모터, 18650 3.3v 배터리, 저렴한 웹켐
![image](https://github.com/kroker22/arduino/assets/156269847/65693795-6f9a-4a2d-a85a-3167f519c861)
![image](https://github.com/kroker22/arduino/assets/156269847/1e18de5d-2ae0-497a-b19e-aeda55425d40)
  
여러가지 문제점들이 많았지만 어떻게 만들어 졌는지 하나씩 써보려고한다. 

1-

여러가지 센서를 부착할 가능성이 있고, ROS 쓸 수 있다는 가정하에 rasbian 보다 Ubuntu 20.04를 설치하고자 했다.

라즈베리파이 OS를 설치할 때에, Ubuntu 20.04 Server 를 먼저 설치했다. 
( desktop 버전이 없어서, 라즈비안 버전 bookworm 에서는 ROS가 설치되지 않은 문제도 있었다.)

https://blog.naver.com/roboholic84/221701573539
위의 사이트를 참고하여 우분투를 설치 하였다.


2-

파이썬 설치, 필요한 개발 환경 만들기에서 Arduino IDE 2.0 을 설치하고자 했으나 안타깝게도 ARM64 에서는 1.0 version 만 설치가 가능했다.
  1) https://github.com/koendv/arduino-ide-raspberrypi
  2) https://forum.arduino.cc/t/install-2-2-on-rasberry-pi-4-raspberry-pi-64bit-os/1034417

관련 링크이다. 설치가 가능은 하다고 나왔는데 나와있는 대로 따라해도 라즈베리파이 우분투에 설치가 제대로 되지 않았다.
해서,

VSCODE 에 arduino ide 를 설치하여 개발을 하고자 했다.

![image](https://github.com/kroker22/arduino/assets/156269847/874a290a-67bb-4a83-94a6-14d77da69ab5)

개발 과정에서  include path 문제가 생겨서 
https://ttuk-ttak.tistory.com/31

위의 링크들을 참고해서 include path 문제를 해결 하였다.
