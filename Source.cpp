#include<iostream>
#include<string>
using namespace std;

class hearthStoneCard
{
public:
    string name;
    int mana;
    int attack;
    int health;
    void printInfo()
    {
        cout << "\nName: " << name << "\nMana: " << mana << "\t\tAttack: " << attack << "\tHealth: " << health << "\n";
    }
};

int main()
{
    hearthStoneCard c1;
    c1.name = "Clockwork Goblin"; c1.mana = 3; c1.attack = 3; c1.health = 3;

    hearthStoneCard c2;
    c2.name = "Devout Pupil"; c2.mana = 6; c2.attack = 4; c2.health = 5;

    hearthStoneCard c3;
    c3.name = "Ancient Void Hound"; c3.mana = 9; c3.attack = 10; c3.health = 10;

    hearthStoneCard c4;
    c4.name = "Ace Hunter Kreen"; c4.mana = 3; c4.attack = 2; c4.health = 4;

    c1.printInfo();
    c2.printInfo();
    c3.printInfo();
    c4.printInfo();
    return 0;
}