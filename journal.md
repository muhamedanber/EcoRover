Heyy welcome to my journal <3
This will have both the devlogs and the boring details I dont mention in the devlogs.


## Devlog #1: Taking EcoRover Off the Slideshow
– jul 12th 2026 –

Let me be honest for a second. A while ago my school pressured me and my friends into entering a local hackathon. I had exactly 24 hours to brainstorm an idea, throw a team together, build a quick prototype, and set up a booth for the final judging visit.

I came up with a concept called EcoBot, which was a smart, autonomous recycling bin and bread leftovers collector designed for schools. On paper it was cool but in reality? It never actually got built. It lived and died on a slideshow to check a school box.

But I actually liked the concept. So for Stardance this summer I decided to bring it back and build it for real. Except this time there’s no rush, no team, and no cutting corners to pass a class. I’m going completely solo as EcoRover.

**A quick BG about me:**
I’m Mohamed Anber, an 18yo Egyptian teen who happened to join Stardance in the final year before I’m too old for it. For the last 3 years I’ve been volunteering as an EMR with the Saudi Red Crescent Authority and a Tech Dept. supervisor with the Egyptian Red Crescent. I’ve built some pretty cool projects before (u can check them out on my website btw: https://muhamedanber.space/) though none of them involved trying to keep bread fresh while driving a fancy motorized trash can around. We’ll try to make smth good.

### 🛠️ The new Blueprint & The Specs
I’ve changed the idea partially. It’s still a fancy trashcan after all, but instead of going around at schools, it’s gonna be for food courts with a built-in fridge. So instead of bread remainings, it’s gonna take food leftovers and save them. That way, whenever someone needs food, they can just take it without having to ask anyone, keeping their dignity completely intact.

I’m building a triple-decker chassis:
* **Bottom tier:** Handles the heavy power and movement.
* **Middle tier:** Houses an insulated compartment kept cold by a Peltier cooling module to keep those leftovers fresh.
* **Top tier:** Handles sorting whatever thrown into to recycle later.

**The Tabletop MVP Specs:**
* **The Brain:** Arduino Mega 2560 (absolutely need the massive amount of IO pins).
* **The Eyes:** 4x (later got rasied to 8) HC-SR04 Ultrasonic Sensors mapped North, South, East, and West for 360° obstacle avoidance.
* **The Muscle:** 4x DC Yellow Smart Car Motors paired with dual L298N H-Bridge drivers. I wanted to go with mecanum wheels at first but it’s gonna be too much of a hustle rn, so we’re just doing differential drive.
* **The Fridge:** Since an actual 12V mini fridge is gonna be soo heavy, expensive and just not practical, I’m using a TEC1-12706 Peltier Thermoelectric Cooler switched via a 12V Relay module.

### 📹 Current Status
That’s pretty much everything I’ve got down so far. Plus, I’m working on a long video to document the whole journey, so I’ve already scripted and filmed the first part-ish. On to the CAD chaos...


---

## Devlog #2: The CAD Nightmare and the New Dimensions
– From jul 15 to jul 23rd 2026 –

Alr this whole CAD thing is a total headache.

When I first started, Gemini suggested a 40x30cm footprint and 60cm height. I just started drawing it and didn’t notice it was way too short, making the trash compartment totally inaccessible and the fridge way too tiny. I didn’t notice till I was already cadding. Since 30x40cm is a good footprint, I decided to keep that but when I pulled out a physical tape measure and imagined the project I found myself bending over just to reach over that height! So, I pushed it up to 90cm, which feels much better. Gemini assumed I would use heavy materials, but I’m going lightweight, so Inshallah it won’t tip over.

Now the new dimensions are:
* **Bottom tier:** 10cm for the battery, motors and H bridges, and counterweights if needed.
* **Middle tier:** The fridge and logic board layer, now pushed from 35 to 45cm.
* **Top tier:** The trash compartment, changed to 35cm instead of 15cm so people can actually use it.

A quick heads up if you forgot: It’s a fancy trashcan after all, it has wheels and sensors and it’s gonna be wandering around in food courts with a built-in fridge. And it’s gonna store food leftovers. That way, whenever someone needs food, they can just take it without having to ask anyone, keeping their dignity completely intact. While still serving as a trashcan with 4 holes so it can be recycled later.

Back to the story XD: This was my first time ever cadding, so I drew everything in Photoshop first. Then I watched a 20 minute video and figured the rest out in Fusion 360 on my own. Fusion was pretty heavy for my laptop, so it was a nightmare when parts failed and I had to remodel them from scratch. And in the end when I was rendering it looked a bit weird but im not gonna change it cuz i’m exhausted tbh and my patience is running thin. Also during cadding, I added some access panels for maintenance and emergency latches in case god forbid we needed to kill the power.

As for the video, I decided not to script it word for word anymore, so I’m just running the camera and letting it happen. Up next: tackling Fritzing and dealing with real-life logistics...


---

## Devlog #3: Pivot, Wiring Struggles, and Learning the Hard Way
– From Aug 13th to Aug 18th 2026 –

Alr, a lot has happened since Devlog 2!

First off, I traveled back to Egypt on August 13th, and the internet here is honestly making video editing a whole mission. I was originally using Google Vids and its AI auto-trimmer to cut out silences from my documentary footage, but uploading massive video files to Drive here completely destroys the internet plan and takes forever. I tried switching over to Premiere Pro (which my laptop usually handles pretty well), but it started lagging badly and making my laptop run super hot. After wasting about 3 hours trying to get it to run smoothly with zero luck, I decided to completely pivot: I’m setting aside the documentary video for now and focusing on keeping a detailed journal directly in this repo instead, uploading as many progress time-lapses here as I can.

On the hardware side, I started modeling the electronics in Fritzing. Even though it’s only my second time using it, the connections are insanely annoying to trace out. I’m pretty sure some of the schematic lines look wrong on paper, but I have the whole circuit clear in my mind, so I just modeled it anyway to visualize the layout. I’ll make sure everything is hooked up correctly when I actually assemble the physical board.

I also finalized the Bill of Materials (BOM) and did some price comparisons across different stores. To keep things safe, I added a few crucial safety measures like an inline fuse and a rocker switch so nothing accidentally shorts out or catches fire.

Speaking of not blowing things up, I reached out to a fellow engineer, Mustafa Qasid (a mechatronics engineer and currently a B1 aircraft maintenance engineer at EgyptAir), to get his feedback on my circuit setup. Huge shout out to him! He was super supportive, though he made it clear he won’t give me direct shortcuts on the electronics. He wants me to learn through trial and error, but he promised he’d step in and tell me if anything I wired is genuinely dangerous or going to go kaboom. If it’s safe, he’s letting me figure out the best way on my own, which I really respect.

Now it's time to actually get the funding sorted and get my hands on the physical parts...


---

## 📌 Daily Log Updates

### Aug 18th, 2026
Today I worked on this GitHub repo to make it presentable.

### Aug 20th, 2026
Today I'm going to open a USD account so I can receive the funding and start building it IRL. Also spending time today updating those faulty schematics from the first Fritzing run so everything is clean and ready. and maybe check the post office on my way cuz my stickers are stuck there lol.
