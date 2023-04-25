# Noraneko42W  
![PB110430](https://user-images.githubusercontent.com/5214078/201295075-e99c6a70-d4bb-47fc-9ccd-e66670a932c6.JPG)
![IMG_6999](https://user-images.githubusercontent.com/5214078/201291565-f790acc7-9356-43f2-b572-b1f4afc4b3d8.jpeg)

Noraneko42W is 42key Willow Layout keyboard.  

## Parts  

Top acrylic plate --- 1 pc  
Middle acrylic plate --- 1 pc   
Main FR4 plate --- 1 pc   
Bottom acrylic plate --- 1 pc   
M2 spacer 3mm --- 9 pcs  
M2 screw 3mm --- 18 pcs  (Screw heads should be 2 mm or less）  
RP2040-Zero --- 1 pc   
1N4148W --- 42 pcs  
SK6812MINI-E --- 42 pcs  
WS2812B --- 13 pcs  
BSS138 --- 1 pc  
Resistor 10K Ohm 1/4 Watt PTH --- 2 pcs  
MX key switch --- 42 pcs    
MX keycap   --- 42 pcs (1U)
Bumpon --- Any quantity 

## Firmware
![IMG_7002](https://user-images.githubusercontent.com/5214078/201300486-a19fce27-7261-4fac-a14e-f837b712de54.jpeg)
[Firmware](https://github.com/darakuneko/Noraneko/raw/main/noraneko52r/v1.0/firmware/noraneko52r.uf2)  
Check if the firmware can write to RP2040-Zero.  
Download the firmware.   
Connect while holding down the Boot button.  
RPI-RP2 will appear.  
Copy the downloaded firmware to RPI-RP2.  
Make sure that Noraneko52R is connected to your PC.

### Feature
CAPS WORD  
https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md   
Dynamic Tapping Term   
https://github.com/qmk/qmk_firmware/blob/master/docs/tap_hold.md  

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
![PB110438](https://user-images.githubusercontent.com/5214078/201294992-04c312f4-3235-4173-a979-cbceb61ba204.JPG)

Take the bottom acrylic paper.   
Install spacers, screws, and Bumpon on bottom plate and main plate.

## Completed!!
![PB110430](https://user-images.githubusercontent.com/5214078/201295075-e99c6a70-d4bb-47fc-9ccd-e66670a932c6.JPG)

Take the top & middle acrylic paper.  
Put on the switches and keycaps and you're done!!

