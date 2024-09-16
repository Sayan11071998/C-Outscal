#include <iostream>
#include <ctime>

using namespace std;

void gameStory(){
    system("clear");

    cout << "Hello and Welcome to Attack on Titan!" << endl;
    cout << "-------------------------------------" << endl;
    cout << "• In a world ravaged by colossal giants, humanity teeters on the brink of extinction." << endl;
    cout << "• The last remnants of civilization cling to existence within massive, towering walls, shielded from the monstrous Titans that roam the land." << endl;
    cout << "• The walls have protected humanity for generations, but the peace they offer is a fragile illusion." << endl;
    cout << "• Your journey begins in the heart of this beleaguered world. As a new recruit in the elite Survey Corps, you are tasked with a critical mission: to uncover the truth behind the Titans and reclaim humanity's lost freedom." << endl;
    cout << "• Rumors whisper of a hidden power that could change the tide of battle — a power buried deep within the Titans themselves." << endl;
    cout << "• But the path ahead is fraught with danger. Titans lurk beyond the walls, their ferocious hunger and unrelenting strength making every step a perilous gamble." << endl;
    cout << "• You must navigate the treacherous battlefield, harnessing the advanced maneuvering gear and honing your combat skills to survive." << endl;
    cout << "• As you fight to protect the last vestiges of humanity, you will uncover secrets that could shatter everything you thought you knew about the Titans and the world itself." << endl;
    cout << "• Will you be the hero who leads humanity to victory, or will you become another lost soul in the shadow of the Titans?" << endl;
    cout << "• Prepare yourself — the battle for survival begins now. Choose your destiny wisely!" << endl;
    cout << "************************************************************************************************************************************************" << endl;
    cout << endl;
}

class Player{
    public:
        Player(){
            cout << "• Hello! I am Eren Yeager. Let me tell you my story!" << endl;
            cout << "• The walls have always been our prison, but I refuse to live in fear any longer." << endl;
            cout << "• Every Titan I see is a reminder of the world that was stolen from us." << endl;
            cout << "• I will fight to my last breath to uncover the truth and free humanity from these chains." << endl;
            cout << "• With every battle, I inch closer to my goal — to see the day when we can live without fear of the Titans." << endl;
            cout << "• This is not just a fight for survival; it's a fight for our freedom and our future." << endl;
        }

        int GetHealth(){
            return health;
        }

        int GiveDamage(){
            srand(time(0));
            int randomDamage = (rand() % (maxAttackPower - minAttackPower + 1) + minAttackPower);

            return randomDamage;
        }

        void Takedamage(int damage){
            if(health > 0){
                cout << "Careful!! Eren has received a critical damage." << endl;
                cout << "Titans are dealing a damage of " << damage << "to Eren!!" << endl;
                health -= damage;
                cout << "Eren's current health after receiving the damage is : " << health << endl;
            } else{
                cout << "Eren Died!!!" << endl;
            }
        }

        void Heal(){
            srand(time(0));
            int randomHeal = (rand() % (maxHealingPower - minHealingPower + 1) + minHealingPower);

            health += randomHeal;
            cout << "Eren healed with HP of " << randomHeal << endl;
            cout << "Eren's health after healing is : " << health << endl;
        }

    private:
        int health = 100;
        int maxAttackPower = 20;
        int minAttackPower = 5;
        int maxHealingPower = 30;
        int minHealingPower = 10;
};

int main()
{
    gameStory();

    char userInput;
    do{
        cout << "Press S to start the game or any other key to exit!!" << endl;
        cin >> userInput;

        if(userInput == 'S' || userInput == 's'){
            Player eren = Player();
        } else{
            cout << "Thanks for playing Attack on Titam!!" << endl;
        }

    } while (userInput == 'S' || userInput == 's');
    
    return 0;
}