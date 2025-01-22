#include <vector>
#include "Particle.cpp"

class Universe {
    public:
        Particle particles[10];

    public:
        Universe() {
            for (int i = 0; i < 10; i++) {
                particles[i] = Particle(10, 4, Vector(1,2,3), Vector(4,5,6));
            }
        }
    
        void move() {
            for (int i = 0; i < 10; i++) {
                particles[i].move(1,2,3);
            }
        }


};