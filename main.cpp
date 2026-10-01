#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Character {
    std::string name;
    int hp;
    int maxHp;
    int attack;
    int gold;
};

void showStats(const Character& player, const Character& rival) {
    std::cout << "\n========================================\n";
    std::cout << "✦ " << player.name << "  HP: " << player.hp << "/" << player.maxHp 
              << " | Gold: " << player.gold << "g\n";
    std::cout << "⚔ " << rival.name  << "  HP: " << rival.hp  << "/" << rival.maxHp << "\n";
    std::cout << "========================================\n";
}

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    Character player = {"Lunaria", 100, 100, 25, 40};
    Character rival  = {"Freya the Frost Valkyrie", 80, 80, 15, 0};

    std::cout << "✧ LUNARIA: ARENA OF THE STAR MAIDEN (CLI Edition) ✧\n";
    std::cout << "A dark rival approaches the sacred ring!\n";

    while (player.hp > 0 && rival.hp > 0) {
        showStats(player, rival);
        std::cout << "Choose Action:\n";
        std::cout << "1. Astral Slash (Attack)\n";
        std::cout << "2. Starlight Nova (Skill - High DMG)\n";
        std::cout << "3. Drink Potion (+30 HP)\n";
        std::cout << "4. Flee Arena\n";
        std::cout << "> ";

        int choice = 0;
        std::cin >> choice;

        if (choice == 1) {
            int dmg = player.attack + (std::rand() % 6);
            rival.hp -= dmg;
            std::cout << "\n> You strike with your Astral Blade for " << dmg << " damage!\n";
        } else if (choice == 2) {
            int dmg = player.attack + 15 + (std::rand() % 10);
            rival.hp -= dmg;
            std::cout << "\n> Starlight Nova bursts forth, dealing " << dmg << " holy damage!\n";
        } else if (choice == 3) {
            int heal = 30;
            player.hp = std::min(player.maxHp, player.hp + heal);
            std::cout << "\n> You drink a star elixir and restore " << heal << " HP!\n";
        } else if (choice == 4) {
            std::cout << "\n> You retreated safely from the arena.\n";
            return 0;
        } else {
            std::cout << "\n> Invalid choice. You hesitated!\n";
        }

        // Rival counter-attack if alive
        if (rival.hp > 0) {
            int enemyDmg = rival.attack + (std::rand() % 5);
            player.hp -= enemyDmg;
            std::cout << "> " << rival.name << " attacks back for " << enemyDmg << " damage!\n";
        }
    }

    if (player.hp > 0) {
        std::cout << "\n✦ VICTORY! " << rival.name << " was defeated! ✦\n";
        std::cout << "You gained 35 Gold and brought light back to the arena!\n";
    } else {
        std::cout << "\n✕ DEFEAT! Lunaria has fallen in battle... ✕\n";
    }

    return 0;
}