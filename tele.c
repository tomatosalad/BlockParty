#pragma config(Hubs,  S1, HTMotor,  HTMotor,  HTMotor,  HTMotor)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorAlpha,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorBeta,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorGamma,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorDelta,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_1,     motorEpsilon,  tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C3_2,     motorZeta,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_1,     motorEta,      tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C4_2,     motorTheta,    tmotorTetrix, openLoop)


#include "JoystickDriver.c"
task main()
{
	while(true)
	{
		getJoystickSettings(joystick);
	  motor[motorAlpha] = joystick.joy1_y1/-1;
	  motor[motorAlpha] = joystick.joy1_x1/-1;
		motor[motorBeta] =	joystick.joy1_y1/-1;
		motor[motorBeta] = joystick.joy1_x1;
	}
if(joy1Btn(0) == 1)
 {motor[motorGamma] = 50;}
  else
	  {motor[motorGamma] = 0;}

if(joy1Btn(1) == 1)
 {motor[motorDelta] = 50;}
  	else
  		{motor[motorDelta] = 0;
if(joy1Btn(2) == 1)
 {motor[motorEpsilon] = 50;}
    else
     {motor[motorEpsilon] = 0;}
if(joy2Btn(0) == 1)
 {motor[motorZeta] = 50;}
   else
     {motor[motorZeta] = 0;}
if(joy2Btn(1) == 1)
 {motor[motorEta] = 50;}
   else
     {motor[motorEta] = 0;}
if(joy2Btn(2) == 1)
  {motor[motorTheta] = 50;}
}}
