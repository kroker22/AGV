
// volatile int pulseCounterA;
// volatile int pulseCounterB;
// volatile int pulseCounterC;
// volatile int pulseCounterD;

// unsigned long lastMeasurement;

// #define PWMA 12    //A电机转速 --> PB6
// #define DIRA1 34  // --> PC3 
// #define DIRA2 35  //A电机方向 --> PC2
// const int enc_motorAA = 18;
// const int enc_motorAB = 31;

// //ENCODER_A 19
// //ENCODER_B 38
// #define PWMB 8    //B电机转速 
// #define DIRB1 37 
// #define DIRB2 36  //B电机方向
// const int enc_motorBA = 19;
// const int enc_motorBB = 36;


// //ENCODER_A 3
// //ENCODER_B 49
// #define PWMC 6   //C电机转速  pin 9 change pin 6
// #define DIRC1 43 
// #define DIRC2 42  //C电机方向
// const int enc_motorCA = 3;
// const int enc_motorCB = 49;


// //ENCODER_A 2
// //ENCODER_B 23
// #define PWMD 5    //D电机转速
// #define DIRD1 A4  //26  
// #define DIRD2 A5  //27  //D电机方向
// const int enc_motorDA = 2;
// const int enc_motorDB = 23;


// // MOTORA --> 뾰족하게 나온 기준 11시로
// // 7시방향 모터
// #define MOTORA_FORWARD(pwm)    do{digitalWrite(DIRA1,LOW); digitalWrite(DIRA2,HIGH);analogWrite(PWMA,pwm);}while(0)
// #define MOTORA_STOP(x)         do{digitalWrite(DIRA1,LOW); digitalWrite(DIRA2,LOW); analogWrite(PWMA,0);}while(0)
// #define MOTORA_BACKOFF(pwm)    do{digitalWrite(DIRA1,HIGH);digitalWrite(DIRA2,LOW); analogWrite(PWMA,pwm);}while(0)

// // 이부분은 모터 앞으로 가는 방향으로 맞추기 위해서 HIGH, LOW 순서를 바꿨음 MOTORB --> 뾰족하게 나온 기준 12시로
// // 1시방향 모터
// #define MOTORB_FORWARD(pwm)    do{digitalWrite(DIRB1,HIGH); digitalWrite(DIRB2,LOW);analogWrite(PWMB,pwm);}while(0)
// #define MOTORB_STOP(x)         do{digitalWrite(DIRB1,LOW); digitalWrite(DIRB2,LOW); analogWrite(PWMB,0);}while(0)
// #define MOTORB_BACKOFF(pwm)    do{digitalWrite(DIRB1,LOW);digitalWrite(DIRB2,HIGH); analogWrite(PWMB,pwm);}while(0)



// // MOTORC --> 뾰족하게 나온 기준 12시로
// // 7시방향 모터
// #define MOTORC_FORWARD(pwm)    do{digitalWrite(DIRC1,LOW); digitalWrite(DIRC2,HIGH);analogWrite(PWMC,pwm);}while(0)
// #define MOTORC_STOP(x)         do{digitalWrite(DIRC1,LOW); digitalWrite(DIRC2,LOW); analogWrite(PWMC,0);}while(0)
// #define MOTORC_BACKOFF(pwm)    do{digitalWrite(DIRC1,HIGH);digitalWrite(DIRC2,LOW); analogWrite(PWMC,pwm);}while(0)

// // 이부분은 모터 앞으로 가는 방향으로 맞추기 위해서 HIGH, LOW 순서를 바꿨음 MOTORD --> 뾰족하게 나온 기준 12시로
// // 5시방향 모터
// #define MOTORD_FORWARD(pwm)    do{digitalWrite(DIRD1,HIGH); digitalWrite(DIRD2,LOW);analogWrite(PWMD,pwm);}while(0)
// #define MOTORD_STOP(x)         do{digitalWrite(DIRD1,LOW); digitalWrite(DIRD2,LOW); analogWrite(PWMD,0);}while(0)
// #define MOTORD_BACKOFF(pwm)    do{digitalWrite(DIRD1,LOW);digitalWrite(DIRD2,HIGH); analogWrite(PWMD,pwm);}while(0)

// #define SERIAL  Serial

// #define LOG_DEBUG

