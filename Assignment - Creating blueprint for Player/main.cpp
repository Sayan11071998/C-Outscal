#include <iostream>

using namespace std;

void gameStory() {
    cout << "The world has changed beyond recognition." << endl;
    cout << "Once a thriving planet, it now lies in ruins, consumed by chaos." << endl;
    cout << "The ancient gods have long abandoned humanity, leaving only remnants of their once-great power scattered across the land." << endl;
    cout << "You, a lone warrior, have discovered a hidden secret — a forgotten temple, buried under the sands for centuries." << endl;
    cout << "Inside this temple lies the last hope for restoring peace: a mystical artifact with the power to reshape destiny itself." << endl;
    cout << "But beware, the artifact is guarded by dark forces, and only the strongest can survive its trials." << endl;
    cout << "Now, you must face these challenges, not just for yourself, but for the fate of the world." << endl;
    cout << "The journey ahead will be perilous, filled with traps, monsters, and otherworldly powers." << endl;
    cout << "Will you reclaim the artifact and bring balance back to the world, or will you fall like so many before you?" << endl;
    cout << "Your adventure begins now... Choose your path wisely!" << endl;
}


class Player{
    public:
        int health;
        int attack_power;
        Player(int Health, int Attack_Power) : health(Health), attack_power(Attack_Power) {};
};

int main()
{
    gameStory();

    Player player = Player(100, 20);

    return 0;
}