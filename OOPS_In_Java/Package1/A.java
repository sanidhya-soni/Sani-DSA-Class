package OOPS_In_Java.Package1;

import java.util.Scanner;

public class A <Swarnima>{
    private int sani = 100;

    Swarnima run;

    void set_sani(int x) {
        sani = x;
    }

    int get_sani() {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the password: ");
        int pass = sc.nextInt();

        if(pass == 1234) {
            return this.sani;
        }
        return -1;
    }

    public static void main(String[] args) {
        A ob = new A();
        System.out.println(ob.sani);
    }
}