// #ifdef LOG_DEBUG
// #define M_LOG SERIAL.print
// #else
// #define M_LOG 
// #endif

// #define MAX_PWM   200
// #define MIN_PWM   100
// int Motor_PWM = 50;


// // Encoder encoderA(18, 31);
// // Encoder encoderB(19, 38);
// // Encoder encoderC(3, 49);
// // Encoder encoderD(2, 23);

// //控制电机运动    宏定义

// //    ↑A-----B↑   
// //     |  ↑  |
// //     |  |  |
// //    ↑C-----D↑
// void ADVANCE()
// {
//   MOTORA_FORWARD(Motor_PWM);MOTORB_FORWARD(Motor_PWM);    
//   MOTORC_FORWARD(Motor_PWM);MOTORD_FORWARD(Motor_PWM);    
//   _delay_ms(500);
// }

// //    ↓A-----B↓   
// //     |  |  |
// //     |  ↓  |
// //    ↓C-----D↓
// void BACK()
// {
//   MOTORA_BACKOFF(Motor_PWM);MOTORB_BACKOFF(Motor_PWM);
//   MOTORC_BACKOFF(Motor_PWM);MOTORD_BACKOFF(Motor_PWM);

// }
// //    =A-----B↑   
// //     |   ↖ |
// //     | ↖   |
// //    ↑C-----D=
// void LEFT_1()
// {
//   MOTORA_STOP(Motor_PWM);MOTORB_FORWARD(Motor_PWM);
//   MOTORC_FORWARD(Motor_PWM);MOTORD_STOP(Motor_PWM);

// }

// //    ↓A-----B↑   
// //     |  ←  |
// //     |  ←  |
// //    ↑C-----D↓
// void LEFT_2()
// {
//   MOTORA_BACKOFF(Motor_PWM);MOTORB_FORWARD(Motor_PWM);
//   MOTORC_FORWARD(Motor_PWM);MOTORD_BACKOFF(Motor_PWM);

// }
// //    ↓A-----B=   
// //     | ↙   |
// //     |   ↙ |
// //    =C-----D↓
// void LEFT_3()
// {
//   MOTORA_BACKOFF(Motor_PWM);MOTORB_STOP(Motor_PWM);
//   MOTORC_STOP(Motor_PWM);MOTORD_BACKOFF(Motor_PWM);

// }
// //    ↑A-----B=   
// //     | ↗   |
// //     |   ↗ |
// //    =C-----D↑
// void RIGHT_1()
// {
//   MOTORA_FORWARD(Motor_PWM);MOTORB_STOP(Motor_PWM);
//   MOTORC_STOP(Motor_PWM);MOTORD_FORWARD(Motor_PWM);

// }
// //    ↑A-----B↓   
// //     |  →  |
// //     |  →  |
// //    ↓C-----D↑
// void RIGHT_2()
// {
//   MOTORA_FORWARD(Motor_PWM);MOTORB_BACKOFF(Motor_PWM);
//   MOTORC_BACKOFF(Motor_PWM);MOTORD_FORWARD(Motor_PWM);

// }
// //    =A-----B↓   
// //     |   ↘ |
// //     | ↘   |
// //    ↓C-----D=
// void RIGHT_3()
// {
//   MOTORA_STOP(Motor_PWM);MOTORB_BACKOFF(Motor_PWM);
//   MOTORC_BACKOFF(Motor_PWM);MOTORD_STOP(Motor_PWM);

// }
// //    =A-----B=  
// //     |  =  |
// //     |  =  |
// //    =C-----D=
// void STOP()
// {
//   MOTORA_STOP(Motor_PWM);MOTORB_STOP(Motor_PWM);
//   MOTORC_STOP(Motor_PWM);MOTORD_STOP(Motor_PWM);
// }
// void UART_Control()
// {
//   char Uart_Date=0;
//  if(Serial.available())
//   {
//    Uart_Date = SERIAL.read();

