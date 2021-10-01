import java.util.Arrays;
class Main {
  public static void main(String[] args) {
    String wd1 = "Night";
    String swd2 = "Thing";
    
    wd1 = wd1.toLowerCase();
    wd2 = wd2.toLowerCase();

    // check if length is same
    if(wd1.length() == wd2.length()) {

      // convert strings to char array
      char[] charArray1 = wd1.toCharArray();
      char[] charArray2 = wd2.toCharArray();

      // sort the char array
      
      Arrays.sort(charArray1);
      Arrays.sort(charArray2);
      
      // if sorted char arrays are same
      // then the string is anagram
      
      boolean result = Arrays.equals(charArray1, charArray2);

      if(result) {
        System.out.println(wd1 + " and " + wd2 + " are anagram.");
      }
      else {
        System.out.println(wd1 + " and " + wd2 + " are not anagram.");
      }
    }
    else {
      System.out.println(wd1 + " and " + wd2 + " are not anagram.");
    }
  }
}
