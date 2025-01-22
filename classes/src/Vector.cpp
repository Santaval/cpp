class Vector {
    private:
        double x,y,z;


    public:
        Vector()
            : x(0), y(0), z(0) {

        }

        Vector(double x, double y, double z)
            : x(x), y(y), z(z) {

        }

        void add(Vector other) {
            this->x += other.x;
            this->y += other.y;
            this->z += other.z;
        }


        void add(int x, int y, int z) {
            this->x += x;
            this->y += y;
            this->z += z;
        }


};