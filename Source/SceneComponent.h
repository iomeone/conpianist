/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.1

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library.
  Copyright (c) 2017 - ROLI Ltd.

  ==============================================================================
*/

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"
#include "CspController.h"
//[/Headers]

#include "../../JUCE/modules/juce_audio_utils/juce_audio_utils.h"


//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class SceneComponent  : public Component,
                        public Button::Listener,
                        public Slider::Listener
{
public:
    //==============================================================================
    SceneComponent ();
    ~SceneComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    AudioDeviceManager audioDeviceManager;
    CspController cspController;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<AudioDeviceSelectorComponent> audioSelector;
    ScopedPointer<GroupComponent> localControlGroup;
    ScopedPointer<TextButton> localControlOnButton;
    ScopedPointer<TextButton> localControlOffButton;
    ScopedPointer<TextButton> playButton;
    ScopedPointer<TextButton> rewindButton;
    ScopedPointer<TextButton> forwardButton;
    ScopedPointer<TextButton> guideOnButton;
    ScopedPointer<Slider> positionSlider;
    ScopedPointer<Label> positionLabel;
    ScopedPointer<Label> lengthLabel;
    ScopedPointer<TextButton> pauseButton;
    ScopedPointer<TextButton> guideOffButton;
    ScopedPointer<TextButton> lightsOnButton;
    ScopedPointer<TextButton> lightsOffButton;
    ScopedPointer<GroupComponent> playbackGroup;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SceneComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]