# Noraneko52R  
![PB110430](https://user-images.githubusercontent.com/5214078/201295075-e99c6a70-d4bb-47fc-9ccd-e66670a932c6.JPG)
![IMG_6999](https://user-images.githubusercontent.com/5214078/201291565-f790acc7-9356-43f2-b572-b1f4afc4b3d8.jpeg)

Noraneko52R is 52key row staggered keyboard.  

## Parts  

Top acrylic plate --- 1 pc  
Middle acrylic plate --- 1 pc   
Main FR4 plate --- 1 pc   
Bottom1 acrylic plate --- 1 pc   
Bottom2 acrylic plate --- 1 pc   
M2 spacer 3mm --- 7 pcs  
M2 screw 3mm --- 14 pcs  (Screw heads should be 2 mm or less）  
RP2040-Zero --- 1 pc  
Pin header 9pin --- 2 pcs   
Pin header 5pin --- 1 pc  
1N4148W --- 52 pcs  
SK6812MINI-E --- 52 pcs  
WS2812B --- 13 pcs  
BSS138 --- 1 pc  
Resistor 1K Ohm 1/4 Watt PTH --- 2 pcs   
If it does not glow, change the type of resistor. ([reference](https://25keys.com/2022/05/28/rp2040_sk6812mini/))   

MX key switch --- 52 pcs  
Stabilizers 2U --- 2 pcs (GMK Screw-in Stabilizers are recommended)   
MX keycap    
https://booth.pximg.net/3a4d6577-cfc5-4ca5-92b6-a2b233b974d5/i/4311339/b372f2f2-1520-4431-a8cc-eac1ec2c977d.png   
Bumpon --- Any quantity 

## Firmware
![IMG_7002](https://user-images.githubusercontent.com/5214078/201300486-a19fce27-7261-4fac-a14e-f837b712de54.jpeg)
[Firmware](https://github.com/darakuneko/Noraneko/raw/main/noraneko52r/v1.0/firmware/noraneko52r_vial.uf2)  
Check if the firmware can write to RP2040-Zero.  
Download the firmware.   
Connect while holding down the Boot button.  
RPI-RP2 will appear.  
Copy the downloaded firmware to RPI-RP2.  
Make sure that Noraneko52R is connected to your PC.

### Feature
CAPS WORD  
https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md   

## Soldering
![IMG_7020](https://user-images.githubusercontent.com/5214078/201305293-fc02600c-bd61-48fc-b5ba-b1e6f3c53741.jpeg)
![IMG_7021](https://user-images.githubusercontent.com/5214078/201386019-704d5e56-faff-4dc6-a010-397cb9949110.jpeg)
![IMG_5585](https://user-images.githubusercontent.com/5214078/196370976-1ae8f0df-43c9-4802-8a62-8c840f756a45.png)
![IMG_7017](https://user-images.githubusercontent.com/5214078/201293813-f836e7c0-ed6d-4031-ab17-09eea528efa6.jpg)
![IMG_5588](https://user-images.githubusercontent.com/5214078/196371378-a40fc202-53ea-49b4-a9e6-ca88323a2bc1.png)

Solder BSS138, Resistors, diodes, LEDs, and sockets.　  
Be careful of the direction of soldering.  
But Resistors has no polarity.

RP2040-Zero
![IMG_7023](https://user-images.githubusercontent.com/5214078/201294180-8c683e09-8754-45ca-b107-74b136b59aa8.jpeg)
For direct soldering using pin headers, see [here](https://kbdbuild.vercel.app/blog/yamada_pro_micro).  
This is doing this with ProMicro, but it is the same with RP2040-Zero.   
Be careful of the direction of soldering.  

## Build
![IMG_7033](https://user-images.githubusercontent.com/5214078/201295860-cec679b7-a68d-4809-afed-8b592c872d7a.jpeg)
![IMG_7038](https://user-images.githubusercontent.com/5214078/201295876-89cb34b2-e620-4aa9-8709-bc26b164d308.jpg)
the screw part's height of the stabilizer should be 3mm or less.   
GMK Screw-in Stabilizers are recommended.   

![IMG_9545](https://user-images.githubusercontent.com/5214078/222672730-8065d73a-69cd-4bf5-8046-b6fc88dca5c8.jpeg)
![IMG_9546](https://user-images.githubusercontent.com/5214078/222673334-6bbdc56b-8281-475e-9fb2-d92db8bd3901.jpeg)

Take the bottom1 & bottom2 acrylic paper.   
Install spacers, screws, and Bumpon on bottom plate and main plate.

If you are concerned about LED flicker caused by acrylic.  
https://twitter.com/daraku__neko/status/1652335060878753798

## Completed!!
![PB110430](https://user-images.githubusercontent.com/5214078/201295075-e99c6a70-d4bb-47fc-9ccd-e66670a932c6.JPG)

Take the top & middle acrylic paper.  
Put on the switches and keycaps and you're done!!

