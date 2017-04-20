# Radio Frequency Switching Tool Kit Control

### Usage:
Open file 
	```
	capstone_rf_switch_control.ino
	```

	via Arduino software, then open the build-in serial monitor, enter the port number you want
	since we have total 16 inputs, for selecting rf1, user need to enter 1, for switching to pin 10-16,
	user can enter a-f (lowercase only).

	
Open file 
	```
	demo.ino
	```

	upload to Arduino UNO, it continuously and automatically switchs among three input ports;
	5 seconds between the swithces.
	User can use
	 
	```capstone_rf_switch_control.ino 
	``` 
	as a reference to modify the code to switch the ports he/she wants.
	
	


