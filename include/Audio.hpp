/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Audio
*/

#ifndef AUDIO_HPP_
#define AUDIO_HPP_

#include "raylib.h"
#include <string>

namespace blb {
    class Audio {
        public:
            /**
             * @brief  Create Audio object
             */
            Audio();
            /**
             * @brief  Destroy Audio object
             */
            ~Audio();
            /**
             * @brief  Initialize audio device and context
             * @retval None
             */
            static void InitAudiodevice(void);
            /**
             * @brief  Close the audio device and context
             * @retval None
             */
            static void CloseAudiodevice(void);
            /**
             * @brief  Check if audio device has been initialized successfully
             * @retval true or false
             */
            static bool IsAudiodeviceReady(void);
            /**
             * @brief  Set master volume (listener)
             * @param  Volume: The value of master volume
             * @retval None
             */
            void SetmasterVolume(float Volume);

            /**
             * @brief  Load wave data from file
             * @param  filename: The name of file
             * @retval None
             */
            void Loadwave(std::string filename);
            /**
             * @brief  Load wave from memory buffer
             * @param  *fileType: Type of file
             * @param  *fileData: Data of file
             * @param  dataSize: Size of data
             * @retval None
             */
            void LoadWaveFrommemory(const char *fileType, const unsigned char *fileData, int dataSize);
            /**
             * @brief  Get wave of class Audio
             * @retval Wave variable of Audio
             */
            Wave getWave(void) const;
            /**
             * @brief  Load sound from file
             * @param  *filename: Name of file
             * @retval None
             */
            void Loadsound(const std::string &filename);
            /**
             * @brief  Load sound from wave data
             * @param  wave: A wave
             * @retval None
             */
            void LoadSoundFromwave(Wave wave);
            /**
             * @brief  Get sound of Audio class
             * @retval Return a sound
             */
            Sound getSound(void) const;
            /**
            * @brief  Update sound buffer with new data
            * @param  *data: Data of a sound
            * @param  sampleCount: Count of sample
            * @retval None
            */
            void Updatesound(const void *data, int sampleCount);
            /**
             * @brief  Unload wave data
             * @retval None
             */
            void Unloadwave(void);
            /**
             * @brief  Unload sound
             * @retval None
             */
            void Unloadsound(void);
            /**
             * @brief  Export wave data to file, returns true on success
             * @param  *fileName: 
             * @retval true or false
             */
            bool Exportwave(const char *fileName);
            /**
             * @brief  Export wave sample data to code (.h), returns true on success
             * @param  *fileName: Name of file
             * @retval true or false
             */
            bool ExportWaveAscode(const char *fileName);

            /**
             * @brief  Play a sound
             * @retval None
             */
            void Playsound(void);
            /**
             * @brief  Stop playing a sound
             * @retval None
             */
            void Stopsound(void);
            /**
             * @brief  Pause a sound
             * @retval None
             */
            void Pausesound(void);
            /**
             * @brief  Resume a paused sound
             * @retval None
             */
            void Resumesound(void);
            /**
             * @brief  Play a sound (using multichannel buffer pool)
             * @retval None
             */
            void PlaySoundmulti(void);
            /**
             * @brief  Stop any sound playing (using multichannel buffer pool)
             * @retval None
             */
            void StopSoundmulti(void);
            /**
             * @brief  Get number of sounds playing in the multichannel
             * @retval Number of sounds playing in the multichannel
             */
            int GetSoundsplaying(void);
            /**
             * @brief  Check if a sound is currently playing
             * @retval true or false
             */
            bool IsSoundplaying(void);
            /**
             * @brief  Set volume for a sound (1.0 is max level)
             * @param  volume: Volume of sound
             * @retval None
             */
            void SetSoundvolume(float volume);
            /**
             * @brief  Set pitch for a sound (1.0 is base level)
             * @param  pitch: Pitch of sound
             * @retval None
             */
            void SetSoundpitch(float pitch);
            /**
             * @brief  Convert wave data to desired format
             * @param  sampleRate: Rate of sample
             * @param  sampleSize: Size of sample
             * @param  channels: Number of channels
             * @retval None
             */
            void WaveToFormat(int sampleRate, int sampleSize, int channels);
            /**
             * @brief  Copy a wave to a new wave
             * @retval 
             */
            Wave Wavecopy(void);
            /**
             * @brief  Crop a wave to defined samples range
             * @param  initSample: First sample
             * @param  finalSample: Final sample
             * @retval None
             */
            void Wavecrop(int initSample, int finalSample);
            /**
             * @brief  Load samples data from wave as a floats array
             * @retval Float array of wave's data
             */
            float *LoadWavesamples(void);
            /**
             * @brief  Unload samples data loaded with LoadWaveSamples()
             * @param  *samples: Float array of wave's data
             * @retval None
             */
            void UnloadWavesamples(float *samples);