//   }
//   switch(Uart_Date)
//   {
//      case 'A':  ADVANCE(); M_LOG("Run!\r\n");        break;
//      case 'B':  RIGHT_1();  M_LOG("Right up!\r\n");     break;
//      case 'C':  RIGHT_2();  M_LOG("Right!\r\n");        break;
//      case 'D':  RIGHT_3();  M_LOG("Right down!\r\n");   break;
//      case 'E':  BACK();     M_LOG("Run!\r\n");        break;
//      case 'F':  LEFT_3();   M_LOG("Left down!\r\n");    break;
//      case 'G':  LEFT_2();   M_LOG("Left!\r\n");       break;
//      case 'H':  LEFT_1();   M_LOG("Left up!\r\n");  break;
//      case 'Z':  STOP();     M_LOG("Stop!\r\n");       break;
//      case 'L':  Motor_PWM = 150;                      break;
//      case 'M':  Motor_PWM = 100;                       break;
//    }
//    // 내가 생각하기엔 여기에 버퍼 초기화 들어가야함(?)
//    // gpt 한테 물어보기
  
// }
// void IO_init()
// {
//   pinMode(PWMA, OUTPUT);
//   pinMode(DIRA1, OUTPUT);pinMode(DIRA2, OUTPUT);
//   pinMode(PWMB, OUTPUT);
//   pinMode(DIRB1, OUTPUT);pinMode(DIRB2, OUTPUT);
//   pinMode(PWMC, OUTPUT);
//   pinMode(DIRC1, OUTPUT);pinMode(DIRC2, OUTPUT);
//   pinMode(PWMD, OUTPUT);
//   pinMode(DIRD1, OUTPUT);pinMode(DIRD2, OUTPUT);
//   // encoder pin setup
//   pinMode(enc_motorAA, INPUT);pinMode(enc_motorAB, INPUT); // MOTORA
//   pinMode(enc_motorBA, INPUT);pinMode(enc_motorBB, INPUT); // MOTORB
//   pinMode(enc_motorCA, INPUT);pinMode(enc_motorCB, INPUT); // MOTORC
//   pinMode(enc_motorDA, INPUT);pinMode(enc_motorDB, INPUT); // MOTORD
//   attachInterrupt(digitalPinToInterrupt(enc_motorAA), countPulseA, RISING);
//   attachInterrupt(digitalPinToInterrupt(enc_motorBA), countPulseB, RISING);
//   attachInterrupt(digitalPinToInterrupt(enc_motorCA), countPulseC, RISING);
//   attachInterrupt(digitalPinToInterrupt(enc_motorDA), countPulseD, RISING);

//   pulseCounterA = 0;
//   pulseCounterB = 0;
//   pulseCounterC = 0;
//   pulseCounterD = 0;

//   lastMeasurement = millis();
//   // pinMode(18, INPUT); pinMode(31, INPUT);//MOTORA 
//   // pinMode(19, INPUT); pinMode(38, INPUT);//MOTORB
//   // pinMode(3,  INPUT); pinMode(49, INPUT);//MOTORC
//   // pinMode(2,  INPUT); pinMode(23, INPUT);//MOTORD

//   STOP();
// }
// void setup()
// {

//   Serial.begin(9600);
//   IO_init();
  
// //  SERIAL.print("Start");
// }

// void loop()
// {

//   UART_Control();//串口接收处理 
//   //CAR_Control();//小车控制
//   unsigned long currentMillis = millis();
//   if(currentMillis - lastMeasurement >= 300)
//   {
//     noInterrupts();
//     int countA = pulseCounterA;
//     int countB = pulseCounterB;
//     int countC = pulseCounterC;
//     int countD = pulseCounterD;

//     pulseCounterA = 0;
//     pulseCounterB = 0;
//     pulseCounterC = 0;
//     pulseCounterD = 0;

//     interrupts();

//     float speedA = (float)countA / 5.0;
//     float speedB = (float)countB / 5.0;
//     float speedC = (float)countC / 5.0;
//     float speedD = (float)countD / 5.0;
//     Serial.print("Speed_A : " );
//     Serial.print(speedA, 2);
//     Serial.print("Speed_B : " );
//     Serial.print(speedB, 2);
//     Serial.print("Speed_C : ");
//     Serial.print(speedC, 2);
//     Serial.print("Speed_D : ");
//     Serial.print(speedD, 2);
//     Serial.println(" ");
//     lastMeasurement = currentMillis;
//   }
  
//   Serial.end();
//   delay(10);
//   Serial.begin(9600);

// }
// // void resetSerial()
// // {
// //   Serial.end();       // 시리얼 통신 종료
// //   delay(10);          // 잠시 대기
// //   Serial.begin(9600); // 시리얼 통신 다시 시작
// // }


