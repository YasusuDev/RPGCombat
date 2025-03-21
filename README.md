# RPGCombat

## Overview

This project is a study of advanced AI combat mechanics in Unreal Engine 5 using C++. It leverages the **Gameplay Ability System (GAS)**, **Behavior Trees**, **AI Perception**, **Motion Warping**, and **Damage Effects** to create a dynamic and engaging AI system for RPG combat scenarios.

---

## Features

- **AI Perception System**: Enables enemies to detect and react to players and other entities.
- **Behavior Tree (BT) AI Logic**: Implements decision-making and combat strategies.
- **Gameplay Ability System (GAS)**: Handles AI abilities, damage application, and effect management.
- **Melee Combat System**: AI can engage in close-range combat with dynamic attack behaviors.
- **Motion Warping**: Enhances AI movement fluidity and responsiveness.
- **Target Awareness & Decision Making**: AI evaluates the threat level of different targets.

---

## Key Components

### Core AI Logic
- **AI Perception**: For enemy awareness.
- **Behavior Trees and Blackboards**: For decision-making.
- **Observer Aborts**: Dynamically adjust behavior based on real-time conditions.

### Combat Mechanics
- **Enemy Melee Ability Execution**: Allows AI to perform dynamic close-combat actions.
- **Ability Activation**: Based on **Gameplay Tags** for skill management.
- **Melee Hit Detection and Damage Application**: Ensures accurate combat interactions.
- **Dynamic Motion Warping**: Smooths AI's repositioning during combat.

### Movement & Adaptability
- **Dynamic Target Orientation**: AI adjusts its facing to target automatically.
- **Motion Warping**: Facilitates smooth movement and combat transitions.
- **AI Rotation During Combat**: Ensures fluid transitions between combat stances.

---

## License

This project is licensed under the **MIT License** - see the [LICENSE](LICENSE) file for details.

