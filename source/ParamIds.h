/*
  ==============================================================================

    ParamIds.h
    This file copies the parameters from "Heavy_Demo.h" (created when you exported 
    C++ code from PlugData - it will be named automatically after your PD file)

    typedef enum {
      HV_DEMO_PARAM_IN_GAIN = 0x766D1755, // GAIN
      HV_DEMO_PARAM_IN_LEVEL = 0xCD345ED7, // LEVEL
      HV_DEMO_PARAM_IN_TONE = 0x4F7510B7, // TONE
    } Hv_Demo_ParameterIn;

  ==============================================================================
*/

#pragma once

namespace ParamIDs
{
    inline constexpr auto Gain{ "Gain" };
    inline constexpr auto Level{ "Level" };
    inline constexpr auto Tone{ "Tone" };
}

const std::vector<juce::String> parameters =
{
    ParamIDs::Gain,
    ParamIDs::Level,
    ParamIDs::Tone,
};