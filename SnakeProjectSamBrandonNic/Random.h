#pragma once
#include <iostream>


class Random
{
	private:
        int MAX_X = 100;
        int MAX_Y = 100;
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

        int GenIntPositionX() {
            return rand() % MAX_X;
        }

        int GenIntPositionY() {
            return rand() % MAX_Y;
        }
};

