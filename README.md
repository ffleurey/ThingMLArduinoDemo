# ThingML for Arduino Programming

ThingML ([https://github.com/TelluIoT/ThingML](http://thingml.org/dist/ThingML2CLI.jar)) is a high-level language based on components, asynchronous messaging and finate state machines. Despite a high level of abstraction, ThingML includes a code generator which is suitable for Arduino as well as other flavors of 8 bits microcontrollers.

This repository provides some simple example to get started with ThingML on Arduino boards.

* The **"1.Basics"** folder contains some examples using digital IO with buttons and LEDs. It is a good demonstration of how the ThingML constructs can be used and all you need is an Arduino and a few LEDs and/or Buttons to connect to it.

* Other folders like the **"2.AdafruitLCDShield"** are currently work in progress. We will try to gather some more elaborate examples.

* This repository **[https://github.com/ffleurey/ThingML-PongTutorial](https://github.com/ffleurey/ThingML-PongTutorial)** contains the implementation of a more elaborate example around a video games that can run on multiple platforms, including an Arduino with an LCD shield. 

### Tools versions

Basic Examples have been tested with ThingML v2 on both Arduino Uno and Arduino Mega. These example will *NOT* work with ThingML v1 which should be consired as obsolete. 

Arduino IDE v1.6.4 was used for testing but newer version of the Arduino IDE should be fine.

### Links

 * ThingML Source: [https://github.com/TelluIoT/ThingML](https://github.com/TelluIoT/ThingML)
 * ThingML Update site: [http://thingml.org/dist/update2/](http://thingml.org/dist/update2/)
 * ThingML Command Line Compiler: [http://thingml.org/dist/ThingML2CLI.jar](http://thingml.org/dist/ThingML2CLI.jar)