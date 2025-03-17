# Heavy_Juce_Plugin-Template
A template for quick plugin development from Heavy code compiled by PlugData!
Do all the DSP nonsense in PlugData, compile it into C++ code with the Heavy compiler that comes with Plugdata and chuck it into this template!

This code comes with a demo program as it is easier to show how it all works.  Its a cruddy tubescreamer-like overdrive.

The template is based on code from [this repository](https://github.com/o-g-sus/JUCE-HEAVY).  Thank you very much for the hard work :)

## GETTING STARTED
**YOU WILL NEED**
- [JUCE](https://juce.com/get-juce/)
- An IDE of your choice
- [PlugData](https://plugdata.org/)

Download this code and chuck it into a folder somewhere.  Open the Projucer and start a new project and choose "basic plugin" then delete all the files it autofills and replace them with everything in the "source" folder.  I find it helpful to bundle everything into a "source" folder within the projucer for ease.  It should look like this.

![Projucer Screenshot](/resources/projucerPic.png)

You will also need to choose link the Projucer to the JUCE files on your computer.  It will add them into the project for you, how nice.

You then need to build the project with an IDE of your choice.  I use Visual Studio.  Open this project by finding the IDE project file in the "Builds" folder.

### Using the Demo Code
This project is ready to build once you have done the above tasks.  Build it from your IDE then mess around in the PluginEditor.cpp file to change the style of the sliders!
You can also use this template to build your own plugins quickly.  You will need to change some of the code to fit your plugin as yours might be a synth with no inputs, or have parameters other than "gain" and "tone".

Build a patch in PlugData, export the C++ code and try it out.  Have fun :)

