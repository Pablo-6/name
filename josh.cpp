#include <iostream>
using namespace std;

class dice { // The class
public:      // Access specifier
  int numberofDiceRolled;
  int diceSum = 0;
  int dieType;
  string combineDice;
  dice(int x, int y, string z) { // Constructor with parameters
    numberofDiceRolled = x;
    dieType = y;
    combineDice = z;
  }
  void roll() {
    if (combineDice == "y") {
      for (int x = 0; x < numberofDiceRolled; x++) {
        diceSum += rand() % dieType + 1;
      }
      cout << "The sum of what you rolled is: ";
      cout << diceSum;
    }
    if (combineDice == "n") {
      for (int x = 0; x < numberofDiceRolled; x++) {
        cout << "You rolled: ";
        cout << rand() % dieType + 1;
        cout << "\n";
      }
    }
  }
};

int main() {
  int numberofDiceRolled;
  int dieType;
  string combineDice;
  cout << "How many dice do you want to roll?\n";
  cin >> numberofDiceRolled;
  cout << "What kind of die do you want to roll?\n";
  cin >> dieType;
  cout << "Do you want to combine the numbers rolled by the die or have a "
          "list? Type y or n.\n";
  cin >> combineDice;

  dice die1(numberofDiceRolled, dieType, combineDice);
  die1.roll();
}