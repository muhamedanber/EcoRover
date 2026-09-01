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

## 📌 Daily Log Updates

### Jul 18th, 2026
Today I got this weird notification saying that I can't ship my project through stardance and I've to do it through outpost which got me confused cuz outpost is already over. i asked and they sent me a migration to outpost file only for my surprise that the file has been taken down, I'm really confused and A LOT others on slack but I wont stop the project's pace so I'm gonna continue using stardance to log hours untill they clearify more.


---

## Devlog #3: Pivot, Wiring Struggles, and Learning the Hard Way
– From Aug 13th to Aug 18th 2026 –

Alr, a lot has happened since Devlog 2!

First off, I traveled back to Egypt on August 13th, and the internet here is honestly making video editing a whole mission. I was originally using Google Vids and its AI auto-trimmer to cut out silences from my documentary footage, but uploading massive video files to Drive here completely destroys the internet plan and takes forever. I tried switching over to Premiere Pro (which my laptop usually handles pretty well), but it started lagging badly and making my laptop run super hot. After wasting about 3 hours trying to get it to run smoothly with zero luck, I decided to completely pivot: I’m setting aside the documentary video for now and focusing on keeping a detailed journal directly in this repo instead, uploading as many progress time-lapses here as I can.

On the hardware side, I started modeling the electronics in Fritzing. Even though it’s only my second time using it, the connections are insanely annoying to trace out. I’m pretty sure some of the schematic lines look wrong on paper, but I have the whole circuit clear in my mind, so I just modeled it anyway to visualize the layout. I’ll make sure everything is hooked up correctly when I actually assemble the physical board.

I also finalized the Bill of Materials (BOM) and did some price comparisons across different stores. To keep things safe, I added a few crucial safety measures like an inline fuse and a rocker switch so nothing accidentally shorts out or catches fire.

Speaking of not blowing things up, I reached out to a fellow engineer, Mustafa Qusit (a mechatronics engineer and currently a B1 aircraft maintenance engineer at EgyptAir), to get his feedback on my circuit setup. Huge shout out to him! He was super supportive, though he made it clear he won’t give me direct shortcuts on the electronics. He wants me to learn through trial and error, but he promised he’d step in and tell me if anything I wired is genuinely dangerous or going to go kaboom. If it’s safe, he’s letting me figure out the best way on my own, which I really respect.

Now it's time to actually get the funding sorted and get my hands on the physical parts...


---

## 📌 Daily Log Updates

### Jul 31st, 2026
Today I got another notification saying they've resolved the hardwear shiping through stardance and i can continue using it to ship and fund my project. also they've shifted there timelapsing to Laps which is a seprate platform that connects to hackatime and lookout instead of the old built-in one they were using.

### Aug 18th, 2026
Today I worked on this GitHub repo to make it presentable.

### Aug 20th, 2026
Today I'm going to open a USD account so I can receive the funding and start building it IRL. Also spending time today updating those faulty schematics from the first Fritzing run so everything is clean and ready. and maybe check the post office on my way cuz my stickers are stuck there lol.

### Aug 22nd, 2026
Alright so the post office told me to fudge of and they don't have my stuff so it's gone. and today i applied for funding which didn't ask for a bank account yet so idk why i didn't do it earlier, I'll work again on the electronics to make it more logical and add the safty messures i wanted to add.

### Aug 24th, 2026
Today A LOTTT happened, First I recived my card and my USD bank account got activated, only for me to find out that I don't need one and the fund is a card grant 🤡. Also the guy who's handling the grants i heard he's out of office but i'm supposed to get it in a week. but that teaches me that i really need to stop making asumption and actully check the process of everything before I take any actions. tbh my fire started diming, like it got streatched soooo long that lol i got bored. but inshallah it will be finished by the end of next week -I hope-. Also i'm gonna reach out to verynile which is is an Egyptian social initiative that cleans plastic waste from the Nile River using specialized boats and volunteer events. The project pays local fishermen to collect trash and employs local women to upcycle the plastic into new products. Through these cleaning and recycling efforts, they protect the environment while supporting locals economically -Espicially women-, and they have a really cool CNC machine that engraves on the plastic they produce, and since our visions really overlap in multiple ways (Egyptian projects, Sustainability, Social solidarity, and saving the planet and there designs are human made -by Qorsaya women- and not AI.) I want them to create the plate that will have my logo and the project's and Made In Egypt emblem on so I can attatch to the rover and maybe even the whole chasee if they're up to it 🫣. Lastly I realized i've not write the project goals which are 5 and are included in the readme.md now. I realized that i forget timelapsing a lot of times, like theres almost 5h total time that isn't lapsed 🤦🏻‍♂️.

