#include "Vector.cpp"

class Particle {
    private:
        int mass;
        int radio;
        Vector accelaration;
        Vector velocity;
        Vector position;

    public:
        Particle()
            : mass(0), radio(0), accelaration(Vector()), velocity(Vector()), position(Vector()) {}
        Particle(int mass, int radio, Vector accetarion, Vector velocity)
        : mass(mass), radio(radio), accelaration(accetarion), velocity(velocity) {}

    void move(double x, double y, double z) {
        Vector addVector = Vector(x,y,z);
        this->position.add(addVector);
    }
    

};