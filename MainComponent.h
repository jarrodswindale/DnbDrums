/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#pragma once

#include "../JuceLibraryCode/JuceHeader.h"

//==============================================================================
/*
    This component lives inside our window, and this is where you should put all
    your controls and content.
*/
class MainComponent   : public AudioAppComponent, Slider::Listener
{
public:
    //==============================================================================
    MainComponent();
    ~MainComponent();

    //==============================================================================
    void prepareToPlay (int samplesPerBlockExpected, double sampleRate) override;
    void getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill) override;
    void releaseResources() override;

    //==============================================================================
    void paint (Graphics& g) override;
    void resized() override;

private:
    //==============================================================================
    // Your private member variables go here...
    SoundPlayer kickplayer;
    SoundPlayer hatplayer;
    SoundPlayer snareplayer;
    SoundPlayer rideplayer;
    SoundPlayer percplayer;
    SoundPlayer perc2player;
    SoundPlayer crashplayer;
    SoundPlayer bellplayer;
    //Filename String
    String filenames[8];
    
    Slider masterTempoSlider;
    Slider kickSlider;
    Slider hatSlider;
    Slider snareSlider;
    Slider rideSlider;
    Slider percSlider;
    Slider perc2Slider;
    Slider crashSlider;
    Slider bellSlider;
    
    Label mastertempolabel;
    Label kickLabel;
    Label hatLabel;
    Label snareLabel;
    Label rideLabel;
    Label percLabel;
    Label perc2Label;
    Label crashLabel;
    Label bellLabel;
    int sampleRate = 44100;
    int master_tempo = 120;
    int samplesPerBeat;
    int counter, m_sampleRate, beat =0;
   void sliderValueChanged(Slider* slider) override;
    
    AudioBuffer<float> kickbuffer;
    AudioBuffer<float> hatbuffer;
    AudioBuffer<float> snarebuffer;
    AudioBuffer<float> ridebuffer;
    AudioBuffer<float> percbuffer;
    AudioBuffer<float> perc2buffer;
    AudioBuffer<float> crashbuffer;
    AudioBuffer<float> bellbuffer;
    AudioFormatManager formatManager;
    
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};
