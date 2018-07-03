class Box{
   
    double h; //Height
    double w; //Width
    double b; //Breadth
    double volume;

    Box(){
        h=0;
        w=0;
        b=0;
    }
    
    Box(double height, double width, double breadth){
        h=height;
        b=breadth;
        w=width;
    }

    double volume(){
        return volume = h * w * b;
    }

}

class BoxDemo{
    public static void main(String[] args) {
    Box b2 = new Box();
    Box b1 = new Box(10,10,10);
    double volume_of_b1 = b1.volume();
    double volume_of_b2 = b2.volume();
    System.out.println("The volume of box object when initialized using constructor without parameter is "+ volume_of_b1);
    System.out.println("The volume of box object when initialized using constructor with parameter is "+ volume_of_b2);
    }
}