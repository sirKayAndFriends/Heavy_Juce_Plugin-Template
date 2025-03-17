/*
  ==============================================================================

    This file contains the basic framework code for a JUCE plugin editor.

  ==============================================================================
*/

#include "PluginProcessor.h"
#include "PluginEditor.h"
#include "Heavy Files/Heavy_Demo.h"

//==============================================================================
DemoAudioProcessorEditor::DemoAudioProcessorEditor (DemoAudioProcessor& p)
    : AudioProcessorEditor (&p), processor (p)
{
    mGainSlider = std::make_unique<juce::Slider>();
    mGainSlider->setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    mGainSlider->setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);
    mGainSlider->setRange(0.0f, 100.0f, 1.0f);
    mGainSlider->setValue(0.5f);
    mGainSlider->addListener(this);
    addAndMakeVisible(mGainSlider.get());

    mVolumeSlider = std::make_unique<juce::Slider>();
    mVolumeSlider->setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    mVolumeSlider->setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);
    mVolumeSlider->setRange(0.0f, 1.0f, 0.001f);
    mVolumeSlider->setValue(0.5f);
    mVolumeSlider->addListener(this);
    addAndMakeVisible(mVolumeSlider.get());

    mToneSlider = std::make_unique<juce::Slider>();
    mToneSlider->setSliderStyle(juce::Slider::SliderStyle::LinearVertical);
    mToneSlider->setTextBoxStyle(juce::Slider::TextBoxBelow, true, 50, 20);
    mToneSlider->setRange(0.0f, 1.0f, 0.001f);
    mToneSlider->setValue(0.5f);
    mToneSlider->addListener(this);
    addAndMakeVisible(mToneSlider.get());

    setSize (400, 300);
}

DemoAudioProcessorEditor::~DemoAudioProcessorEditor()
{
}

//==============================================================================
void DemoAudioProcessorEditor::paint (juce::Graphics& g)
{
    g.fillAll (juce::Colours::black);
}

void DemoAudioProcessorEditor::resized()
{
    int y = getHeight() / 2 - 75;
    int h = 150;
    int w = 70;

    mGainSlider->setBounds(50, y, w, h);
    mVolumeSlider->setBounds(150, y, w, h);
    mToneSlider->setBounds(250, y, w, h);
}

void DemoAudioProcessorEditor::sliderValueChanged(juce::Slider* slider)
{
    if (slider == mGainSlider.get())
    {
        processor.sendFloatToPlugin(HV_DEMO_PARAM_IN_GAIN, mGainSlider->getValue());
    }

    if (slider == mVolumeSlider.get())
    {
        processor.sendFloatToPlugin(HV_DEMO_PARAM_IN_LEVEL, mVolumeSlider->getValue());
    }

    if (slider == mToneSlider.get())
    {
        processor.sendFloatToPlugin(HV_DEMO_PARAM_IN_TONE, mToneSlider->getValue());
    }
}