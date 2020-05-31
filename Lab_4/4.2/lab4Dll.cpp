#include "pch.h"


extern "C"
{
	__declspec(dllexport) int ShowResult(int a, int b)
	{
		int result = a + b;
		return result;
	}
}
