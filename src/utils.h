#pragma once
#include "raylib.h"
#include <vector>
#include <string>

inline std::vector<Texture2D> LoadImagesFromDirectory(const std::string& path)
{
	std::vector<Texture2D> frames;
	//TODO:: Use system API or external library to enumerate directory
	//For Windows, you could use FindFirstFileA/FindNextFileA
	//For cross-platform, consider using filesystem library (C++17)
	for (int i = 0; i < 300; i++)   // number of frames
	{
		char filename[64];
		std::snprintf(filename, sizeof(filename), "%s%04d.jpg", path.c_str(), i);
		frames.push_back(LoadTexture(filename));
	}
	return frames;
}


