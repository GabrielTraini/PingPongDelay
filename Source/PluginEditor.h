#pragma once

#include "../JuceLibraryCode/JuceHeader.h"
#include "PluginProcessor.h"


class StereoDigitalDelayAudioProcessorEditor : public AudioProcessorEditor, private Slider::Listener
{

public:

    StereoDigitalDelayAudioProcessorEditor(StereoDigitalDelayAudioProcessor&);
    ~StereoDigitalDelayAudioProcessorEditor();

    void paint(Graphics&) override;
    void resized() override;

    juce::ScopedPointer <AudioProcessorValueTreeState::SliderAttachment> levelSliderAttach;
    juce::ScopedPointer <AudioProcessorValueTreeState::SliderAttachment> bpmSliderAttach;
    juce::ScopedPointer <AudioProcessorValueTreeState::SliderAttachment> feedbackSliderAttach;

private:

    StereoDigitalDelayAudioProcessor& processor;

    Slider levelKnob;
    Slider timeKnob;
    Slider feedbackKnob;


    void sliderValueChanged(Slider* slider) override;

    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR(StereoDigitalDelayAudioProcessorEditor)

};