package OOPS_In_Java;

public class Car {

    int noOfWheels;
    String color;
    String brand;

    // Car() {
    //     this.noOfWheels = 4;
    //     this.color = new String();
    //     this.brand = new String();
    // }

    Car(int noOfWheels, String color, String brand) {
        this.noOfWheels = noOfWheels;
        this.color = color;
        this.brand = brand;
    }

    void accelerate() {
        // int noOfWheels = 5;
        System.out.println("Car is Accelerating!");
        System.out.println("No of Wheels = " + noOfWheels);
    }

    void deaccelerate() {
        System.out.println("Car is slowing down!");
    }

    void properties() {
        // int color = 500;
        System.out.println("No of Wheels: " + this.noOfWheels);
        System.out.println("Color: " + this.color);
        System.out.println("Brand: " + this.brand);
    }

    public static void main(String[] args) {
        Car car1 = new Car(4, "Red", "BMW");
        car1.properties();

        Car car2 = new Car(4, "Black", "Audi");
        car2.properties();
        // System.out.println(ob.noOfWheels);
    }

}
