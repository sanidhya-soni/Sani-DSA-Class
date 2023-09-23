package OOPS_In_Java;

public class StaticKeyword {

    static {
        System.out.println("Second Block");
    }

    static {
        x = 40;
    }

    static int x = 10;

    int z = 10;

    static void display() {
        System.out.println("Display");
    }

    public static void main(String[] args) {
        StaticKeyword ob = new StaticKeyword();

        System.out.println(StaticKeyword.x);

        StaticKeyword.display();

    }
}