/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    formatManager.registerBasicFormats();
    
    // for each element in your array, giive it a file path: i.e. filesname[3] = "path/to/file.wav"
    filenames[0] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/kick.wav";
    filenames[1] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/hat.wav";
    filenames[2] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/snare.wav";
    filenames[3] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/ride.wav";
    filenames[4] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/perc.wav";
    filenames[5] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/stab2.wav";
    filenames[6] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/stab.wav";
    filenames[7] = "/Users/jarrodswindale/Documents/Massey/Massey 2018/Software Design/ProJuce Projects/Summative /Source/Audio/bell.wav";
    
    std::unique_ptr<AudioFormatReader> reader (formatManager.createReaderFor(filenames[0]));
    kickbuffer.setSize(reader->numChannels, (int)reader->lengthInSamples);
    reader->read(&kickbuffer, 0, (int) reader->lengthInSamples, 0, true, true);
    kickbuffer.applyGain(1.0f);
    samplesPerBeat = (int)reader->lengthInSamples ;
    
    //std::unique_ptr<AudioFormatReader> reader (formatManager.createReaderFor(filenames[0]));
    hatbuffer.setSize(formatManager.createReaderFor(filenames[1])->numChannels, (int)formatManager.createReaderFor(filenames[1])->lengthInSamples);
    formatManager.createReaderFor(filenames[1])->read(&hatbuffer, 0, (int) formatManager.createReaderFor(filenames[1])->lengthInSamples, 0, true, true);
    hatbuffer.applyGain(0.00f);
    
    snarebuffer.setSize(formatManager.createReaderFor(filenames[2])->numChannels, (int)formatManager.createReaderFor(filenames[2])->lengthInSamples);
    formatManager.createReaderFor(filenames[2])->read(&snarebuffer, 0, (int) formatManager.createReaderFor(filenames[2])->lengthInSamples, 0, true, true);
    snarebuffer.applyGain(0.00f);
    
    ridebuffer.setSize(formatManager.createReaderFor(filenames[3])->numChannels, (int)formatManager.createReaderFor(filenames[3])->lengthInSamples);
    formatManager.createReaderFor(filenames[3])->read(&ridebuffer, 0, (int) formatManager.createReaderFor(filenames[3])->lengthInSamples, 0, true, true);
    ridebuffer.applyGain(0.00f);
    
    percbuffer.setSize(formatManager.createReaderFor(filenames[4])->numChannels, (int)formatManager.createReaderFor(filenames[4])->lengthInSamples);
    formatManager.createReaderFor(filenames[4])->read(&percbuffer, 0, (int) formatManager.createReaderFor(filenames[3])->lengthInSamples, 0, true, true);
    percbuffer.applyGain(0.00f);
    
    perc2buffer.setSize(formatManager.createReaderFor(filenames[5])->numChannels, (int)formatManager.createReaderFor(filenames[5])->lengthInSamples);
    formatManager.createReaderFor(filenames[5])->read(&perc2buffer, 0, (int) formatManager.createReaderFor(filenames[4])->lengthInSamples, 0, true, true);
    perc2buffer.applyGain(0.00f);
    
    crashbuffer.setSize(formatManager.createReaderFor(filenames[6])->numChannels, (int)formatManager.createReaderFor(filenames[6])->lengthInSamples);
    formatManager.createReaderFor(filenames[6])->read(&crashbuffer, 0, (int) formatManager.createReaderFor(filenames[6])->lengthInSamples, 0, true, true);
    crashbuffer.applyGain(0.00f);
    
    bellbuffer.setSize(formatManager.createReaderFor(filenames[7])->numChannels, (int)formatManager.createReaderFor(filenames[7])->lengthInSamples);
    formatManager.createReaderFor(filenames[7])->read(&bellbuffer, 0, (int) formatManager.createReaderFor(filenames[7])->lengthInSamples, 0, true, true);
    bellbuffer.applyGain(0.00f);
    
    
    // Make sure you set the size of the component after
    // you add any child components.
    deviceManager.addAudioCallback(&kickplayer);
    deviceManager.addAudioCallback(&hatplayer);
    deviceManager.addAudioCallback(&snareplayer);
    deviceManager.addAudioCallback(&rideplayer);
    deviceManager.addAudioCallback(&percplayer);
    deviceManager.addAudioCallback(&perc2player);
    deviceManager.addAudioCallback(&crashplayer);
    deviceManager.addAudioCallback(&bellplayer);
    // Make sure you set the size of the component after
    // you add any child components.*/
    
    //Slider Detaiils:
   
    kickSlider.setRange(0, 0.1, 0.001f);
    hatSlider.setRange(0, 0.1, 0.001f);
    snareSlider.setRange(0, 0.09, 0.001f);
    rideSlider.setRange(0, 0.03, 0.001f);
    percSlider.setRange(0, 0.1, 0.001f);
    perc2Slider.setRange(0, 0.2, 0.001f);
    crashSlider.setRange(0, 0.1, 0.001f);
    bellSlider.setRange(0, 0.1, 0.001f);
   
    kickSlider.setSliderStyle(Slider::LinearVertical );
    hatSlider.setSliderStyle(Slider::LinearVertical );
    snareSlider.setSliderStyle(Slider::LinearVertical );
    rideSlider.setSliderStyle(Slider::LinearVertical );
    percSlider.setSliderStyle(Slider::LinearVertical );
    perc2Slider.setSliderStyle(Slider::LinearVertical );
    crashSlider.setSliderStyle(Slider::LinearVertical );
    bellSlider.setSliderStyle(Slider::LinearVertical );
    kickSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 40, 20);
    hatSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 40, 20);
    snareSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 40, 20);
    rideSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 40, 20);
    percSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    perc2Slider.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    crashSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
    bellSlider.setTextBoxStyle(Slider::TextBoxBelow, false, 50, 20);
   

    kickLabel.setText("KICK", dontSendNotification);
    hatLabel.setText("HAT", dontSendNotification);
    snareLabel.setText("SNARE",dontSendNotification);
    rideLabel.setText("RIDE",dontSendNotification);
    percLabel.setText("PERC", dontSendNotification);
    perc2Label.setText("STAB1", dontSendNotification);
    crashLabel.setText("STAB2",dontSendNotification);
    bellLabel.setText("BELL",dontSendNotification);
    kickLabel.setJustificationType(Justification::centred);
    hatLabel.setJustificationType(Justification::centred);
    snareLabel.setJustificationType(Justification::centred);
    rideLabel.setJustificationType(Justification::centred);
    percLabel.setJustificationType(Justification::centredLeft);
    perc2Label.setJustificationType(Justification::centredLeft);
    crashLabel.setJustificationType(Justification::centredLeft);
    bellLabel.setJustificationType(Justification::centredLeft);
   
    
    kickSlider.setValue(1.0f);
    
    //Attach too
    kickLabel.attachToComponent (&kickSlider, false);
    hatLabel.attachToComponent (&hatSlider, false);
    snareLabel.attachToComponent (&snareSlider, false);
    rideLabel.attachToComponent (&rideSlider, false);
    percLabel.attachToComponent (&percSlider, false);
    perc2Label.attachToComponent (&perc2Slider, false);
    crashLabel.attachToComponent (&crashSlider, false);
    bellLabel.attachToComponent (&bellSlider, false);
    masterTempoSlider.addAndMakeVisible(&mastertempolabel, false);
    //Make sliders Visible
    
    addAndMakeVisible(&kickSlider);
    addAndMakeVisible(&kickLabel);
    addAndMakeVisible(&hatSlider);
    addAndMakeVisible(&hatLabel);
    addAndMakeVisible(&snareSlider);
    addAndMakeVisible(&snareLabel);
    addAndMakeVisible(&rideSlider);
    addAndMakeVisible(&rideLabel);
    
    addAndMakeVisible(&percSlider);
    addAndMakeVisible(&percLabel);
    addAndMakeVisible(&crashSlider);
    addAndMakeVisible(&crashLabel);
    addAndMakeVisible(&perc2Slider);
    addAndMakeVisible(&perc2Label);
    addAndMakeVisible(&bellSlider);
    addAndMakeVisible(&bellLabel);
    
    
    //add listeners
    
    kickSlider.addListener(this);
    hatSlider.addListener(this);
    snareSlider.addListener(this);
    rideSlider.addListener(this);
    percSlider.addListener(this);
    perc2Slider.addListener(this);
    crashSlider.addListener(this);
    rideSlider.addListener(this);
    bellSlider.addListener(this);
    setSize (800, 600);

    // specify the number of input and output channels that we want to open
    setAudioChannels (0, 2);
}

