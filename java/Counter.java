package java;

import java.util.Date;

public class Counter {

    public static void main(String[] args) {
        var start = new Date().getTime();
        int count = 1000000000;

        while (count > 0) {
            count--;
        }

        var end = new Date().getTime();

        System.err.println(end - start);
    }
}