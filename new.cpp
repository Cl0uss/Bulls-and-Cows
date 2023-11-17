#include <iostream>
#include <unistd.h>
#include <cstdlib>
#include <ctime>
#include <string>
#include <random>
using namespace std;
void game(string targetWord)
{
string userWord;
cout<<"Write your guess: ";
cin>>userWord;
if (userWord.size()!=5)
{
cout<<"Wrong length!\n";
return game(targetWord);
}
//continue from here; need to write double for loop to check for getting same letters
}
int main()
{
srand(time(NULL));
//
random_device rd;
mt19937 gen(rd());
uniform_int_distribution<> dis(0,170);
int random=dis(gen);
//random number generator
string words[] = {"apple", "happy", "smile", "table", "story", "chair", "cloud", "green", "funny", "music", "dance", "puppy", "beach", "magic",
"color", "bunny", "swing", "robot", "fairy", "jelly", "sunny", "snack", "lucky", "dream", "giant", "ocean", "silly", "zebra", "daisy", "laser",
 "flame", "honey","river", "sugar", "dream", "cheer", "laugh", "chase", "spark", "spark", "happy", "globe", "melon", "peace", "cloud", "smile",
 "sweet", "peace","chirp", "candy", "frost", "grape", "heart", "happy", "jolly", "kitty", "light", "magic", "novel", "oasis", "peace", "quack",
 "robot", "silly","tiger", "upend", "vivid", "wings", "yummy", "zooey", "apple", "bunny", "comic", "dance", "elbow", "fairy", "girly", "happy",
 "inbox", "juice","kitty", "lucky", "mango", "novel", "oasis", "puppy", "quack", "robin", "sunny", "tiger", "umbra", "vivid", "whale", "yummy",
 "zebra", "abide","blink", "candy", "daisy", "elbow", "frost", "giant", "happy", "inbox", "jolly", "kitty", "laser", "melon", "novel", "oasis",
 "peace", "quack","robot", "silly", "tiger", "umbra", "vivid", "wings", "yummy", "zebra", "agile", "bunny", "comic", "dance", "elbow", "fairy",
 "girly", "happy","inbox", "juice", "kitty", "lucky", "mango", "novel", "oasis", "puppy", "quack", "robin", "sunny", "tiger", "umbra", "vivid",
 "whale", "yummy", "zebra", "apple","bunny", "comic", "dance", "elbow", "fairy", "girly", "happy", "inbox", "juice", "kitty", "lucky", "mango",
 "novel", "oasis", "puppy", "quack","robin", "sunny", "tiger", "umbra", "vivid", "whale", "yummy", "zebra"};
string targetWord=words[random];
}
