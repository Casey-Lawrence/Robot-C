/* 
there and back again
Group B-2
*/
task main()
{
	// move forward for 5 seconds
	setMotorSpeed(motorB, 50);	//Set the leftMotor to half power forward 
	setMotorSpeed(motorC, 50); 	//Set the rightMotor to half power forward 
	sleep(5000); //Wait for 5 seconds before continuing on in the program.

	// Turn 180 degrees at full power
	setMotorSpeed(motorB, 100);	//Set the leftMotor to full power forward 
	setMotorSpeed(motorC, -100);//Set the rightMotor to full power reverse
	sleep(430);// wait for .430 second before continuing on in the program

	// return to original position
	setMotorSpeed(motorB, 50);	//Set the leftMotor to half power forward 
	setMotorSpeed(motorC, 50); 	//Set the rightMotor to half power forward 
	sleep(5000); //Wait for 5 seconds before continuing on in the program.


}
