package OOPS_In_Java.Package1;

public class B {

    public static void main(String[] args) {
        A<Integer> ob = new A<Integer>();
        ob.set_sani(500);
        System.out.println("Sani B = " + ob.get_sani());

        ob.run = 100;
        System.out.println(ob.run);

    }
}
