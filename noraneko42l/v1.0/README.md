# Noraneko42L
![IMG_0918](https://user-images.githubusercontent.com/5214078/236359157-51a97c6f-2a56-4a80-a362-1c1098d21168.jpeg)
![IMG_0757](https://user-images.githubusercontent.com/5214078/236359170-afb49d4c-0c8e-48a6-b444-e25247330236.jpeg)

Noraneko42L is 42key Lotus Layout keyboard.  

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
Resistor 1K Ohm 1/4 Watt PTH --- 2 pcs   
If it does not glow, change the type of resistor. ([reference](https://25keys.com/2022/05/28/rp2040_sk6812mini/))   
MX key switch --- 42 pcs    
MX keycap   --- 42 pcs (1U)   
Bumpon --- Any quantity 

## Firmware
![IMG_7002](https://user-images.githubusercontent.com/5214078/201300486-a19fce27-7261-4fac-a14e-f837b712de54.jpeg)
[Firmware](https://github.com/darakuneko/Noraneko/raw/main/noraneko42l/v1.0/firmware/noraneko42l_vial.uf2)   
Check if the firmware can write to RP2040-Zero.  
Download the firmware.   
Connect while holding down the Boot button.  
RPI-RP2 will appear.  
Copy the downloaded firmware to RPI-RP2.  
Make sure that Noraneko42L is connected to your PC.    
[Vial Support](https://get.vial.today/)  

### Feature
CAPS WORD  
https://github.com/qmk/qmk_firmware/blob/master/docs/feature_caps_word.md   

## Soldering
![IMG_7020](https://user-images.githubusercontent.com/5214078/201305293-fc02600c-bd61-48fc-b5ba-b1e6f3c53741.jpeg)
![IMG_7021](https://user-images.githubusercontent.com/5214078/201386019-704d5e56-faff-4dc6-a010-397cb9949110.jpeg)
![IMG_5585](https://user-images.githubusercontent.com/5214078/196370976-1ae8f0df-43c9-4802-8a62-8c840f756a45.png)
![IMG_7017](https://user-images.githubusercontent.com/5214078/201293813-f836e7c0-ed6d-4031-ab17-09eea528efa6.jpg)
![IMG_5588](https://user-images.githubusercontent.com/5214078/196371378-a40fc202-53ea-49b4-a9e6-ca88323a2bc1.png)
![unnamed](https://user-images.githubusercontent.com/5214078/234236638-de475c43-c586-493f-8152-63ca74c02ff0.jpg)

RP2040-Zero(SMD), Solder BSS138, Resistors, diodes, LEDs, and sockets.　  
Be careful of the direction of soldering.  
But Resistors has no polarity.

## Build
![IMG_0757](https://user-images.githubusercontent.com/5214078/236359224-5ccf51fc-f394-4d8e-bbf1-bedc44bc3668.jpeg)

Take the bottom acrylic paper.   
Install spacers, screws, and Bumpon on bottom plate and main plate.   

If you are concerned about LED flicker caused by acrylic.  
https://twitter.com/daraku__neko/status/1652335060878753798

## Completed!!
![IMG_0918](https://user-images.githubusercontent.com/5214078/236359157-51a97c6f-2a56-4a80-a362-1c1098d21168.jpeg)

Take the top & middle acrylic paper.  
Put on the switches and keycaps and you're done!!

## Vial 
https://get.vial.today/  
This firmware is Vial-compatible, allowing GUI-based changes to keymaps and settings.  

Web version  
https://vial.rocks/  
App version  
https://get.vial.today/download/  