MainComponent::~MainComponent()
{
    // This shuts down the audio device and clears the audio source.
    shutdownAudio();
}

//==============================================================================
void MainComponent::prepareToPlay (int samplesPerBlockExpected, double sampleRate)
{
    // This function will be called when the audio device is started, or when
    // its settings (i.e. sample rate, block size, etc) are changed.

    // You can use this function to initialise any resources you might need,
    // but be careful - it will be called on the audio thread, not the GUI thread.
    m_sampleRate = sampleRate;
    //samplesPerBeat = ((master_tempo/60) *((sampleRate)/(4)));
    
   
    // For more details, see the help for AudioProcessor::prepareToPlay()
}

void MainComponent::getNextAudioBlock (const AudioSourceChannelInfo& bufferToFill)
{
    // Your audio-processing code goes here!
    bufferToFill.clearActiveBufferRegion();
    
    /*
     60 blocks of 44100 samples, we have 120 beats
     1 block of 44100 samples = 2 beats
     44100 samples, there is 2 beats
     1 beat = 44100 / 2 = 22100
     */
    counter += bufferToFill.numSamples;
    if (counter > samplesPerBeat){
        counter = 0;
        beat++;
        kickplayer.play(&kickbuffer);
        hatplayer.play(&hatbuffer);
        snareplayer.play(&snarebuffer);
        rideplayer.play(&ridebuffer);
        percplayer.play(&percbuffer);
        perc2player.play(&perc2buffer);
        crashplayer.play(&crashbuffer);
        bellplayer.play(&bellbuffer);
        String msg;
        String slid;
        slid << master_tempo << " tempo" << newLine;
        msg << samplesPerBeat << " beat has passed" << newLine;
        Logger::getCurrentLogger()->writeToLog(msg);
        Logger::getCurrentLogger()->writeToLog(slid);
    }
    
    
    // For more details, see the help for AudioProcessor::getNextAudioBlock()

    // Right now we are not producing any data, in which case we need to clear the buffer
    // (to prevent the output of random noise)
  
}