// void countPulseA()
// {
//   if(digitalRead(enc_motorAB) == HIGH)
//   {
//    pulseCounterA ++;
//   }
//   else {
//     pulseCounterA --;
//   }
// }
// void countPulseB()
// {
//   if(digitalRead(enc_motorBB) == HIGH)
//   {
//    pulseCounterB ++;
//   }
//   else {
//     pulseCounterB --;
//   }
// }

// void countPulseC()
// {
//   if(digitalRead(enc_motorCB) == HIGH)
//   {
//    pulseCounterC ++;
//   }
//   else {
//     pulseCounterC --;
//   }
// }
// void countPulseD()
// {
//   if(digitalRead(enc_motorDB) == HIGH)
//   {
//    pulseCounterD ++;
//   }
//   else {
//     pulseCounterD --;
//   }
// }


// volatile int pulseCounterA;
// volatile int pulseCounterB;
// volatile int pulseCounterC;
// volatile int pulseCounterD;

// unsigned long lastMeasurement;

// #define PWMA 12    //A motor speed 
// #define DIRA1 34  // A motor direction
// #define DIRA2 35  
// const int enc_motorAA = 18;
// const int enc_motorAB = 31;

// #define PWMB 8    //B motor speed 
// #define DIRB1 37 
// #define DIRB2 36  
// const int enc_motorBA = 19;
// const int enc_motorBB = 36;

// #define PWMC 6   //C motor speed  
// #define DIRC1 43 
// #define DIRC2 42  
// const int enc_motorCA = 3;
// const int enc_motorCB = 49;

// #define PWMD 5    //D motor speed
// #define DIRD1 A4  
// #define DIRD2 A5  
// const int enc_motorDA = 2;
// const int enc_motorDB = 23;

// #define MOTORA_FORWARD(pwm)    do{digitalWrite(DIRA1,LOW); digitalWrite(DIRA2,HIGH);analogWrite(PWMA,pwm);}while(0)
// #define MOTORA_STOP()          do{digitalWrite(DIRA1,LOW); digitalWrite(DIRA2,LOW); analogWrite(PWMA,0);}while(0)
// #define MOTORA_BACKOFF(pwm)    do{digitalWrite(DIRA1,HIGH);digitalWrite(DIRA2,LOW); analogWrite(PWMA,pwm);}while(0)

// #define MOTORB_FORWARD(pwm)    do{digitalWrite(DIRB1,HIGH); digitalWrite(DIRB2,LOW);analogWrite(PWMB,pwm);}while(0)
// #define MOTORB_STOP()          do{digitalWrite(DIRB1,LOW); digitalWrite(DIRB2,LOW); analogWrite(PWMB,0);}while(0)
// #define MOTORB_BACKOFF(pwm)    do{digitalWrite(DIRB1,LOW);digitalWrite(DIRB2,HIGH); analogWrite(PWMB,pwm);}while(0)

// #define MOTORC_FORWARD(pwm)    do{digitalWrite(DIRC1,LOW); digitalWrite(DIRC2,HIGH);analogWrite(PWMC,pwm);}while(0)
// #define MOTORC_STOP()          do{digitalWrite(DIRC1,LOW); digitalWrite(DIRC2,LOW); analogWrite(PWMC,0);}while(0)
// #define MOTORC_BACKOFF(pwm)    do{digitalWrite(DIRC1,HIGH);digitalWrite(DIRC2,LOW); analogWrite(PWMC,pwm);}while(0)

// #define MOTORD_FORWARD(pwm)    do{digitalWrite(DIRD1,HIGH); digitalWrite(DIRD2,LOW);analogWrite(PWMD,pwm);}while(0)
// #define MOTORD_STOP()          do{digitalWrite(DIRD1,LOW); digitalWrite(DIRD2,LOW); analogWrite(PWMD,0);}while(0)
// #define MOTORD_BACKOFF(pwm)    do{digitalWrite(DIRD1,LOW);digitalWrite(DIRD2,HIGH); analogWrite(PWMD,pwm);}while(0)

// #define SERIAL  Serial

// #define LOG_DEBUG

// #ifdef LOG_DEBUG
// #define M_LOG SERIAL.print
// #else
// #define M_LOG 
// #endif

// #define MAX_PWM   200
// #define MIN_PWM   100
// int Motor_PWM = 150;

