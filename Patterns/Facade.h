#pragma once
#include <string>

using namespace std;

class VideoFile
{
public:
	VideoFile() {};
	VideoFile(const string& path);
	virtual ~VideoFile() {};

	void Extract(const string& path);
	string GetData() const;
	void SetData(const string& data);
	void SaveFile() const;

private:
	string fileData;
};

class VideoCodec
{
public:
	VideoCodec() {};
	virtual ~VideoCodec() {};

	void ConvertToMP4(VideoFile* file) const;
};

class AudioCodec
{
public:
	AudioCodec() {};
	virtual ~AudioCodec() {};

	void ConvertAudio(VideoFile* file) const;
};

class Facade
{
public:
	Facade() {};
	virtual ~Facade() {};

	void ConvertMPEGtoMP4(const string& path) const;
};

