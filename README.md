# ✧ Lunaria: Arena of the Star Maiden ✧

Hey! Welcome to **Lunaria**, a mini top-down action arena RPG I built. It started out as a native Windows desktop game written in pure C++ using Win32 GDI, and I also ported it over to HTML5 Canvas so anyone can just click and play it right in their browser without installing anything.

---

## 🎮 Play or Download

* 🌐 **[Play it in your browser here](https://knmontano.github.io/Lunaria/)**
* 💻 **[Download the Windows .exe](https://raw.githubusercontent.com/knmontano/Lunaria/main/lunaria.exe)** (if you'd rather run the native build locally)

---

## 🕹️ Controls

| Key | What it does | Notes |
| :--- | :--- | :--- |
| `W`, `A`, `S`, `D` / Arrows | Move around | She turns and animates depending on where you walk |
| `Spacebar` | Astral Slash | Basic sword attack (quick 0.3s cooldown) |
| `Q` | Starlight Nova | AOE holy burst around you *(unlocks at Lv. 2)* |
| `R` | Eclipse Ray | Piercing laser beam straight into the boss *(unlocks at Lv. 3)* |
| `E` | Drink Potion | Heals you based on your level |
| `1` - `4` | Buy Upgrades | Only works inside the Sanctuary shop |
| `Enter` | Start / Resume | Starts game, leaves shop, or restarts after you die |

---

## ⚔️ How the Game Works

The goal is pretty straightforward: survive wave after wave of rivals in the arena while upgrading your stats.

### 1. Scaling Boss Encounters
Every time you defeat a rival champion, you get gold and EXP, and the next rival spawns right away. 
* Rivals level up every 2 wins (`1 + Wins / 2`).
* As they level up, they get way more HP, hit harder, and move faster.

### 2. Rival Weapons
Each rival randomly rolls one of three weapons when they spawn, so you have to adjust your spacing:
* **Void Scythe**: Decent reach with a wide curving swing.
* **Blood Cleaver**: Shorter range, but hits like a truck.
* **Obsidian Spear**: Very long poke range, so you have to weave in and out to dodge.

### 3. Minions (Shadow Thralls)
Starting at Rival Level 2, the boss won't fight alone—up to 3 mini minions spawn with them. They will swarm you to chip away at your HP while you're busy dodging the boss. Killing them gives extra gold and EXP.

### 4. Fairy Companion (Starlight Sylph)
You can summon a little fairy buddy in the Sanctuary for **50g**. She hovers behind your shoulder and automatically shoots radiant bolts at nearby minions and bosses every 0.75 seconds. You can keep upgrading her tier for more damage!

### 5. Level-Up Sanctuary
Whenever your EXP bar fills up, the battle pauses and drops you into the Sanctuary shop where you can spend your coins before the next round:
* **[1] Hone Sword (35g)**: +7 Attack
* **[2] Enhance Armor (30g)**: +30 Max HP + heals you to full
* **[3] Brew Potion (20g)**: +1 extra health potion charge
* **[4] Summon / Empower Fairy (50g)**: Unlocks or buffs your fairy companion
* Press **`Enter`** whenever you're ready to jump back into the fight.

---

## 💻 Tech Details

* **Windows Version**: C++17 using pure Win32 API and double-buffered GDI rendering (no bulky external game engines).
* **Web Version**: HTML5 `<canvas>` and vanilla JavaScript.