void MainComponent::releaseResources()
{
    // This will be called when the audio device stops, or when it is being
    // restarted due to a setting change.

    // For more details, see the help for AudioProcessor::releaseResources()
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    // (Our component is opaque, so we must completely fill the background with a solid colour)
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    
    // You can add your drawing code here!
}

void MainComponent::resized()
{
    // This is called when the MainContentComponent is resized.
    // If you add any child components, this is where you should
    // update their positions.
   
    kickSlider.setBounds(260, 65, 60, 220);
    hatSlider.setBounds(330, 65, 60, 220);
    snareSlider.setBounds(405, 65, 60, 220);
    rideSlider.setBounds(480, 65, 60, 220);
    percSlider.setBounds(260, 330, 60, 220);
    perc2Slider.setBounds(330, 330, 60, 220);
    crashSlider.setBounds(405, 330, 60, 220);
    bellSlider.setBounds(480, 330, 60, 220);
    
   
    
    masterTempoSlider.setBounds(270, 530, 200, 40);
}
void MainComponent::sliderValueChanged(Slider* slider){
    if (slider == &kickSlider){
        formatManager.createReaderFor(filenames[0])->read(&kickbuffer, 0, (int) formatManager.createReaderFor(filenames[0])->lengthInSamples, 0, true, true);
        kickbuffer.applyGain(kickSlider.getValue());
    }
    else if (slider == &hatSlider){
        formatManager.createReaderFor(filenames[1])->read(&hatbuffer, 0, (int) formatManager.createReaderFor(filenames[1])->lengthInSamples, 0, true, true);
        hatbuffer.applyGain(hatSlider.getValue());
    }
    else if (slider == &snareSlider){
        formatManager.createReaderFor(filenames[2])->read(&snarebuffer, 0, (int) formatManager.createReaderFor(filenames[2])->lengthInSamples, 0, true, true);
        snarebuffer.applyGain(snareSlider.getValue());
    }
    else if (slider == &rideSlider){
        formatManager.createReaderFor(filenames[3])->read(&ridebuffer, 0, (int) formatManager.createReaderFor(filenames[3])->lengthInSamples, 0, true, true);
        ridebuffer.applyGain(rideSlider.getValue());
    }
    else if (slider == &percSlider){
        formatManager.createReaderFor(filenames[4])->read(&percbuffer, 0, (int) formatManager.createReaderFor(filenames[4])->lengthInSamples, 0, true, true);
        percbuffer.applyGain(percSlider.getValue());
    }
    else if (slider == &perc2Slider){
        formatManager.createReaderFor(filenames[5])->read(&perc2buffer, 0, (int) formatManager.createReaderFor(filenames[5])->lengthInSamples, 0, true, true);
        perc2buffer.applyGain(perc2Slider.getValue());
    }
    else if (slider == &crashSlider){
        formatManager.createReaderFor(filenames[6])->read(&crashbuffer, 0, (int) formatManager.createReaderFor(filenames[6])->lengthInSamples, 0, true, true);
        crashbuffer.applyGain(crashSlider.getValue());
    }
    else if (slider == &bellSlider){
        formatManager.createReaderFor(filenames[7])->read(&bellbuffer, 0, (int) formatManager.createReaderFor(filenames[7])->lengthInSamples, 0, true, true);
        bellbuffer.applyGain(bellSlider.getValue());
    }
}

