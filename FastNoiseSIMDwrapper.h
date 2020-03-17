
#include "FastNoiseSIMD.h"
using namespace System;

#pragma unmanaged

class FastNoiseSIMDwrapper {
	public:
		FastNoiseSIMD* fastnoise;

		FastNoiseSIMDwrapper(int seed) {
		}

		~FastNoiseSIMDwrapper() { delete fastnoise; }

		float GetPerlinFractalSet(int startx, int starty, int startz, int sizex, int sizey, int sizez, float frequency) {\
			fastnoise = FastNoiseSIMD::NewFastNoiseSIMD(0);

			return *fastnoise->GetPerlinFractalSet(startx, starty, startz, sizex, sizey, sizez, frequency);
		}
	private:
	};