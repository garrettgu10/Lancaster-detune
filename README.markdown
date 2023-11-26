# Lancaster Detune

This project is a fork of [FFT Processing in JUCE](https://audiodev.blog/fft-processing/).

It performs a detuning process inspired by the [botched musical road bumps in Lancaster, CA](https://www.youtube.com/watch?v=EK1ocEbJA7c). A typical repitching algorithm works by multiplying every frequency in the spectrum by the same amount; what if instead, we added the same amount to each frequency instead? All harmonics would be offset from each other, yielding chaotic results. 

The result is a very demonic sound that may be desirable for horror film scoring. 
