// there are two ways by which we can read input
// 1) using Scanner class from java.util.*
// 2) using BufferedReader from java.io.*

import java.util.*;
import java.io.*;

class ReadInputExample {
    public static void main (String args[]) throws IOException {

        String s;
        int x;
        float f;

        // method-1
        Scanner sc = new Scanner(System.in);

        s = sc.nextLine();
        x = sc.nextInt();
        f = sc.nextFloat();

        System.out.println("s = "+s+",x = "+x+",f = "+f);
        // s = Ganesh,x = 2,f = 7.2

        // method-2
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        s = br.readLine();
        x = Integer.parseInt(br.readLine());
        f = Float.parseFloat(br.readLine());

        System.out.println("s = "+s+",x = "+x+",f = "+f);
        // s = Ganesh,x = 2,f = 7.2

    }
}

// Scanner
// 1) nextInt
// 2) nextShort
// 3) nextLong
// 4) nextFloat
// 5) nextDouble
// 6) nextBoolean
// 7) nextLine