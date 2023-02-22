/* 
left spin 
Group B-2
*/
task main()
{
	setMotorSpeed(motorB, 100);	//Set the leftMotor to 100% power
	setMotorSpeed(motorC, 100);  //Set the rightMotor to 100% power
	sleep(1000); // wait 1 seconds before begining next command

	setMotorSpeed(motorB, -100);	//Set the leftMotor to -100% power
	setMotorSpeed(motorC, 100);  //Set the rightMotor to 100% power
	sleep(1000);// wait 1 second begore beginning next command 


}
