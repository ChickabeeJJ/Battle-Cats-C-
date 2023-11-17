#include <iostream>

using namespace std;

long long int HP = 1;
long long int ATK = 1;
long long int DEF = 1;
long long int CatFood = 10;

int main() {
   string Welcome = "Welcome to The Knockoff Cats!";
   cout << Welcome;
   while (true) {
       string Stats;
       string Upgrade;
       string Choice;
       cout << "\n\nWould you like to view your cat's stats? (Yes or No): ";
       cin >> Stats;
       if (Stats == "Yes"||Stats == "yes"||Upgrade == "YES") {
           cout << "HP: " << HP << ", Attack: " << ATK << ", Defence: " << DEF << ", CatFood: " << CatFood;
       }
       cout << "\n\nWould you like to Upgrade any of your cat's stats? (Yes or No): ";
       cin >> Upgrade;
       if (Upgrade == "Yes"||Upgrade == "yes"||Upgrade == "YES") {
            string StatUpgrade;
            cout << "\nWhich stat would you like to upgrade? (ATK [10 Catfood], DEF [10 Catfood], HP [5 Catfood]): ";
            cin >> StatUpgrade;
            if (StatUpgrade=="ATK"||StatUpgrade=="atk") {
                if (CatFood>=10) {
                    ATK+=1;
                    CatFood-=10;
                    cout << "Upgrade succesful!\n";
                } else {
                    cout << "Not enough Catfood!\n";
                } 
            } 
            if (StatUpgrade=="DEF"||StatUpgrade=="def") {
                if (CatFood>=10) {
                    DEF+=1;
                    CatFood-=10;
                    cout << "Upgrade succesful!\n";
                } else {
                    cout << "Not enough Catfood!\n";
                }
            }
            if (StatUpgrade=="HP"||StatUpgrade=="hp") {
                if (CatFood>=5) {
                    HP+=1;
                    CatFood-=5;
                    cout << "Upgrade succesful!\n";
                } else {
                    cout << "Not enough Catfood!\n";
                }
            }
       } 
       cout << "\nWould you like to fight? (Yes or No): ";
            cin >> Choice;
            if (Choice == "Yes"||Choice == "yes") {
                string Stage;
                cout << "Choose a stage. [Singapore(Easy), Japan(Hard), Russia(Expert), Moon(Insane), Parade of the dead(Deadly)]: ";
                cin >> Stage;
                if (Stage == "Singapore") {
                    cout << "Minimum requirment: Attack=1, Defence=1, HP=1\n";
                    if (ATK>=1 && DEF>=1 && HP>=1) {
                        cout << "You Win! (+10 CatFood)";
                        CatFood+=10;
                    } else {
                        cout << "You Lose!";
                    }
                } 
                if (Stage == "Japan") {
                    cout << "Minimum requirment: Attack=3, Defence=3, HP=5\n";
                    if (ATK>=3 && DEF>=3 && HP>=5) {
                        cout << "You Win! (+25 CatFood)";
                        CatFood+=25;
                    } else {
                        cout << "You Lose!";
                    }
                }
                if (Stage == "Russia") {
                    cout << "Minimum requirment: Attack=6, Defence=5, HP=12\n";
                    if (ATK>=6 && DEF>=5 && HP>=12) {
                        cout << "You Win! (+50 CatFood)";
                        CatFood+=50;
                    } else {
                        cout << "You Lose!";
                    }
                }
                if (Stage == "Moon") {
                    cout << "Minimum requirment: Attack=10, Defence=9, HP=30\n";
                    if (ATK>=10 && DEF>=9 && HP>=30) {
                        cout << "You Win! (+100 CatFood)";
                        CatFood+=100;
                    } else {
                        cout << "You Lose!";
                    }
                }
                if (Stage == "Parade of the dead") {
                    cout << "Minimum requirment: Attack=99, Defence=99, HP=999\n";
                    if (ATK>=99 && DEF>=99 && HP>=999) {
                        cout << "You Win! (Now go beat daboo in the actual game lol)";
                        CatFood*=1.5;
                    } else {
                        cout << "You Lose!";
                    }
                }
            }
   }
}
