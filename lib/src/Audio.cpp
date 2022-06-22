/*
** EPITECH PROJECT, 2022
** B-YEP-400-RUN-4-1-indiestudio-team.bodzen
** File description:
** Audio
*/

#include "Audio.hpp"

blb::Audio::Audio()
{
}

blb::Audio::~Audio()
{
}

void blb::Audio::InitAudiodevice(void)
{
    InitAudioDevice();
}

void blb::Audio::CloseAudiodevice(void)
{
    CloseAudioDevice();
}

bool blb::Audio::IsAudiodeviceReady(void)
{
    return (IsAudioDeviceReady());
}

void blb::Audio::SetmasterVolume(float Volume)
{
    SetMasterVolume(Volume);
}

void blb::Audio::Loadwave(std::string filename)
{
    _wave = LoadWave(filename.c_str());
}

void blb::Audio::LoadWaveFrommemory(const char *fileType, const unsigned char *fileData, int dataSize)
{
    _wave = LoadWaveFromMemory(fileType, fileData, dataSize);
}

Wave blb::Audio::getWave() const
{
    return _wave;
}

void blb::Audio::Loadsound(const std::string &filename)
{
    _sound = LoadSound(filename.c_str());
}

void blb::Audio::LoadSoundFromwave(Wave wave)
{
    _sound = LoadSoundFromWave(wave);
}

Sound blb::Audio::getSound(void) const
{
    return _sound;
}

void blb::Audio::Updatesound(const void *data, int sampleCount)
{
    UpdateSound(_sound, data, sampleCount);
}

void blb::Audio::Unloadwave(void)
{
    UnloadWave(_wave);
}

void blb::Audio::Unloadsound(void)
{
    UnloadSound(_sound);
}

bool blb::Audio::Exportwave(const char *fileName)
{
    return ExportWave(_wave, fileName);
}

bool blb::Audio::ExportWaveAscode(const char *fileName)
{
    return ExportWaveAsCode(_wave, fileName);
}

void blb::Audio::Playsound(void)
{
    //PlaySound(_sound);
}

void blb::Audio::Stopsound(void)
{
    StopSound(_sound);
}

void blb::Audio::Pausesound(void)
{
    PauseSound(_sound);
}

void blb::Audio::Resumesound(void)
{
    ResumeSound(_sound);
}

void blb::Audio::PlaySoundmulti(void)
{
    PlaySoundMulti(_sound);
}

void blb::Audio::StopSoundmulti(void)
{
    StopSoundMulti();
}

int blb::Audio::GetSoundsplaying(void)
{
    return GetSoundsPlaying();
}

bool blb::Audio::IsSoundplaying(void)
{
    return IsSoundPlaying(_sound);
}

void blb::Audio::SetSoundvolume(float volume)
{
    SetSoundVolume(_sound, volume);
}

void blb::Audio::SetSoundpitch(float pitch)
{
    SetSoundPitch(_sound, pitch);
}

void blb::Audio::WaveToFormat(int sampleRate, int sampleSize, int channels)
{
    WaveFormat(&_wave, sampleRate, sampleSize, channels);
}

Wave blb::Audio::Wavecopy(void)
{
    return WaveCopy(_wave);
}

void blb::Audio::Wavecrop(int initSample, int finalSample)
{
    WaveCrop(&_wave, initSample, finalSample);
}

float *blb::Audio::LoadWavesamples(void)
{
    return LoadWaveSamples(_wave);
}

void blb::Audio::UnloadWavesamples(float *samples)
{
    UnloadWaveSamples(samples);
}

void blb::Audio::LoadMusicstream(const char *filename)
{
    _music = LoadMusicStream(filename);
}

void blb::Audio::LoadMusicStreamFrommemory(const char *fileType, unsigned char *data, int dataSize)
{
    _music = LoadMusicStreamFromMemory(fileType, data, dataSize);
}

Music blb::Audio::getMusicStream(void) const
{
    return _music;
}

void blb::Audio::UnloadMusicstream(void)
{
    UnloadMusicStream(_music);
}

void blb::Audio::PlayMusicstream(void)
{
    PlayMusicStream(_music);
}

bool blb::Audio::IsMusicStreamplaying(void)
{
    return IsMusicStreamPlaying(_music);
}

void blb::Audio::UpdateMusicstream(void)
{
    UpdateMusicStream(_music);
}

void blb::Audio::StopMusicstream(void)
{
    StopMusicStream(_music);
}

void blb::Audio::PauseMusicstream(void)
{
    PauseMusicStream(_music);
}

void blb::Audio::ResumeMusicstream(void)
{
    ResumeMusicStream(_music);
}

void blb::Audio::SeekMusicstream(float position)
{
    SeekMusicStream(_music, position);
}

void blb::Audio::SetMusicvolume(float volume)
{
    SetMusicVolume(_music, volume);
}

void blb::Audio::SetMusicpitch(float pitch)
{
    SetMusicPitch(_music, pitch);
}

float blb::Audio::GetMusicTimelength(void)
{
    return GetMusicTimeLength(_music);
}

float blb::Audio::GetMusicTimeplayed(void)
{
    return GetMusicTimePlayed(_music);
}

void blb::Audio::LoadAudiostream(unsigned int sampleRate, unsigned int sampleSize, unsigned int channels)
{
    _audio = LoadAudioStream(sampleRate, sampleSize, channels);
}

AudioStream blb::Audio::getAudioStream(void) const
{
    return _audio;
}

void blb::Audio::UnloadAudiostream(void)
{
    UnloadAudioStream(_audio);
}

void blb::Audio::UpdateAudiostream(const void *data, int frameCount)
{
    UpdateAudioStream(_audio, data, frameCount);
}

bool blb::Audio::IsAudioStreamprocessed(void)
{
    return IsAudioStreamProcessed(_audio);
}

void blb::Audio::PlayAudiostream(void)
{
    PlayAudioStream(_audio);
}

void blb::Audio::PauseAudiostream(void)
{
    PauseAudioStream(_audio);
}

void blb::Audio::ResumeAudiostream(void)
{
    ResumeAudioStream(_audio);
}

bool blb::Audio::IsAudioStreamplaying(void)
{
    return IsAudioStreamPlaying(_audio);
}

void blb::Audio::StopAudiostream(void)
{
    StopAudioStream(_audio);
}

void blb::Audio::SetAudioStreamvolume(float volume)
{
    SetAudioStreamVolume(_audio, volume);
}

void blb::Audio::SetAudioStreampitch(float pitch)
{
    SetAudioStreamPitch(_audio, pitch);
}

void blb::Audio::SetAudioStreamBufferSizedefault(int size)
{
    SetAudioStreamBufferSizeDefault(size);
}