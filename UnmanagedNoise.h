#pragma once
#include <windows.h>
#include "FastNoiseSIMDwrapper.h"
#pragma managed
using namespace System;

namespace CLI {
	 public ref class UnmanagedNoise
	{

	public:
		UnmanagedNoise(int seed) : wrapper(new FastNoiseSIMDwrapper(seed)) {}

		~UnmanagedNoise() { delete this; }

		float GetPerlinFractalSet(int startx, int starty, int startz, int sizex, int sizey, int sizez, float frequency) {
			return wrapper->GetPerlinFractalSet(startx, starty, startz, sizex, sizey, sizez, frequency);
		}
	private:
		FastNoiseSIMDwrapper* wrapper;
	};
}

