package OOPS_In_Java.Inherttance;

public class Monty extends Papa {

    int land = 2000;

    Monty() {
        System.out.println("Monty is Born");
    }

    void display_land() {
        int x = land;
        System.out.println("Land of Monry: " + x);
    }

    public static void main(String[] args) {
        Monty m = new Monty();
        System.out.println(m.total_money);

        m.display_land();
       
    }
}