// char serialBuffer[64];
// int serialBufferIndex = 0;

// void ADVANCE()
// {
//   MOTORA_FORWARD(Motor_PWM);MOTORB_FORWARD(Motor_PWM);    
//   MOTORC_FORWARD(Motor_PWM);MOTORD_FORWARD(Motor_PWM);    
// }

// void BACK()
// {
//   MOTORA_BACKOFF(Motor_PWM);MOTORB_BACKOFF(Motor_PWM);
//   MOTORC_BACKOFF(Motor_PWM);MOTORD_BACKOFF(Motor_PWM);
// }

// void LEFT_1()
// {
//   MOTORA_STOP();MOTORB_FORWARD(Motor_PWM);
//   MOTORC_FORWARD(Motor_PWM);MOTORD_STOP();
// }

// void LEFT_2()
// {
//   MOTORA_BACKOFF(Motor_PWM);MOTORB_FORWARD(Motor_PWM);
//   MOTORC_FORWARD(Motor_PWM);MOTORD_BACKOFF(Motor_PWM);
// }

// void LEFT_3()
// {
//   MOTORA_BACKOFF(Motor_PWM);MOTORB_STOP();
//   MOTORC_STOP();MOTORD_BACKOFF(Motor_PWM);
// }

// void RIGHT_1()
// {
//   MOTORA_FORWARD(Motor_PWM);MOTORB_STOP();
//   MOTORC_STOP();MOTORD_FORWARD(Motor_PWM);
// }

// void RIGHT_2()
// {
//   MOTORA_FORWARD(Motor_PWM);MOTORB_BACKOFF(Motor_PWM);
//   MOTORC_BACKOFF(Motor_PWM);MOTORD_FORWARD(Motor_PWM);
// }

// void RIGHT_3()
// {
//   MOTORA_STOP();MOTORB_BACKOFF(Motor_PWM);
//   MOTORC_BACKOFF(Motor_PWM);MOTORD_STOP();
// }

// void STOP()
// {
//   MOTORA_STOP();MOTORB_STOP();
//   MOTORC_STOP();MOTORD_STOP();
// }

// void processCommand(char command)
// {
//   switch(command)
//   {
//     case 'A':  ADVANCE(); M_LOG("Run!\r\n");        break;
//     case 'B':  RIGHT_1();  M_LOG("Right up!\r\n");     break;
//     case 'C':  RIGHT_2();  M_LOG("Right!\r\n");        break;
//     case 'D':  RIGHT_3();  M_LOG("Right down!\r\n");   break;
//     case 'E':  BACK();     M_LOG("Run!\r\n");        break;
//     case 'F':  LEFT_3();   M_LOG("Left down!\r\n");    break;
//     case 'G':  LEFT_2();   M_LOG("Left!\r\n");       break;
//     case 'H':  LEFT_1();   M_LOG("Left up!\r\n");  break;
//     case 'Z':  STOP();     M_LOG("Stop!\r\n");       break;
//     case 'L':  Motor_PWM = 150;                      break;
//     case 'M':  Motor_PWM = 100;                       break;
//   }
// }

// void UART_Control()
// {
//   while (Serial.available())
//   {
//     char inChar = (char)Serial.read();
//     if (inChar == '\n') 
//     {
//       serialBuffer[serialBufferIndex] = '\0';
//       processCommand(serialBuffer[0]);
//       serialBufferIndex = 0;
//     }
//     else
//     {
//       if (serialBufferIndex < sizeof(serialBuffer) - 1)
//       {
//         serialBuffer[serialBufferIndex++] = inChar;
//       }
//     }
//   }
// }

// void IO_init()
// {
//   pinMode(PWMA, OUTPUT);
//   pinMode(DIRA1, OUTPUT);pinMode(DIRA2, OUTPUT);
//   pinMode(PWMB, OUTPUT);
//   pinMode(DIRB1, OUTPUT);pinMode(DIRB2, OUTPUT);
//   pinMode(PWMC, OUTPUT);
//   pinMode(DIRC1, OUTPUT);pinMode(DIRC2, OUTPUT);
//   pinMode(PWMD, OUTPUT);
//   pinMode(DIRD1, OUTPUT);pinMode(DIRD2, OUTPUT);
  
