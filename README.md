# PlantWateringSystem
This is a Simple Plant watering system which is solar powered 

* Component Lists:
<img src="https://media.discordapp.net/attachments/1138774156759019652/1265916477488238632/452144424_363249590140919_3782576298195967538_n.png?ex=66b06f17&is=66af1d97&hm=e4b17e3e3a031bf20a45523585cfd8dac2eed458409dd94d7d379a2142990d3b&=&format=webp&quality=lossless&width=188&height=336"/>

1. Solar 5v 1Amps
2. Water Pump
3. L293d Driver
4. Esp8266 Replaced with Arduino afterwards 
5. Soil Moisture Sensor

### Initial Thoughts:

So My plan Was to use a transisotor (2n2222 NPN) to run the Motors Because neither ESP and UNO can handle the Load 
What i was gonna do is get the Soil Moisture and then upon certian threshold value i run the motor by giving some Base current using the digital Pins to the NPN and it should have worked but it did not 

# Transistor Problems:

So my transistor was not working i first though its broken tested it with an LED and it did work but still it wasnt working with the Motor 

*My Initial Thoughts on the Problem*
I thought that the Base could not get current enough for the transisotr to fully become conductive and give out the AMPS needed by motor, But after getting help from Discord "Official Arduino Server" I found that 2n222 isnt cut for it 

# Using L293d Motor Driver 

I was gonna buy a new Transistor but but i did not wanted to go and buy a new one was very lazy for it hehe
Then i though i have a Driver laying around so i used it and to my surprise *Drum Rolls* it didnt work :) 

# Debugging the Circuit 

After a lot of Tries and looking the circuit *staring at it* I found out that i did not common the ground *cries in pain* 🙂
 I common the Ground and it started working 

<img src="https://media.discordapp.net/attachments/1266740715451318272/1267407849328345189/IMG_5669.jpg?ex=66afed4a&is=66ae9bca&hm=76d13d1a173d17049a74b97f3ed51fe19da24107db66a15b0e9c8031d3908325&=&format=webp&width=439&height=585">

# Final Thoughts:

I wanted to do a lot more on this but my main thing was done i got it working but i could not test it fully with solar so i did test it using my supply and here is the Final Project Picture:
<img src="FinalProject" width="800" height="500">

*if the Image looks crappy I am sorry was not planning on writing about it so yea*

Thanks for Reading Have a Good day !!
