#Particle Core Piezo Buzzer Fun


This is a really simple project that interacts with a network connected [Particle][5] and uses the [Particle Cloud API][7] to send commands.
I have the original [Spark Core][4], but the music code in this was written for the Arduino.  So whatever. 

(Original music source code here: [princetronics][8])

The website I made at [http://kevbost.github.io/particle-web][1] enables anyone to control a piezo buzzer from anywhere in the world, as long as your controller is plugged in, your controller has a piezo buzzer plugged into pin D3 (see image), and as long as you have the code at **_/particle_core_files/hello-net.ino_** flashed.

Have your Particle "Device ID" and "Device Access Token" handy.

	// ---------------------------------------------
	// The input fields are running dumb-validation.
	// CSS output only.  The form will still submit.
	// ---------------------------------------------
	
	if(deviceId.val().length === 24) {}
	if(token.val().length === 40) {}
	
##Instructions
This is basically an updated and extended version of the informative [tutorial on the particle docs][3] for completing the classic hello world over the 'net.

The .ino file that makes the piezo buzzer go buzz-buzz is at **_/particle_core_files/hello-net.ino_**

I have been using the IDE at [https://build.particle.io/build/][2] to write and flash the code to the Particle.

The buzzer connects to D3 and GND. The LED connected to D0 turns on before the buzzer fires and turns off after it's tone is complete.

![buzzer fritzing configuration][fritzing]

_Note that there are no resistors being used here.  The buzzer I used is rated between 3v and 12v, and the Spark just doesn't put out a lot of power._


##Options
A number of control options are available on the [control website][1], including:

- Turn the LED on
- Turn the LED off
- Blink the LED. Then turn off.
- Play Mario Theme Song
- My attempt at transcribing the too-catchy song [Classic Man][6]
- Frequency Test 5k steps, 10k-40k
- Running the full note gamut really fast

[fritzing]: particle_core_files/fritzing-highlighted.jpg

[1]: http://kevbost.github.io/particle-web
[2]: https://build.particle.io/build/
[3]: https://docs.particle.io/guide/getting-started/examples/core/#control-leds-over-the-39-net
[4]: https://store.particle.io/?product=spark-core
[5]: https://www.particle.io/
[6]: https://www.youtube.com/watch?v=nsiN0W15w0U
[7]: https://docs.particle.io/reference/api/
[8]: http://www.princetronics.com/supermariothemesong/