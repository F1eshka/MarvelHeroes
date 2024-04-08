#include <iostream>
using namespace std;

class Superpower abstract {
public:
	virtual void UseSuperPower() = 0;
};

class Flight abstract : public Superpower {
public:
	virtual void UseSuperPower() override {
		cout << "RedBull give wiiiiings\n";
	}
};

class SuperSpeed abstract : public Superpower {
public:
	virtual void UseSuperPower() override {
		cout << "Use Suuuuuuuuuuper Speeeeed!!!!!!!\n";
	}
};

class SuperForce : public Superpower {
public:
	virtual void UseSuperPower() override {
		cout << "I AM THE MOST STROOONG\n";
	}
};

class RhythmSense abstract : public Superpower {
public:
	virtual void UseSuperPower() override {
		cout << "We gonna dance UHYYYYYYYYY\n";
	}
};

class SuperIntelligence : public Superpower {
public:
	virtual void UseSuperPower() override {
		cout << "Geniy, Playboy, Milliarder, Filantrop\n";
	}
};

class Illusion : public Superpower {
public:
	virtual void UseSuperPower() override {
		cout << "Brother, u r never will be better than me\n";
	}
};

class Good abstract {
public:
	virtual void LifePurpose() {
		cout << "Make this boring world better\n";
	}
};

class Bad abstract {
public:
	virtual void LifePurpose() {
		cout << "Make this boring world more funny\n";
	}
};

class Race abstract {
public:
	virtual void Race1() {
		cout << "Human\n";
	}
	virtual void Race2() {
		cout << "NotHuman\n";
	}
};

class GodOrNope abstract {
public:
	virtual void Skill1() {
		cout << "Can die\n";
	}
	virtual void Skill2() {
		cout << "Can too, but no\n";
	}
};

class Superhero abstract : public Race, public Good, public Superpower {
public:
	virtual void Name() = 0;
	virtual void UseSuperPower() = 0;
};

class Grut : public Superhero, public Race , public Good, public GodOrNope {
public:
	void Name() override {
		cout << "I am Groot\n";
	}

	void UseSuperPower() override {
		cout << "Use Groot's abilities...\n";
	}
};

class Tor : public Superhero, public Race, public Good, public Flight {
public:
	void Name() override {
		cout << "I am Thor a god of molniya!\n";
	}

	void UseSuperPower() override {
		cout << "Use Thor's abilities\n";
	}
};

class IronMan : public Superhero, public Race, public Good, public SuperIntelligence {
	void Name() override {
		cout << "I am Iron Man, and i'm smarter and more handsome than you, my friend\n";
	}

	void UseSuperPower() override {
		cout << "Use Iron Man's abilities\n";
	}
};

class Loki : public Superhero, public Race, public Bad, public Illusion {
	void Name() override {
		cout << "I am Loki, and i'm obizhen na brata i ya ploxoy\n";
	}

	void UseSuperPower() override {
		cout << "Use Loki's abilities\n";
	}
};


int main() {
	Superhero* superheroes[4];
	superheroes[0] = new Grut;
	superheroes[1] = new Tor;
	superheroes[2] = new IronMan;
	superheroes[3] = new Loki;

	cout << "Superheroes who so smart:\n";
	for (int i = 0; i < 3; ++i) {
		if (dynamic_cast<SuperIntelligence*>(superheroes[i])) {
			superheroes[i]->Name();
			superheroes[i]->UseSuperPower();
			cout << "\n";
		}
	}
}