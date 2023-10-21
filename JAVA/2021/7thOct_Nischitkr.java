/* Devise a Java Program to create two threads(Thread-1 and Thread-2) to perform the same task by printing multiplication table of 5 and the print has to to be happened 
every 3 seconds. Stop execution of Thread-1 in between.*/

class multiply {
    public static void table() {
        try {
            for(int i = 1 ; i <= 10; i++) {
                System.out.println("5 * " + i + " = " + (5 * i));
                Thread.sleep(3000);}
        } catch (Exception e) {
            System.out.println(e);}}}
class Thread1 extends Thread {
    public void run() {
        multiply.table();}}
class Thread2 extends Thread {
    public void run() {
        multiply.table();}}
public class Q4_20BAI1159 {
    public static void main(String[] args) {
        Thread1 tt1 = new Thread1();
        Thread t1 = new Thread(tt1);
        Thread2 tt2 = new Thread2();
        Thread t2 = new Thread(tt2);
        t1.start();
        t2.start();
        try {
            Thread.sleep(3000);
        } catch (Exception e) {
            System.out.println(e);}
        System.out.println("The thread 1 is being interuppted");
        t1.interrupt();}}

