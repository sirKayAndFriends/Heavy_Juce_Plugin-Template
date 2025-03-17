/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#pragma once

#include <JuceHeader.h>
#include "PluginProcessor.h"

//==============================================================================
/**
*/
class DemoAudioProcessorEditor  : public juce::AudioProcessorEditor,
                                        public juce::Slider::Listener
{
public:
    DemoAudioProcessorEditor (DemoAudioProcessor&);
    ~DemoAudioProcessorEditor();

    //==============================================================================
    void paint (juce::Graphics&) override;
    void resized() override;

    void sliderValueChanged(juce::Slider* slider) override;

private:

    //change this for your own plugin parameters e.g.
    
    //std::unique_ptr < juce::Slider> mPitchSlider, mModSlider;
    
    //or whatever
    std::unique_ptr < juce::Slider> mGainSlider, mVolumeSlider, mToneSlider;
    DemoAudioProcessor& processor;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (DemoAudioProcessorEditor)
};
