# Users Manual for LEDice

author: Paul Garten

The example implementation for the D6 works as follows:

## Config
In the configuration file, you will have to set the pins you are 
actually using and choose one method of depiction:

You can choose from either the traditional dice layout, a seven segment display, or binary.
For binary, you only need the first three pins, while for the other two, you will need all seven.
For Random Pin, you will need to assign an empty analog pin, as the program uses math magic 
to generate randomness by reading the voltage off it.

**DON'T change MAX and MIN** unless you also want to implement (or at least, edit) 
a depiction method to show these numbers.

## Electronic Setup
In [Dice Setup](Dice_Setup.PNG) , you can see how to setup the electronic components, 

in [Dice Components](Dice_Components.csv), you can see a list of all components used.

After configuration, you will just have to upload the program and you are set.
Press the button and the dice will roll!

## devs
IF you want to implement a new depiction method or else, 
see the [developer documentation](Dev_Documentation.md) for more information.