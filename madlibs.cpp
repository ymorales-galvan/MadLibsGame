//Yuliana Morales 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;


int main()
{

        string bodyPart;
        string place;
        string timeOfDay;
        int number;

  cout << "Enter a body part that you use to touch things,maybe your hand?: " << endl;
  cin >> bodyPart;
  cout << "Enter a place, anywhere in the world: " << endl;

  cin >> place;
  cout << "Enter a time of day: " << endl;
  cin >> timeOfDay;
  cout << "Enter a number: " << endl;
  cin >> number;

cout << "Once upon a time, in a world full of greatness, a " << bodyPart  << " hits a tree, while strolling down the street at " << place << " the most important time of day which is " << timeOfDay << " around " << number << endl;


  return 0;
}