### Aug 27th, 2026
well, well, well. they sent me this today (good work! however, your README seems to be ai-generated; please rewrite it without AI! your BOM prices also aren't in USD, and you should be able to source from cheaper places like aliexpress. make sure to add images in the README as well! good work so far!) I mean i can do everything mentioned but that aliexpress part..... ughhhh. well i can't due to two things. 1st is the crazy long shipping thime for Egypt, + This site is extreamly moderated in here, like probably it wont enter egypt lol.

### Aug 29th, 2026
They still didn't reply with the funding after i resolved the problems so i reached out to the head of hardware@stardance. they still didn't reply. In the meantime i really dont have anything to do. my personal life is a mess since i started the project and it's getting messier. so i really hope i finish this project ASAP. i still dont even know if im getting back to ksa or not yet. so the timeline is really not guaranteed. Also I've contacted yasmin@verynile, she's a really nice woman but the inconsiderate me contacted her on friday 🤦🏻‍♂️ (it's a holiday in egypt and the arab world like sunday and saturday in the US/Europe). but she was really nice and understanding and told me to contact her sunday (tomorrow). so i'll do so. for today I had a plan to keep this project opensource for individuals and tinkerers, but i dont want any commercial use without my authorization, i was planning to register it as a utility model but then i cancelled cuz its too much of a hassle. so I'll get a DOI and use CC-BY-NC for everyting apart from the code and MIT for the code. and thats it for today.

### Aug 30th, 2026
Hey, its me again, i just woke up to this message (Hello!

Congrats on this project! This is a really good idea that genuinely helps our planet. However, you are missing the firmware for your project. In addition, you are also missing the .step files in the repo for your CAD.

Lastly, make sure that you are following the file structure for submitting hardware projects. You can check it out here: https://stardance.hackclub.com/resources/shipping-hardware

Once these changes are made, and everything is good, we will take another look, and if everything is good, you will be approved! :D). the goal is simple right? get a pre-release firmwear and a STEP file, WRONG!, cuz for somereason fusion panicked and s**t itself when i lunched it and now its been "restoring" for the last 20 mins. i got a firmwear (some poor guy's opensource code for obsticle detection rover that i ripped then modified with google's gemini) i really don't know if this is still made by human after what just happened cuz made by humans requiers 90%+ human work for the whole project but i mean the code itself is human written it just tweaked it and the script is one tiny thing in the whole project so fudge it tbh. Also I've contacted verynile again and they said they can't do the chasee for free cuz this is the work of the fishermen and the local women in the workshop but she'll see if they can make the plate and contact me again. ill finish fusion's drama and resubmet for funding and then continue sleeping.        ----- 3 hours later: didn't sleep but worked on the plates they gonna make and changed the licensing from CC-BY-NY 04 TO CC-BY-NY-SA 04 on here and zenodo.

### Aug 31st, 2026
Just got off the phone with Sama@VeryNile. they can do it for free yayyy 🎉. I'm really happy it worked out like this, im supposed to go pick it up by thursday and have a tour there, and for my luck it'll also be a volunteers day soooo maybe i'll go 😁 (IDK really yet but i guess it'll be so much fun). thanks again VeryNile for your generosity and thanks stardance for making all of this possible. and for this I've added a note on the plate thanking both parties. with that being said, i guess thats it for today ill just follow up with Sama till we see what works with there CNC cuz they've a 3mm drilling bit which is too big for small details, the 1mm just breakes when they try to use it. 

### Sep 1st, 2026
Vibe edited the code (the original one was open source) but it's still the original code just with added futures not removing anything from the original one, and vectorized the design so the CNC machine can engrave it. Also i've wrote the devlog so i add the 7 hours i made. Also a lot of things went out of stock so I've to sacrifice things to pay for the most important or pay out of pocket.


---

## Devlog #4: Funding Loops, Licensing Hassles, and a Huge Local Win

– From Jul 31st to Sep 1st 2026 –

Man, August was an absolute administrative marathon.

First came the banking wild goose chase. I went through the whole process of opening a brand new USD bank account in Egypt specifically to receive the project grant, only to find out right after activation that funding was being issued as a card grant anyway 🤡. Total facepalm moment, but a good reality check to stop making assumptions before jumping through hoops.

To make matters more frustrating, the grant review hit a few speedbumps. Stardance flagged my initial README as AI-generated and asked me to clean it up, fix my BOM pricing into USD, link standard STEP files, and push the initial firmware to the repo. I also ended up building off an open source obstacle detection script to get the base firmware pre release ready. Between waiting on grant replies, keeping up with these repo adjustments, and dealing with some heavy life updates floating in the background, things got pretty exhausting and its been already 8 days.

Luckily, the highlight of this entire month came from reaching out to VeryNile. If you don’t know them, they are a fantastic Egyptian initiative that cleans plastic waste from the Nile using local boats, pays local fishermen to collect the waste, and employs local women from Qorsaya island to upcycle that plastic into new materials. They have a CNC machine that engraves directly on their recycled plastic sheets.

Since our missions align so closely on sustainability and local impact, I wanted to collaborate with them on a custom plate for EcoRover that features our logos and a “Made in Egypt” emblem and some other logos. After a couple of calls with their team, Sama from VeryNile confirmed they would engrave and donate the custom plate for free! 🎉

with that the core design, licensing (CC-BY-NC-SA 4.0 for the hardware assets via Zenodo -to get a DOI- and MIT for the code), and local partnerships are locked in.

Next up: picking up the custom plate from Qorsaya and starting physical assembly!
