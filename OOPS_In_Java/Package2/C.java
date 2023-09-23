package OOPS_In_Java.Package2;

import java.io.BufferedReader;
import java.io.*;
import java.util.Scanner;

import OOPS_In_Java.Package1.A;

public class C extends A {

    void input1() throws IOException {

        // BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // System.out.println("Enter the nteger");

        // // String s = br.readLine();


        // int x = Integer.parseInt(br.readLine());

        // System.out.println("Enter the double");

        // double y = Double.parseDouble(br.readLine());

        // System.out.println("Output in int: " + x);
        // System.out.println("Output in double: " + y);

        // String e = "24";
        // int io = Integer.parseInt(e);

        // System.out.println(io);

        PrintWriter pw = new PrintWriter(System.out, true);

        pw.print("Hey There");
        pw.println("This is me");


    }
    public static void main(String[] args) {

        // Scanner sc = new Scanner(System.in);
        // sc.nextInt();

        

        C ob = new C();
        try {
            ob.input1();
        } catch (IOException e) {
            System.out.println("Exception found in code");
        }
        
        // System.out.println("Sani C = " + ob.sani);
    }
}
