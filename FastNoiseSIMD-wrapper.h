#include "FastNoiseSIMD/FastNoiseSIMD.h"
#pragma managed

using namespace System;
namespace CLI {
	public ref class FastNoiseSIMDwrapper
	{
	public:
		FastNoiseSIMDwrapper(int seed) : fastnoise(FastNoiseSIMD::NewFastNoiseSIMD(seed)) {  }
			~FastNoiseSIMDwrapper() { this->!FastNoiseSIMDwrapper(); }
			!FastNoiseSIMDwrapper() { delete fastnoise; }

		float GetPerlinFractalSet(int startx, int starty, int startz, int sizex, int sizey, int sizez, float frequency) {
		return *fastnoise->GetPerlinFractalSet(startx, starty, startz, sizex, sizey, sizez, frequency);
		}
	private:
		FastNoiseSIMD* fastnoise;
	};
}
