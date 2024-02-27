# VocoGroot

This project focuses on the development of a Vocoder, a device capable of modifying and synthesizing human speech in real time. The Vocoder employs signal processing techniques to achieve transformative effects on audio signals, enabling users to experience modified sound output through a headset. By changing the different settings available, the user can achieve a voice that sounds very similar to the voice of the Marvel character Groot, which is why we decided to name our project VocoGroot.

## Overview

Our project uses the Teensy microcontroller, along with the Arduino platform through Teensyduino. This allowed us to easily add control elements for user interaction. 

The Vocoder's backbone is built upon the versatile Faust language, enabling efficient signal processing implementations. We used the integrated Vocoder inside Faust, which allows adjusting 3 parameters : attack, release and frequency. 

## Hardware

Our Vocogroot makes use of a headset with microphone, which allows the user to hear his modified voice in real time. We also added 3 potentiometers for user interaction, which give control over volume, frequency and attack+release and a button that turns the audio processing on or off when pressed. We fitted everything inside a carboard box decorated around the Groot character.

## Contributions

Collaboratively, our team designed and implemented the Vocoder's hardware and software components. Each member contributed expertise in areas such as electronics, programming, and signal processing, ensuring a comprehensive development process. Our project underscores the value of interdisciplinary collaboration, showcasing the synergy of knowledge and skills in achieving innovative solutions in sound treatment.

## License

This project is licensed under the [MIT License](LICENSE).

