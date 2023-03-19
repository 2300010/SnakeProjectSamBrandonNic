#pragma once
#include <iostream>


class Random
{
	private:
		Random(){}

	public:
		Random(const Random&) = delete;

        Random& operator = (const Random&) = delete;

        static Random& Get() {
            static Random inst;
            return inst;
        }

        // Seed the random number generator.
        void Seed() {
            srand(time(NULL));
        }

        int GenInt(int max) {
            return rand() % max;
        }

};

