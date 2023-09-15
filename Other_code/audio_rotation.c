static int8_t AUDIO_PeriodicTC_FS(uint8_t *pbuf, uint32_t size, uint8_t cmd) {
    // Assuming stereo audio with 16-bit samples (8-bit for each channel).
    int16_t *audioData = (int16_t *)pbuf;
    uint32_t numSamples = size / 2; // Each sample is 2 bytes.

    // Determine the rotation angle in radians.
    float rotationRadians = rotation * (3.14159265359 / 180.0); // need to declare rotation variable

    // Iterate through the audio samples.
    for (uint32_t i = 0; i < numSamples; i += 2) {
        // Extract left and right channel samples.
        int16_t leftSample = audioData[i];
        int16_t rightSample = audioData[i + 1];

        // Apply rotation effect.
        int16_t rotatedLeftSample = (int16_t)(leftSample * cos(rotationRadians) - rightSample * sin(rotationRadians));
        int16_t rotatedRightSample = (int16_t)(leftSample * sin(rotationRadians) + rightSample * cos(rotationRadians));

        // Mix the rotated samples back together.
        audioData[i] = rotatedLeftSample;
        audioData[i + 1] = rotatedRightSample;
    }

    return (USBD_OK);
}