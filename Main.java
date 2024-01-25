// // // // public class Main {

// // //     public static void main(String[] args) {
// // //         Vehicle vehicle = new Vehicle();
// // //         Bike bike = new Bike();

// // //         vehicle.printPattern(4);
// // //         bike.printPattern(5);
// // //     }

// // // }

// // // class Vehicle {

// // //     public void printPattern(int n) {
// // //         int num = 10;
// // //         for (int i = 1; i <= n; i++) {
// // //             for (int j = 1; j <= i; j++) {
// // //                 if (i % 2 == 0) {
// // //                     System.out.print("* ");
// // //                 } else {
// // //                     System.out.print(num + " ");
// // //                     num += 10;
// // //                 }
// // //             }
// // //             System.out.println();
// // //         }
// // //     }

// // // }

// // // class Bike extends Vehicle {

// // //     private String model;

// // //     public Bike() {
// // //         this.model = "XZ-1";
// // //     }

// // //     public void start() {
// // //         System.out.println("The " + model + " bike has started.");
// // //     }

// // //     public void printPattern(int n) {
// // //         start();
// // //         super.printPattern(n);
// // //     }

// // // }
// // // public class Main {

// // //     public static void main(String[] args) {
// // //         Vehicle vehicle = new Vehicle();
// // //         Bike bike = new Bike();

// // //         vehicle.printPattern(4);
// // //         bike.printPattern(5);
// // //     }

// // // }

// // // class Vehicle {

// // //     public void printPattern(int n) {
// // //         int num = 10;
// // //         for (int i = 1; i <= n; i++) {
// // //             for (int j = 1; j <= i; j++) {
// // //                 if (i % 2 == 0) {
// // //                     System.out.print("* ");
// // //                 } else {
// // //                     System.out.print(num + " ");
// // //                     num += 10;
// // //                 }
// // //             }
// // //             System.out.println();
// // //         }
// // //     }

// // // }

// // // class Bike extends Vehicle {

// // //     private String model;

// // //     public Bike() {
// // //         this.model = "XZ-1";
// // //     }

// // //     public void start() {
// // //         System.out.println("The " + model + " bike has started.");
// // //     }

// // //     public void printPattern(int n) {
// // //         start();
// // //         super.printPattern(n);
// // //     }

// // // }
// // public class Main {

// //     public static void main(String[] args) {
// //         Vehicle vehicle = new Vehicle();
// //         Bike bike = new Bike();

// //         vehicle.printPattern(4);
// //         bike.printPattern(5);
// //     }

// // }

// // class Vehicle {

// //     public void printPattern(int n) {
// //         int num = 10;
// //         for (int i = 1; i <= n; i++) {
// //             for (int j = 1; j <= i; j++) {
// //                 if (i % 2 == 0) {
// //                     System.out.print("* ");
// //                 } else {
// //                     System.out.print(num + " ");
// //                     num += 10;
// //                 }
// //             }
// //             System.out.println();
// //         }
// //     }

// // }

// // class Bike extends Vehicle {

// //     private String model;

// //     // public Bike() {
// //     //     this.model = "XZ-1";
// //     // }

// //     public void start() {
// //         System.out.println( model );
// //     }

// //     public void printPattern(int n) {
// //         start();
// //         super.printPattern(n);
// //     }
// // }
// import java.util.*;
// class Main{
//     public static boolean primeNumber(int n) {
//         for (int i = 2; i <n; i++) {
//             if(n%i==0){
//                 return false;
//             }
//         }
//         return true;
//     }
//     public static void main(String[] args) {
//         int n;
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the number: ");
//         n = sc.nextInt();
//         if(primeNumber(n)){
//             System.out.println("The number is prime ");
//         }else{
//             System.out.println("number is not prime ");
//         }

//     }
// }

/**
 * Main
 */
// import java.util.*;
// public class Main {

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         System.out.println("Enter the number: ");
//         int n = sc.nextInt();
//         int temp = n;
//         int digit;
//         int rem =0;

//         while(n!=0){
//         digit = n%10;
//         rem = (rem*10)+digit;
//         n = n/10;
//         }
//         if(temp == rem){
//             System.out.println("Palidrome number");
//         }else{
//             System.out.println("not prime");
//         }
//         // System.out.println("The reverse is :"+rem);
//     }
// }
/**
 * Main
 */

// 0 1 1 2 3 5
// import java.util.*;

// public class Main {

//     public static void fib(int n) {
//         // base case
//         // if (n == 0) {
//         //     return 0;
//         // }
//         // if (n == 1) {
//         //     return 1;
//         // }

//         // // recursive relation
//         // int ans = fib(n - 1) + fib(n - 2);

//         // return ans;

//         int a = 0;
//         System.out.println(a);
//         int b = 1;
//         System.out.println(b);
//         int temp = -1;

//         for (int i = 0; i < n; i++) {
            
//             temp = a; 
//             a = b; 
//             b = b + temp;

//             // temp = 0;
//             // a = 1;
//             // b = 1 + 0;
//             // temp = 1;
//             // a = 1 ;
//             // b = 1 + 1;  =2

//             System.out.print(b+" ");
//         }

    

//     }

//     public static void main(String[] args) {
//         Scanner sc = new Scanner(System.in);
//         int n = sc.nextInt();
//          fib(n);
//         // System.out.println("The nth term is " + fib);
//     }
// }



