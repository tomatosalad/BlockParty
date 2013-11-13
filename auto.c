#pragma config(Hubs,  S1, HTMotor,  HTMotor,  none,     none)
#pragma config(Sensor, S1,     ,               sensorI2CMuxController)
#pragma config(Motor,  mtr_S1_C1_1,     motorAlpha,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C1_2,     motorBeta,     tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_1,     motorGamma,    tmotorTetrix, openLoop)
#pragma config(Motor,  mtr_S1_C2_2,     motorDelta,    tmotorTetrix, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{
	while(true)
	{
		motor[motorAlpha] = 100;
		motor[motorBeta] = 100;
		wait10Msec(100);

		motor[motorAlpha] = 0;
	  motor[motorBeta] = 0;
		wait1Msec(1000);

		motor[motorAlpha] = 50;
		motor[motorBeta] = 50/-1;
		wait1Msec(1000);

		motor[motorAlpha] = 50;
		motor[motorBeta] = 50;
		wait1Msec(1000);

		//motor
	}
}