//   pinMode(enc_motorAA, INPUT);pinMode(enc_motorAB, INPUT); // MOTORA
//   pinMode(enc_motorBA, INPUT);pinMode(enc_motorBB, INPUT); // MOTORB
//   pinMode(enc_motorCA, INPUT);pinMode(enc_motorCB, INPUT); // MOTORC
//   pinMode(enc_motorDA, INPUT);pinMode(enc_motorDB, INPUT); // MOTORD
//   attachInterrupt(digitalPinToInterrupt(enc_motorAA), countPulseA, RISING);
//   attachInterrupt(digitalPinToInterrupt(enc_motorBA), countPulseB, RISING);
//   attachInterrupt(digitalPinToInterrupt(enc_motorCA), countPulseC, RISING);
//   attachInterrupt(digitalPinToInterrupt(enc_motorDA), countPulseD, RISING);

//   pulseCounterA = 0;
//   pulseCounterB = 0;
//   pulseCounterC = 0;
//   pulseCounterD = 0;

//   lastMeasurement = millis();
//   STOP();
// }

// void setup()
// {
//   Serial.begin(9600);
//   IO_init();
// }

// void loop()
// {
//   UART_Control(); // Serial receive and handle

//   unsigned long currentMillis = millis();
//   if(currentMillis - lastMeasurement >= 300)
//   {
//     noInterrupts();
//     int countA = pulseCounterA;
//     int countB = pulseCounterB;
//     int countC = pulseCounterC;
//     int countD = pulseCounterD;

//     pulseCounterA = 0;
//     pulseCounterB = 0;
//     pulseCounterC = 0;
//     pulseCounterD = 0;

//     interrupts();

//     float speedA = (float)countA / 5.0;
//     float speedB = (float)countB / 5.0;
//     float speedC = (float)countC / 5.0;
//     float speedD = (float)countD / 5.0;
//     Serial.print("Speed_A : " );
//     Serial.print(speedA, 2);
//     Serial.print("Speed_B : " );
//     Serial.print(speedB, 2);
//     Serial.print("Speed_C : ");
//     Serial.print(speedC, 2);
//     Serial.print("Speed_D : ");
//     Serial.print(speedD, 2);
//     Serial.println(" ");
//     lastMeasurement = currentMillis;
//   }
// }

// void countPulseA()
// {
//   if(digitalRead(enc_motorAB) == HIGH)
//   {
//    pulseCounterA ++;
//   }
//   else {
//     pulseCounterA --;
//   }
// }
// void countPulseB()
// {
//   if(digitalRead(enc_motorBB) == HIGH)
//   {
//    pulseCounterB ++;
//   }
//   else {
//     pulseCounterB --;
//   }
// }

// void countPulseC()
// {
//   if(digitalRead(enc_motorCB) == HIGH)
//   {
//    pulseCounterC ++;
//   }
//   else {
//     pulseCounterC --;
//   }
// }
// void countPulseD()
// {
//   if(digitalRead(enc_motorDB) == HIGH)
//   {
//    pulseCounterD ++;
//   }
//   else {
//     pulseCounterD --;
//   }
// }


volatile int pulseCounterA;
volatile int pulseCounterB;
volatile int pulseCounterC;
volatile int pulseCounterD;

unsigned long lastMeasurement;

#define PWMA 12    // A motor speed 
#define DIRA1 34  // A motor direction
#define DIRA2 35  
const int enc_motorAA = 18;
const int enc_motorAB = 31;

#define PWMB 8    // B motor speed 
#define DIRB1 37 
#define DIRB2 36  
const int enc_motorBA = 19;
const int enc_motorBB = 36;

#define PWMC 6   // C motor speed  
#define DIRC1 43 
#define DIRC2 42  
const int enc_motorCA = 3;
const int enc_motorCB = 49;

#define PWMD 5    // D motor speed
#define DIRD1 A4  
#define DIRD2 A5  
const int enc_motorDA = 2;
const int enc_motorDB = 23;

#define MOTORA_FORWARD(pwm)    do{digitalWrite(DIRA1, LOW); digitalWrite(DIRA2, HIGH); analogWrite(PWMA, pwm);} while (0)
#define MOTORA_STOP()          do{digitalWrite(DIRA1, LOW); digitalWrite(DIRA2, LOW); analogWrite(PWMA, 0);} while (0)
#define MOTORA_BACKOFF(pwm)    do{digitalWrite(DIRA1, HIGH); digitalWrite(DIRA2, LOW); analogWrite(PWMA, pwm);} while (0)

