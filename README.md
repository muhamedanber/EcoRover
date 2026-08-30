# EcoRover
A motorized recycling bin targeting food courts with a built-in fridge to store food left-overs so other people can use it. Helping saving our planet and increasing social Interdependence (A Stardance project)

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

> **For whoever reviwing the proj.:**  Thank you for reading all of this and reconceder the funding, I've resolved most of the notes but please keep in mind that in egypt it's so hard to get aliexpress in here. like apart from the crazy long shiping time it probably wont pass the customs or pass it after making me pay a big tax. so I'll use the sources i used and the egyptian pound is already too cheap compared to the USD (0.020 usd for 1 egyptian pound). thanks again.

> **The currnt state: waiting for funding, View [`JOURNAL.md`](./JOURNAL.md)**

---

## 1sttt Quick Start
Since EcoRover is an embedded hardware project, you can explore the complete system architecture, hardware schematics, and project progression directly through the documentation:

1. **View the CAD & Wiring Schematics:** Check out the `/CAD and structure` and `/Electronics` directory for more Fusion 360 exports and Fritzing circuit diagrams, the below gives you a pretty good idea.
<table>
  <tr>
    <td><img src="https://github.com/user-attachments/assets/46e55735-1222-435d-970d-d8619384ef9e" alt="Bottom layer Render" width="200"/></td>
    <td><img src="https://github.com/user-attachments/assets/f48cd4de-e18d-4907-ae53-f126d614eb5d" alt="Mid layer Render" width="200"/></td>
    <td><img src="https://github.com/user-attachments/assets/5f5a462f-813f-4bd8-9edd-c99a1f32992f" alt="Top layer Render" width="200"/></td>
    <td><img src="https://github.com/user-attachments/assets/d44dcc96-5172-4fa3-884a-7797b22e75d7" alt="Full Figure Render" width="200"/></td>
    <td><img src="https://github.com/user-attachments/assets/cd211fa0-7bb2-4a7c-b59b-59fcfc9782f7" alt="Schem V2" width="200"/></td>
  </tr>
</table>

3. **Track Development:** Read [`JOURNAL.md`](./JOURNAL.md) for complete devlogs and my thoughts on everything <3 💖.

---

## 2nddd Project Goals

1. **🇪🇬 Support Youth Led Egyptian Projects:** Proving what young egyptian engineers can build from the ground up.
2. **🇺🇳 Sustainable Development Goals:** Promote both global and local sustainability by aligning with UN Sustainable Development Goals (SDGs 2, 8, 9, 11, 12, and 13).
3. **🫂 Developing Social Solidarity:** Protecting human dignity while reducing food waste by making leftover food accessible without friction or embarrassment.
4. **🧠 Empower Human Intelligence:** using AI merely as a tool to increase productivity rather than as a source of creativity, since this project was developed with less than 10% AI assistance.
5. **🌍 Protect the Planet:** Help protect the planet by removing organic waste and recyclables from landfills in order to reduce CO2 emissions and tackle environmental waste.

---

## 3rddd Key Features

* The scheme which respects dignity includes an integrated, temperature controlled compartment specifically for food court leftovers, allowing people who need food to take meals without having to ask.
* The smart autonomous navigation system makes use of 8 HC-SR04 ultrasonic sensors, with each 2 sensors being assigned to the north, south, east, and west directions in order to achieve complete 360-degree obstacle avoidance in crowded areas.
* The system uses a Thermoelectric Cooler, specifically a TEC1-12706 Peltier cooler, which is operated through a 12V relay module to power an insulated storage compartment so that the food remains fresh (Not food grade yet lol but just keep reading).
* 4 Way Waste Sorting multi hole trash intake system for easy categorization.
* Safety and power management features include an inline fuse protection circuit, a main hardware rocker switch for cutting off power instantly, as well as several access panels for maintenance and latches in case of an emergency -though God forbid that happens-.
