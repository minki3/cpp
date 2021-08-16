class shape
{
    protected:
        int x, y;
    public:
        void draw() {}
        void move() {}
};

class Reactangle: public shape
{
    protected:
        int width;
        int height;
    public:
        int calcArea()
        {
            return width*height;
        }
};
