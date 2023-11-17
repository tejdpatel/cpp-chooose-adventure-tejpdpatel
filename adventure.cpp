#include <iostream>

using namespace std;

// Static variables for personality types
static int gossipGirl;
static int academicWeapon;
static int sloth;
static int modelStudent;

// Defining the functions
void question1();
void question2();
void question3();
void question4();
void question5();
void question6();
void question7();
void question8();

int main() {
  // Goes through the 8 questions
  cout << "Welcome to a day of Governor's School!" << endl;
  int choice;
  question1();
  question2();
  question3();
  question4();
  question5();
  question6();
  question7();

  // Variables for percentage points
  double w, x, y, z;

  // Calculates percetange points
  w = 12.5 * gossipGirl;
  x = 12.5 * modelStudent;
  y = 12.5 * sloth;
  z = 12.5 * academicWeapon;

  // Outputs the percentage points
  cout << "You are " << w << "% gossip girl." << endl;
  cout << "You are " << x << "% model student." << endl;
  cout << "You are " << y << "% sloth." << endl;
  cout << "You are " << z << "% academic weapon." << endl;

  return 0;
}

void question1() {
  int ch;
  cout << "You are going to Governor's School, do you..." << endl;
  cout << "1) Sit and cry in the car while listening to music." << endl;
  cout << "2) Go in early." << endl;
  cout << "3) Go to Cookout with your friends." << endl;
  cout << "4) Ride the Bus to Gov. School." << endl;
  cout << "5) Do Homework in the car." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    sloth++;
    break;
  case 2:
    modelStudent++;
  case 3:
    gossipGirl++;
  case 4:
    cout << "womp womp";
    modelStudent++;
    break;
  case 5:
    academicWeapon++;
    break;
  }
}

void question2() {
  int ch;
  cout << "You get to class, do you..." << endl;
  cout << "1) ChatGPT the assignment." << endl;
  cout << "2) Do the assignment by yourself." << endl;
  cout << "3) Immediately ask other people." << endl;
  cout << "4) Google the information." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    sloth++;
    break;
  case 2:
    modelStudent++;
    break;
  case 3:
    gossipGirl++;
    break;
  case 4:
    academicWeapon++;
    break;
  }
}

void question3() {
  int ch;
  cout << "You go to the vending machine, do you..." << endl;
  cout << "1) Get coffee" << endl;
  cout << "2) Get nothing." << endl;
  cout << "3) Get Hot Cheetos." << endl;
  cout << "4) Get Candy/Cookies." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    sloth++;
    break;
  case 2:
    modelStudent++;
    break;
  case 3:
    gossipGirl++;
    break;
  case 4:
    academicWeapon++;
    break;
  }
}

void question4() {
  int ch;
  cout << "You get to math, do you..." << endl;
  cout << "1) Watch the soccer world cup." << endl;
  cout << "2) Do work for other class." << endl;
  cout << "3) Take notes and answer questions." << endl;
  cout << "4) Nap in the back." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    gossipGirl++;
    break;
  case 2:
    academicWeapon++;
    break;
  case 3:
    modelStudent++;
    break;
  case 4:
    sloth++;
    break;
  }
}

void question5() {
  int ch;
  cout << "Math class ends, do you.." << endl;
  cout << "1) Go straight to research to work on math." << endl;
  cout << "2) Go to research to be on time." << endl;
  cout << "3) You're still asleep in class." << endl;
  cout << "4) Learn some more gossip in the hallway." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    academicWeapon++;
    break;
  case 2:
    modelStudent++;
    break;
  case 3:
    sloth++;
    break;
  case 4:
    gossipGirl++;
    break;
  }
}

void question6() {
  int ch;
  cout << "Research class starts, do you.." << endl;
  cout << "1) Answer Professor Weygand's Questions." << endl;
  cout << "2) Stay silent and do work." << endl;
  cout << "3) Play games on your phone." << endl;
  cout << "4) Talk in the back of class." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    modelStudent++;
    break;
  case 2:
    academicWeapon++;
    break;
  case 3:
    sloth++;
    break;
  case 4:
    gossipGirl++;
    break;
  }
}

void question7() {
  int ch;
  cout << "School ends, do you.." << endl;
  cout << "1) Go home and do homework." << endl;
  cout << "2) Nap." << endl;
  cout << "3) Go out with friends." << endl;
  cout << "4) Volunteering/Club activities." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    academicWeapon++;
    break;
  case 2:
    sloth++;
    break;
  case 3:
    gossipGirl++;
    break;
  case 4:
    sloth++;
    break;
  }
}

void question8() {
  int ch;
  cout << "You're at home, do you..." << endl;
  cout << "1) Go to bed at 10." << endl;
  cout << "2) Study math until 3 am." << endl;
  cout << "3) Scroll on tiktok until 2 am." << endl;
  cout << "4) You napped earlier and didn't wake up." << endl;
  cin >> ch;
  switch (ch) {
  case 1:
    modelStudent++;
    break;
  case 2:
    academicWeapon++;
    break;
  case 3:
    gossipGirl++;
    break;
  case 4:
    sloth++;
    break;
  }
}
