# EcoRover
A motorized recycling bin targeting food courts with a built-in fridge to store food left-overs so other people can use it. Helping saving our planet, achive SDGs 2, 8, 9, 11, 12, and 13 and increasing social Interdependence! (A Stardance project)

![EcoRover Hero](./assets/ecorover-hero.png)

<div align="center">
<img width="300" height="100" alt="github logos" src="https://github.com/user-attachments/assets/0794ed15-8c2f-4819-9aad-5f0ab41fded9" />
</div>
    &nbsp;&nbsp;

<p align="center"> 
  <a href="https://doi.org/10.5281/zenodo.22164229"><img src="https://zenodo.org/badge/1303379956.svg" alt="DOI"></a>
  <a href="http://creativecommons.org/licenses/by-nc-sa/4.0/"><img src="https://i.creativecommons.org/l/by-nc-sa/4.0/88x31.png" alt="Creative Commons License"></a>
</p>

</div>


</div>

> **Note on AI Usage:**  about the usage of AI: The AI is being used in this project to generate ideas, explain and debug. However, it's not used to create parts of the project that require creativity, design and construction. Also, the AI is not used more than 10% of the total project. Which counts as MADE BY HUMAN.

> **For whoever reviwing the proj.:**  Thank you for reading all of this and reconceder the funding, I've resolved most of the notes but please keep in mind that in egypt it's so hard to get aliexpress in here. like apart from the crazy long shiping time it probably wont pass the customs or pass it after making me pay a big tax. so I'll use the sources i used and the egyptian pound is already too cheap compared to the USD (0.020 usd for 1 egyptian pound). thanks again -this note will be removed after funding.

> **The currnt state: waiting for funding, View [`JOURNAL.md`](./JOURNAL.md)**

---

## 1st The project and It's goals:

It’s a fancy trashcan after all XD, it has 5 wheels and sensors, and it’s gonna be wandering around in food courts with a built-in fridge. And it’s gonna store food leftovers (along with functioning like a recycling bin obviously). That way, whenever someone needs food, they can just take it without having to ask anyone, keeping their dignity completely intact. While still serving as a trash can with 4 holes so it can be recycled later.

1. 🇪🇬 Support Youth-Led Egyptian Projects: Proving what young Egyptian engineers can build from the ground up (like me XD).
2. 🇺🇳 Sustainable Development Goals: Promote both global and local sustainability by aligning with UN Sustainable Development Goals 2, 8, 9, 11, 12, and 13 (This isn’t planned; I found out halfway through the project lol).
3. 🫂 Developing Social Solidarity: Protecting human dignity while reducing food waste by making leftover food accessible without friction or embarrassment.
4. 🧠 Empower Human Intelligence: Using AI merely as a tool to increase productivity rather than as a source of creativity, since this project was developed with less than 10% AI assistance.
5. 🌍 Protect the Planet: Help protect the planet by removing organic waste and recyclables from landfills to reduce CO2 emissions and tackle environmental waste.
   
---

## 2nd The CAD

The project is made of 3 main parts with a footprint of 40x30cm and moddeled into fusion 360 (my first time cadding).

* **Bottom tier:** 10cm for the battery, motors and H bridges, and counterweights if needed.

| Bottom Figure Render | Bot Bottom Figure | Bottom Body Sketch |
| :---: | :---: | :---: |
| <img src="https://github.com/user-attachments/assets/86312606-fed2-4de1-a743-ca8839195b5a" width="300" alt="Bottom Figure Render" /> | <img src="https://github.com/user-attachments/assets/f5253936-75da-44f9-bc12-4cf29bc2ff38" width="300" alt="Bot Body figure V1" /> | <img width="300" alt="Bot Body sketch" src="https://github.com/user-attachments/assets/bfe46d74-bfd9-42ef-a2cd-492f460f9620" />

* **Middle tier:** The fridge and logic board layer, 45cm.

| Mid Body Figure V2 | Mid Figure Render | Mid Body Sketch |
| :---: | :---: | :---: |
| <img src="https://github.com/user-attachments/assets/47d97184-6cb3-4999-a200-4c366c480cb9" width="300" alt="Mid Body figure V2" /> | <img src="https://github.com/user-attachments/assets/0881734b-e47f-4031-ba30-12a2c3542dbb" width="300" alt="Mid Figure Render" /> | <img src="https://github.com/user-attachments/assets/424f48ab-c75a-46df-b86d-adc7fe3a61db" width="300" alt="Mid Body sketch" /> |

* **Top tier:** The trash seprator compartment, 35cm.
  
| Top Figure V2 | Top Figure Render | Top Body Sketch |
| :---: | :---: | :---: |
| <img src="https://github.com/user-attachments/assets/90f8e999-ff48-456d-8cf1-5797f06bc130" width="300" alt="Top figure V2" /> | <img src="https://github.com/user-attachments/assets/3ab02817-7d88-4b35-ae78-63ba3451b6fb" width="300" alt="Top Figure Render" /> | <img src="https://github.com/user-attachments/assets/aad35eec-fb17-4466-80e4-9a5c63993d15" width="300" alt="Top Body sketch" /> |

When I first started, Gemini suggested a 40x30cm footprint and 60cm height. I just started drawing it and didn’t notice it was way too short, making the trash compartment totally inaccessible and the fridge way too tiny. I didn’t notice till I was already cadding. Since 30x40cm is a good footprint, I decided to keep that, but when I pulled out a physical tape measure and imagined the project, I found myself bending over just to reach that height! So, I pushed it up to 90cm, which feels much better. Gemini assumed I would use heavy materials, but I’m going lightweight, so Inshallah it won’t tip over.

---

## 3rd The Firmware

The firmware manages everything, takes the signal from the 8 HC-SR04 ultrasonic sensors, and calculates the distance in all directions; based on that, it decides its move (moveForward, moveBackward, spinLeft, spinRight, and stop). On setup, it runs the cooling system immediately, and it also manages the safety indicators system (Buzzer and back LEDs for right and left)

Check it out at [`src-pre-release.ino`](./Firmwear/src-pre-release.ino)

---

## 4th The wiring

The wiring was done in order to create a BOM, i used fritzing even though i'm dummy at it. It went through 2 iterations, and I'm sure I've got some connections wrong, but it's only to visualize things. Both of them are missing the movmet safty system, but it has the crucial electrical safety system on V2. And to prevent electrical fire, I reached out to a fellow engineer, Mustafa Qusit (a mechatronics engineer and currently a B1 aircraft maintenance engineer at EgyptAir), to get his feedback on my circuit setup. Huge shout-out to him! He was super supportive, though he made it clear he won’t give me direct shortcuts on the electronics. He wants me to learn through trial and error, but he promised he’d step in and tell me if anything I wired is genuinely dangerous or going to go kaboom. If it’s safe, he’s letting me figure out the best way on my own, which I really respect.


| EcoRover V2 | EcoRover V1 |
| :---: | :---: |
| <img src="https://github.com/user-attachments/assets/12dd3706-b26c-4d75-8f59-91537a92e7d8" width="400" alt="EcoRover_v2" /> | <img src="https://github.com/user-attachments/assets/516a17fa-11da-4e39-b4e4-9eca1eea4470" width="400" alt="EcoRover_v1" /> |

