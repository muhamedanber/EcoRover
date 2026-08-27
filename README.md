# EcoRover
A motorized recycling bin targeting food courts with a built-in fridge to store food left-overs so other people can use it. Helping saving our planet and increasing social Interdependence (A Stardance project)

![EcoRover Hero](./assets/ecorover-hero.png)

<div align="center">
  <img src="./assets/logo.png" alt="EcoRover Logo" height="45" />
  &nbsp;&nbsp;
    <img src="./assets/ALogo.png" alt="Anber Logo" height="45" />
  &nbsp;&nbsp;
  <img src="./assets/mbh.png" alt="Made by Human" height="32" />
  &nbsp;&nbsp;
  <img src="https://img.shields.io/badge/Made%20in-Egypt-green?style=flat-square" alt="Made in Egypt" height="32" />
</div>
    &nbsp;&nbsp;

  <div align="center">
  <a href="https://creativecommons.org/licenses/by-nc/4.0/"><img src="https://img.shields.io/badge/License-CC%20BY--NC%204.0-lightgrey.svg" alt="CC BY-NC 4.0"></a>
</div>

</div>

> **Note on AI Usage:**  about the usage of AI: The AI is being used in this project to generate ideas, explain and debug. However, it's not used to create parts of the project that require creativity, design and construction. Also, the AI is not used more than 10% of the total project. Which counts as MADE BY HUMAN.

> **For whoever reviwing the proj.:**  Thank you for reading all of this and reconceder the funding, I've resolved most of the notes but please keep in mind that in egypt it's so hard to get aliexpress in here. like apart from the crazy long shiping time it probably wont pass the customs or pass it after making me pay a big tax. so I'll use the sources i used and the egyptian pound is already too cheap compared to the USD (0.020 usd for 1 egyptian pound). thanks again.

> **The currnt state: waiting for funding, View [`JOURNAL.md`](./JOURNAL.md)**

---

## 1sttt Quick Start
Since EcoRover is an embedded hardware project, you can explore the complete system architecture, hardware schematics, and project progression directly through the documentation:

1. **View the CAD & Wiring Schematics:** Check out the `/CAD and structure` and `/Electronics` directory for Fusion 360 exports and Fritzing circuit diagrams.
2. **soon**
3. **Track Development:** Read [`JOURNAL.md`](./JOURNAL.md) for complete devlogs and my thoughts on everything <3.

---

## 2nddd Project Goals

1. **Support Youth Led Egyptian Projects:** Proving what young egyptian engineers can build from the ground up.
2. **Sustainable Development Goals:** Promote both global and local sustainability by aligning with UN Sustainable Development Goals (SDGs 2, 8, 9, 11, 12, and 13).
3. **Developing Social Solidarity:** Protecting human dignity while reducing food waste by making leftover food accessible without friction or embarrassment.
4. **Empower Human Intelligence:** using AI merely as a tool to increase productivity rather than as a source of creativity, since this project was developed with less than 10% AI assistance.
5. **Protect the Planet:** Help protect the planet by removing organic waste and recyclables from landfills in order to reduce CO2 emissions and tackle environmental waste.

---

## 3rddd Key Features

* The scheme which respects dignity includes an integrated, temperature controlled compartment specifically for food court leftovers, allowing people who need food to take meals without having to ask.
* The smart autonomous navigation system makes use of 8 HC-SR04 ultrasonic sensors, with each 2 sensors being assigned to the north, south, east, and west directions in order to achieve complete 360-degree obstacle avoidance in crowded areas.
* The system uses a Thermoelectric Cooler, specifically a TEC1-12706 Peltier cooler, which is operated through a 12V relay module to power an insulated storage compartment so that the food remains fresh (Not food grade yet lol but just keep reading).
* 4 Way Waste Sorting multi hole trash intake system for easy categorization.
* Safety and power management features include an inline fuse protection circuit, a main hardware rocker switch for cutting off power instantly, as well as several access panels for maintenance and latches in case of an emergency -though God forbid that happens-.
