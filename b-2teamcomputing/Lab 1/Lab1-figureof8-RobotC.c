/*
figure of 8
LAb group B-2 

*/ 
task main()
{
	setMotorSpeed(motorB, 70);	//Set the leftMotor to 70% power
	setMotorSpeed(motorC, 50);  //Set the rightMotor to 50% power
	sleep(7000);// wait


	setMotorSpeed(motorB, 50);	//Set the leftMotor to 50% power
	setMotorSpeed(motorC, 70);  //Set the rightMotor to 70% power
	sleep(7000);// wait

}