#define MOTORB_FORWARD(pwm)    do{digitalWrite(DIRB1, HIGH); digitalWrite(DIRB2, LOW); analogWrite(PWMB, pwm);} while (0)
#define MOTORB_STOP()          do{digitalWrite(DIRB1, LOW); digitalWrite(DIRB2, LOW); analogWrite(PWMB, 0);} while (0)
#define MOTORB_BACKOFF(pwm)    do{digitalWrite(DIRB1, LOW); digitalWrite(DIRB2, HIGH); analogWrite(PWMB, pwm);} while (0)

#define MOTORC_FORWARD(pwm)    do{digitalWrite(DIRC1, LOW); digitalWrite(DIRC2, HIGH); analogWrite(PWMC, pwm);} while (0)
#define MOTORC_STOP()          do{digitalWrite(DIRC1, LOW); digitalWrite(DIRC2, LOW); analogWrite(PWMC, 0);} while (0)
#define MOTORC_BACKOFF(pwm)    do{digitalWrite(DIRC1, HIGH); digitalWrite(DIRC2, LOW); analogWrite(PWMC, pwm);} while (0)

#define MOTORD_FORWARD(pwm)    do{digitalWrite(DIRD1, HIGH); digitalWrite(DIRD2, LOW); analogWrite(PWMD, pwm);} while (0)
#define MOTORD_STOP()          do{digitalWrite(DIRD1, LOW); digitalWrite(DIRD2, LOW); analogWrite(PWMD, 0);} while (0)
#define MOTORD_BACKOFF(pwm)    do{digitalWrite(DIRD1, LOW); digitalWrite(DIRD2, HIGH); analogWrite(PWMD, pwm);} while (0)

#define SERIAL Serial

#define LOG_DEBUG

#ifdef LOG_DEBUG
#define M_LOG SERIAL.print
#else
#define M_LOG 
#endif

#define MAX_PWM   200
#define MIN_PWM   100
int Motor_PWM = 50;

void ADVANCE() {
  MOTORA_FORWARD(Motor_PWM);
  MOTORB_FORWARD(Motor_PWM);
  MOTORC_FORWARD(Motor_PWM);
  MOTORD_FORWARD(Motor_PWM);
}

void BACK() {
  MOTORA_BACKOFF(Motor_PWM);
  MOTORB_BACKOFF(Motor_PWM);
  MOTORC_BACKOFF(Motor_PWM);
  MOTORD_BACKOFF(Motor_PWM);
}

void LEFT_1() {
  MOTORA_STOP();
  MOTORB_FORWARD(Motor_PWM);
  MOTORC_FORWARD(Motor_PWM);
  MOTORD_STOP();
}

void LEFT_2() {
  MOTORA_BACKOFF(Motor_PWM);
  MOTORB_FORWARD(Motor_PWM);
  MOTORC_FORWARD(Motor_PWM);
  MOTORD_BACKOFF(Motor_PWM);
}

void LEFT_3() {
  MOTORA_BACKOFF(Motor_PWM);
  MOTORB_STOP();
  MOTORC_STOP();
  MOTORD_BACKOFF(Motor_PWM);
}

void RIGHT_1() {
  MOTORA_FORWARD(Motor_PWM);
  MOTORB_STOP();
  MOTORC_STOP();
  MOTORD_FORWARD(Motor_PWM);
}

void RIGHT_2() {
  MOTORA_FORWARD(Motor_PWM);
  MOTORB_BACKOFF(Motor_PWM);
  MOTORC_BACKOFF(Motor_PWM);
  MOTORD_FORWARD(Motor_PWM);
}

void RIGHT_3() {
  MOTORA_STOP();
  MOTORB_BACKOFF(Motor_PWM);
  MOTORC_BACKOFF(Motor_PWM);
  MOTORD_STOP();
}

void STOP() {
  MOTORA_STOP();
  MOTORB_STOP();
  MOTORC_STOP();
  MOTORD_STOP();
}


