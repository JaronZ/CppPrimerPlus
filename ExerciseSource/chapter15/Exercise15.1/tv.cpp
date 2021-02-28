// tv.cpp -- methods for the Tv class (Remote methods are inline)
#include <iostream>
#include "tv.h"

bool Tv::volup() {
	if (volume < MaxVal) {
		volume++;
		return true;
	}
	else 
		return false;
}

bool Tv::voldown() {
	if (volume > MinVal) {
		volume--;
		return true;
	}
	else
		return false;
}

void Tv::chanup() {
	if (channel < maxchannel)
		channel++;
	else
		channel = 1;
}

void Tv::chandown() {
	if (channel > 1)
		channel--;
	else
		channel = maxchannel;
}

void Tv::settings() const {
	using std::cout;
	using std::endl;
	cout << "TV is " << (state == Off? "Off" : "On") << endl;
	if (state == On) {
		cout << "Volume settings = " << volume << endl;
		cout << "Channel setting = " << channel << endl;
		cout << "Mode = "
			<< (mode == Antenna ? "antenna" : "cable") << endl;
		cout << "Input = "
			<<(input == TV ? "TV" : "DVD") << endl;	
	}
}

void Tv::set_restate(Remote & rt) {
	if (ison()) {
		rt.state = (rt.state == Remote::Interactive) ? 
				Remote::Regular : Remote::Interactive;
	}
}

void Tv::show_restate(Remote & rt) {
	if (rt.state == Remote::Regular)
		std::cout << "The Remote is in regular mode." << std::endl;
	else
		std::cout << "The remote is in interactive mode." << std::endl;
}
