//******************************************************************************//
// Copyright 2014 Benjamin Fung      											//
//																				//		
// Licensed under the Apache License, Version 2.0 (the "License");				//
// you may not use this file except in compliance with the License.				//
// You may obtain a copy of the License at										//
//																				//
//    http://www.apache.org/licenses/LICENSE-2.0								//
//																				//
// Unless required by applicable law or agreed to in writing, software			//
// distributed under the License is distributed on an "AS IS" BASIS,			//
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.		//
// See the License for the specific language governing permissions and			//
// limitations under the License.												//
//******************************************************************************//

// File:    BFMath.h
//

#include <cmath>


inline long square(long x) { return x * x; };

//inline long double log2(long double x) { return log10(x) / log10((long double) 2); };

inline float log2f(float x) { return log10f(x) / log10f(2); };

ULONG factorial(ULONG num);

ULONG binomialCoefficient(ULONG n, ULONG m);



