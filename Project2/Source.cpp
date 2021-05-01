#include <iostream>
#include <cstdlib>
#include <windows.h>
#include "MyForm.h"
#include "RtMidi.h"
using namespace Project2;
using namespace std;

RtMidiOut* midiout;
std::vector<unsigned char> message;
int octave;

void Project2::MyForm::initialize()
{
    message.push_back(192);
    message.push_back(0);
    midiout->sendMessage(&message);
    message[0] = 176;
    message[1] = 7;
    message.push_back(127);
    midiout->sendMessage(&message);
    octave = 4;
}

void Project2::MyForm::setInstrument(int instrument)
{
    message[0] = 192;
    message[1] = instrument;
    midiout->sendMessage(&message);
}

void Project2::MyForm::setVolume(int volume)
{
    message[0] = 176;
    message[1] = 7;
    message[2] = volume;
    midiout->sendMessage(&message);
}

void Project2::MyForm::noteOn(int note)
{
    message[0] = 144;
    message[1] = note;
    message[2] = 90;
    midiout->sendMessage(&message);
}

void Project2::MyForm::noteOff(int note)
{
    message[0] = 128;
    message[1] = note;
    message[2] = 40;
    midiout->sendMessage(&message);
}

[STAThreadAttribute]

int main() {
    //Hides the Console 
    //Comment out to debug
    FreeConsole();
    
    MyForm mf;
    midiout = new RtMidiOut();

    int currentKey = -1;
    bool keyPressed = false;

    unsigned int nPorts = midiout->getPortCount();
    if (nPorts == 0)
    {
        cout << "No ports available!\n";
        goto cleanup;
    }

    midiout->openPort(0);
    mf.initialize();
	mf.ShowDialog();

cleanup:
    delete midiout;
    
    return 0;
}
