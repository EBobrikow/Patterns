#include "Facade.h"
#include <iostream>

VideoFile::VideoFile(const string& path)
{
	Extract(path);
}

void VideoFile::Extract(const string& path)
{
	//Emulating reading a video file into inner data format, file path will be it's content for simplicity 
	fileData = path;
}

string VideoFile::GetData() const
{
	return fileData;
}

void VideoFile::SetData(const string& data)
{
	fileData = data;
}

void VideoFile::SaveFile() const
{
	//Emiulating saving video file
	cout << "Saving file" << fileData << endl;
}

void VideoCodec::ConvertToMP4(VideoFile* file) const
{
	//Emulating some video format converter
	string videoData = file->GetData();
	videoData += " mp4 video";
	cout << "Convert video = " << videoData << endl;
	file->SetData(videoData);
}

void AudioCodec::ConvertAudio(VideoFile* file) const
{
	//Emulating some audio format converter
	string audioData = file->GetData();
	audioData += " mp3 audio";
	cout << "Convert audio = " << audioData << endl;
	file->SetData(audioData);
}

void Facade::ConvertMPEGtoMP4(const string& path) const
{
	VideoFile* file = new VideoFile(path);
	VideoCodec* vcodec = new VideoCodec();
	AudioCodec* acodec = new AudioCodec();
	vcodec->ConvertToMP4(file);
	acodec->ConvertAudio(file);
	file->SaveFile();

	delete vcodec;
	delete acodec;
	delete file;
}
