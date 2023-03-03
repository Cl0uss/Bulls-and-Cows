#include <iostream> 
#include <string>
using namespace std;
int process(string target_word, string users_word)
{
    int bulls_count = 0;//считает сколько быков
    int cows_count = 0;//считает сколько коров
    int cows_count_save = 0;//чтобы избежать счёт одной буквы более 1 раза
    string target_word_save = target_word;
    if (target_word == users_word)
    {
        cout << "You guessed, CONGRATULATIONS!!!!";
        return 0;
    }
    else
    {
        for (int i = 0; i < 5; i++)
        {
            if (target_word[i] == users_word[i])
            {
                bulls_count++;//счёт быков
                target_word[i] = '!';
                users_word[i] = '*';
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int b = 0; b < 5; b++)
            {
                    if (cows_count_save != cows_count)
                    {
                        cows_count_save++;
                        break;
                    }
                    else if (target_word[i] == users_word[b])
                    {
                        cows_count++;//счёт коров
                        users_word[b] = '+';
                        target_word[i] = '-';
                    }
            }
        }
        cout << "Bulls = " << bulls_count << "   Cows = " << cows_count<<"\nEnter new guess: ";
        cin >> users_word;
        while (users_word.length!=5)
        {
            cout<<"\nWrong length! Try again\n";
            cin>>users_word;
        }
        return process(target_word_save, users_word);
    }
}
int main()
{
    srand(time(NULL)); // обнуление рандома
    int random_number = rand() % 149; // какой элемент из массива возьмёт код
    int random_number_for_switch = rand() % 2; // выбор рандомного бокса со словами
    string target_word;// секретное слово
    string users_word; // слово от игрока
    cout << "All words include only 5 letters\nEnter your guess: ";
    cin >> users_word;
    if (users_word.length() != 5)//проверка на количество букв
    {
        cout << "\nWrong quantity of letters\n\nWrite again\n\n";
        main();
    }
    // начало свитчей
    switch (random_number_for_switch)
    {
    case 0:
    { string words[] =
       {"abuse", "adult", "agent", "anger", "apple", "award", "basis", "beach", "birth", "block",
        "blood", "board", "brain", "bread", "break", "brown", "buyer", "cause", "chain", "chair",
        "chest", "chief", "child", "china", "claim", "class", "clock", "coach", "coast", "court",
        "cover", "cream", "crime", "cross", "crowd", "crown", "cycle", "dance", "death", "depth",
        "doubt", "draft", "drama", "dream", "dress", "drink", "drive", "earth", "enemy", "entry",
        "error", "event", "faith", "fault", "field", "fight", "final", "floor", "focus", "force",
        "frame", "frank", "front", "fruit", "glass", "grant", "grass", "green", "group", "guide",
        "heart", "henry", "horse", "hotel", "house", "image", "index", "input", "issue", "japan",
        "jones", "judge", "knife", "porno", "layer", "level", "lewis", "light", "limit", "lunch",
        "major", "march", "match", "metal", "model", "money", "month", "motor", "mouth", "music",
        "night", "noise", "north", "novel", "nurse", "offer", "order", "other", "owner", "panel",
        "paper", "party", "peace", "peter", "phase", "phone", "piece", "pilot", "pitch", "place",
        "plane", "plant", "plate", "point", "pound", "power", "press", "price", "pride", "prize",
        "proof", "queen", "radio", "range", "ratio", "reply", "right", "river", "round", "route",
        "rugby", "scale", "scene", "scope", "score", "sense", "shape", "share", "sheep", "sheet"};
        target_word = words[random_number];
        process(target_word, users_word);
        break;
    }
    case 1:
    {
        string words[] = 
       {"shift", "shirt", "shock", "sight", "simon", "skill", "sleep", "smile", "smith", "smoke",
        "sound", "south", "space", "speed", "spite", "sport", "squad", "staff", "stage", "start",
        "state", "steam", "steel", "stock", "stone", "store", "study", "stuff", "style", "sugar",
        "table", "taste", "terry", "theme", "thing", "title", "total", "touch", "tower", "track",
        "trade", "train", "trend", "trial", "trust", "truth", "uncle", "union", "unity", "value",
        "video", "visit", "voice", "waste", "watch", "water", "while", "white", "whole", "woman",
        "world", "youth", "admit", "adopt", "agree", "allow", "alter", "apply", "argue", "arise",
        "avoid", "begin", "blame", "break", "bring", "build", "burst", "carry", "catch", "cause",
        "check", "claim", "clean", "clear", "climb", "close", "count", "cover", "cross", "dance",
        "doubt", "drink", "drive", "enjoy", "enter", "exist", "fight", "focus", "force", "guess",
        "imply", "issue", "judge", "laugh", "learn", "leave", "let's", "limit", "marry", "match",
        "occur", "offer", "order", "phone", "place", "point", "press", "prove", "raise", "reach",
        "refer", "relax", "serve", "shall", "share", "shift", "shoot", "sleep", "solve", "sound",
        "speak", "spend", "split", "stand", "start", "state", "stick", "study", "teach", "thank",
        "think", "throw", "touch", "train", "treat", "trust", "visit", "voice", "waste", "watch"
        };
        target_word = words[random_number];
        process(target_word, users_word);
        break;
    }
    case 2:
    {
        string words[]=
       {"aback", "abaft", "aboon", "about", "above", "accel", "adown", "afoot", "afore", "afoul",
        "after", "again", "agape", "agogo", "agone", "ahead", "ahull", "alife", "alike", "aline",
        "aloft", "alone", "along", "aloof", "aloud", "amiss", "amply", "amuck", "apace", "apart",
        "aptly", "arear", "aside", "askew", "awful", "badly", "bally", "below", "canny", "cheap",
        "clean", "clear", "coyly", "daily", "dimly", "dirty", "ditto", "drily", "dryly", "dully",
        "early", "extra", "false", "fatly", "feyly", "first", "fitly", "forte", "forth", "fresh",
        "fully", "funny", "gaily", "gayly", "godly", "great", "haply", "heavy", "hella", "hence",
        "hotly", "icily", "infra", "intl.", "jildi", "jolly", "laxly", "lento", "light", "lowly",
        "madly", "maybe", "never", "newly", "nobly", "oddly", "often", "other", "ought", "party",
        "piano", "plain", "plonk", "plumb", "prior", "queer", "quick", "quite", "ramen", "rapid",
        "redly", "right", "rough", "round", "sadly", "secus", "selly", "sharp", "sheer", "shily",
        "short", "shyly", "silly", "since", "sleek", "slyly", "small", "so-so", "sound", "spang",
        "srsly", "stark", "still", "stone", "stour", "super", "tally", "tanto", "there", "thick",
        "tight", "today", "tomoz", "truly", "twice", "under", "utter", "verry", "wanly", "wetly",
        "where", "wrong", "wryly","abaft", "aboon",  "about", "above", "adown", "afore", "after"
        };
        target_word = words[random_number];
        process(target_word, users_word);
        break;
    }
    }
}