void UART_Control() 
{
  char command = 0;
  if (Serial.available() > 0 ) 
  {
    command = Serial.read();
    Serial.println(command);
  }
  switch(command) 
  {
    case 'A':  ADVANCE(); M_LOG("Run!\r\n"); break;
    case 'B':  RIGHT_1(); M_LOG("Right up!\r\n"); break;
    case 'C':  RIGHT_2(); M_LOG("Right!\r\n"); break;
    case 'D':  RIGHT_3(); M_LOG("Right down!\r\n"); break;
    case 'E':  BACK(); M_LOG("Run!\r\n"); break;
    case 'F':  LEFT_3(); M_LOG("Left down!\r\n"); break;
    case 'G':  LEFT_2(); M_LOG("Left!\r\n"); break;
    case 'H':  LEFT_1(); M_LOG("Left up!\r\n"); break;
    case 'Z':  STOP(); M_LOG("Stop!\r\n"); break;
    case 'L':  Motor_PWM = 150; break;
    case 'M':  Motor_PWM = 100; break;
   // default: M_LOG("Unknown command!\r\n"); break;
  }

}

void IO_init() {
  pinMode(PWMA, OUTPUT);
  pinMode(DIRA1, OUTPUT);
  pinMode(DIRA2, OUTPUT);
  pinMode(PWMB, OUTPUT);
  pinMode(DIRB1, OUTPUT);
  pinMode(DIRB2, OUTPUT);
  pinMode(PWMC, OUTPUT);
  pinMode(DIRC1, OUTPUT);
  pinMode(DIRC2, OUTPUT);
  pinMode(PWMD, OUTPUT);
  pinMode(DIRD1, OUTPUT);
  pinMode(DIRD2, OUTPUT);
  
  pinMode(enc_motorAA, INPUT);
  pinMode(enc_motorAB, INPUT);
  pinMode(enc_motorBA, INPUT);
  pinMode(enc_motorBB, INPUT);
  pinMode(enc_motorCA, INPUT);
  pinMode(enc_motorCB, INPUT);
  pinMode(enc_motorDA, INPUT);
  pinMode(enc_motorDB, INPUT);
  
  attachInterrupt(digitalPinToInterrupt(enc_motorAA), countPulseA, RISING);
  attachInterrupt(digitalPinToInterrupt(enc_motorBA), countPulseB, RISING);
  attachInterrupt(digitalPinToInterrupt(enc_motorCA), countPulseC, RISING);
  attachInterrupt(digitalPinToInterrupt(enc_motorDA), countPulseD, RISING);

  pulseCounterA = 0;
  pulseCounterB = 0;
  pulseCounterC = 0;
  pulseCounterD = 0;

  lastMeasurement = millis();
  STOP();
}

void setup() {
  Serial.begin(9600);
  IO_init();
}

void loop() {

  UART_Control(); // Serial receive and handle
  unsigned long currentMillis = millis();
  if (currentMillis - lastMeasurement >= 300) {
    noInterrupts();
  
    int countA = pulseCounterA;
    int countB = pulseCounterB;
    int countC = pulseCounterC;
    int countD = pulseCounterD;

    pulseCounterA = 0;
    pulseCounterB = 0;
    pulseCounterC = 0;
    pulseCounterD = 0;

    interrupts();

    float speedA = (float)countA / 4.0;
    float speedB = (float)countB / 4.0;
    float speedC = (float)countC / 4.0;
    float speedD = (float)countD / 4.0;
    Serial.print("Speed_A : ");
    Serial.print(speedA, 2);
    Serial.print(" Speed_B : ");
    Serial.print(speedB, 2);
    Serial.print(" Speed_C : ");
    Serial.print(speedC, 2);
    Serial.print(" Speed_D : ");
    Serial.print(speedD, 2);
    Serial.println(" ");
    lastMeasurement = currentMillis;
  }
  Serial.read();
}

void countPulseA() {
  if (digitalRead(enc_motorAB) == HIGH) {
    pulseCounterA++;
  } else {
    pulseCounterA--;
  }
}
void countPulseB() {
  if (digitalRead(enc_motorBB) == HIGH) {
    pulseCounterB++;
  } else {
    pulseCounterB--;
  }
}

void countPulseC() {
  if (digitalRead(enc_motorCB) == HIGH) {
    pulseCounterC++;
  } else {
    pulseCounterC--;
  }
}
void countPulseD() {
  if (digitalRead(enc_motorDB) == HIGH) {
    pulseCounterD++;
  } else {
    pulseCounterD--;
  }
}
