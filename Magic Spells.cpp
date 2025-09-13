#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Spell {
private:
    string scrollName;
public:
    Spell() {}
    Spell(string name) : scrollName(name) {}
    virtual void revealScrollName() {
        cout << scrollName << endl;
    }
    string name() {
        return scrollName;
    }
};

class Fireball : public Spell {
public:
    int power;
    Fireball(int power) : power(power) {}
};

class Frostbite : public Spell {
public:
    int power;
    Frostbite(int power) : power(power) {}
};

class Thunderstorm : public Spell {
public:
    int power;
    Thunderstorm(int power) : power(power) {}
};

class Waterbolt : public Spell {
public:
    int power;
    Waterbolt(int power) : power(power) {}
};

class SpellJournal {
public:
    static string journal;
    static string read() {
        return journal;
    }
};
string SpellJournal::journal = "";

void counterspell(Spell *spell) {
    if (Fireball *fb = dynamic_cast<Fireball*>(spell)) {
        cout << "Fireball: " << fb->power << endl;
    }
    else if (Frostbite *fr = dynamic_cast<Frostbite*>(spell)) {
        cout << "Frostbite: " << fr->power << endl;
    }
    else if (Thunderstorm *ts = dynamic_cast<Thunderstorm*>(spell)) {
        cout << "Thunderstorm: " << ts->power << endl;
    }
    else if (Waterbolt *wb = dynamic_cast<Waterbolt*>(spell)) {
        cout << "Waterbolt: " << wb->power << endl;
    }
    else {
        string spellName = spell->name();
        string journal = SpellJournal::read();
        int m = spellName.size(), n = journal.size();

        // DP to compute Longest Common Subsequence (LCS)
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (spellName[i - 1] == journal[j - 1])
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                else
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }

        cout << dp[m][n] << endl;
    }
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s;
        int power;
        cin >> s >> power;
        Spell *spell;
        
        if (s == "fire") {
            spell = new Fireball(power);
        }
        else if (s == "frost") {
            spell = new Frostbite(power);
        }
        else if (s == "water") {
            spell = new Waterbolt(power);
        }
        else if (s == "thunder") {
            spell = new Thunderstorm(power);
        }
        else {
            spell = new Spell(s);
            cin >> SpellJournal::journal;
        }

        counterspell(spell);
        delete spell;
    }
    return 0;
}

