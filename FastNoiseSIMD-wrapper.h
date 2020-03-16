#pragma unmanaged

using namespace System;
#include "FastNoiseSIMD/FastNoiseSIMD/FastNoiseSIMD.h"
namespace CLI {
	public ref class FastNoiseSIMDwrapper
	{
		FastNoiseSIMD* fastnoise;

	public:
		FastNoiseSIMDwrapper(int seed) { fastnoise = FastNoiseSIMD::NewFastNoiseSIMD(seed); }
			~FastNoiseSIMDwrapper() { this->!FastNoiseSIMDwrapper(); }
			!FastNoiseSIMDwrapper() { delete fastnoise; }

	float GetPerlinFractalSet(int startx, int starty, int startz, int sizex, int sizey, int sizez, float frequency) {
		return *fastnoise->GetPerlinFractalSet(startx, starty, startz, sizex, sizey, sizez, frequency);
	}
	};
}