            /**
             * @brief  Load music stream from file
             * @param  *filename: Name of file
             * @retval None
             */
            void LoadMusicstream(const char *filename);
            /**
             * @brief  Load music stream from data
             * @param  *fileType: Type of file
             * @param  *data: Data of music
             * @param  dataSize: Size of data
             * @retval None
             */
            void LoadMusicStreamFrommemory(const char *fileType, unsigned char *data, int dataSize);
            /**
             * @brief  Get music of Audio class
             * @retval The music variable
             */
            Music getMusicStream(void) const;
            /**
             * @brief  Unload music stream
             * @retval None
             */
            void UnloadMusicstream(void);
            /**
             * @brief  Start music playing
             * @retval None
             */
            void PlayMusicstream(void);
            /**
             * @brief  Check if music is playing
             * @retval True or false
             */
            bool IsMusicStreamplaying(void);
            /**
             * @brief  Updates buffers for music streaming
             * @retval None
             */
            void UpdateMusicstream(void);
            /**
             * @brief  Stop music playing
             * @retval None
             */
            void StopMusicstream(void);
            /**
             * @brief  Pause music playing
             * @retval None
             */
            void PauseMusicstream(void);
            /**
             * @brief  Resume playing paused music
             * @retval None
             */
            void ResumeMusicstream(void);
            /**
             * @brief  Seek music to a position (in seconds)
             * @param  position: Seek position
             * @retval None
             */
            void SeekMusicstream(float position);
            /**
             * @brief  Set volume for music (1.0 is max level)
             * @param  volume: Volume of music
             * @retval None
             */
            void SetMusicvolume(float volume);
            /**
             * @brief  Set pitch for a music (1.0 is base level)
             * @param  pitch: Pitch of music
             * @retval None
             */
            void SetMusicpitch(float pitch);
            /**
             * @brief  Get music time length (in seconds)
             * @retval Length in float
             */
            float GetMusicTimelength(void);
            /**
             * @brief  Get current music time played (in seconds)
             * @retval Number of time played
             */
            float GetMusicTimeplayed(void);

            /**
             * @brief  Init audio stream (to stream raw audio pcm data)
             * @param  sampleRate: Rate of sample
             * @param  sampleSize: Size of sample
             * @param  channels: Number of channels
             * @retval None
             */
            void LoadAudiostream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels);
            /**
             * @brief  Get audio stream of Audio class
             * @retval AudioStream of Audio class
             */
            AudioStream getAudioStream(void) const;
            /**
             * @brief  Unload audio stream and free memory
             * @retval None
             */
            void UnloadAudiostream(void);
            /**
             * @brief  Update audio stream buffers with data
             * @param  *data: Data of audio
             * @param  frameCount: Number of frame
             * @retval None
             */
            void UpdateAudiostream(const void *data, int frameCount);
            /**
             * @brief  Check if any audio stream buffers requires refill
             * @retval True or false
             */
            bool IsAudioStreamprocessed(void);
            /**
             * @brief  Play audio stream
             * @retval None
             */
            void PlayAudiostream(void);
            /**
             * @brief  Pause audio stream
             * @retval None
             */
            void PauseAudiostream(void);
            /**
             * @brief  Resume audio stream
             * @retval None
             */
            void ResumeAudiostream(void);
            /**
             * @brief  Check if audio stream is playing
             * @retval True or false
             */
            bool IsAudioStreamplaying(void);
            /**
             * @brief  Stop audio stream
             * @retval None
             */
            void StopAudiostream(void);
            /**
             * @brief  Set volume for audio stream (1.0 is max level)
             * @param  volume: Volume of Audio
             * @retval None
             */
            void SetAudioStreamvolume(float volume);
            /**
             * @brief  Set pitch for audio stream (1.0 is base level)
             * @param  pitch: Pitch of Audio stream
             * @retval None
             */
            void SetAudioStreampitch(float pitch);
            /**
             * @brief  Default size for new audio streams
             * @param  size: Size of buffer
             * @retval None
             */
            void SetAudioStreamBufferSizedefault(int size);
            AudioStream _audio;
            Wave _wave;
            Sound _sound;
            Music _music;
        private:
    };
}

#endif /* !AUDIO_HPP_ */
