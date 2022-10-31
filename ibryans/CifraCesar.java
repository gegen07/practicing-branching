package ibryans;

import java.util.Scanner;

/**
 * Cifra de César implementada em Java
 * @author Bryan Oliveira - @ibryans
 */
class CifraCesar {
  
    public static char encode(char letter) {
        int key = 3;
        return (char) (letter + key);
    }
  
    public static String cesarEncrypt(String entry) {
        String result = "";
  
        for (int i = 0; i < entry.length(); i++)
            result += encode(entry.charAt(i));
  
        return result;
    }
  
    public static void main(String args[]) {
        String entry = "";
        Scanner scan = new Scanner(System.in);
  
        entry = scan.nextLine();

        System.out.println("Palavra cifrada: " + cesarEncrypt(entry));

        scan.close();
    }
}