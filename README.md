KG 카이로스 부트캠프 마지막 프로젝트에 쓰일 간단한 AGV 를 만들어 보았다

사용된 부품 : Rasberry pi 4B+, Arduino MEGA, 엔코더 모터, 18650 3.3v 배터리, 저렴한 웹켐
![image](https://github.com/kroker22/arduino/assets/156269847/65693795-6f9a-4a2d-a85a-3167f519c861)
![image](https://github.com/kroker22/arduino/assets/156269847/1e18de5d-2ae0-497a-b19e-aeda55425d40)


여러가지 문제점들이 많았지만 어떻게 만들어 졌는지 하나씩 써보려고한다. 


첫번째로 여러가지 센서를 부착할 가능성이 있고, ROS 쓸 수 있다는 가정하에 rasbian 보다 Ubuntu 20.04를 설치하고자 했다.

라즈베리파이 OS를 설치할 때에, Ubuntu 20.04 Server 를 먼저 설치했다. ( desktop 버전이 없어서, 라즈비안 버전 bookworm 에서는 ROS가 설치되지 않은 문제도 있었다.)
