
#include<Servo.h> // include server library
Servo ser; // create servo object to control a servo
Servo ser2; //create servo object 2 for up and down
Servo ser3; // create servo object 3 for up and down
int poser = 0; // initial position of server
int poser2 = 0;
int poser3 = 0;
int val; // initial value of input

void setup() {
  Serial.begin(9600); // Serial comm sends data at 9600 bites per second
  ser.attach(9);// servor is connected at pin 9
  ser2.attach(10); // servor is connected at pin 10
  ser3.attach(11); // servor is connected at pin11 
}

void loop() {
  if (Serial.available()) // check if there is an input sent from Tera 
  {
    val = Serial.read();// then read the serial value
    if (val == 'd') // checks if the key pressed is d
    {
      poser += 5; //than position of servo motor increases by 1 ( anti clockwise)
      ser.write(poser);// the servo wil 
      delay(10);//delay for the servo to get to the position
    }
 
    if (val == 'a') //if value input is equals to a
    {
      poser -= 5; //than position of servo motor decreases by 1 (clockwise)
      ser.write(poser);// the servo will move according to position 
      delay(10);//delay for the servo to get to the position
    }

       if (val == 'w') // check if w has been pressed
    {
      poser2 += 10; //than position of servo motor increases by 1 ( anti clockwise)
      ser2.write(poser2);// the servo will move according to position 
      delay(10);//delay for the servo to get to the position
    }
    if (val == 's') //if value input is equals to s-pri
    {
      poser2 -= 10; //than position of servo motoree decreases by 1 (clockwise)
      ser2.write(poser2);// the servo will move according to position 
      delay(10);//delay for the servo to get to the position
    }

       if (val == 'q') //if value input is equals to s-pri
    {
      poser3 += 10; //than position of servo motor decreases by 1 (clockwise)
      ser3.write(poser3);// the servo will move according to position 
      delay(10);//delay for the servo to get to the position
    }

      if (val == 'e') //if value input is equals to s-pri
    {
      poser3 -= 10; //than position of servo motor decreases by 1 (clockwise)
      ser3.write(poser3);// the servo will move according to position 
      delay(10);//delay for the servo to get to the position
    }


    
  }
}
