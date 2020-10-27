class permutationOfString {

    public static void printPermutation(String str, String ans){
        //if string given is blank
        if(str.length() == 0) {
            System.out.print(ans + " ");
            return;
        }

        //each time, one character is taken from string and added to answer, and same process is repeated with remaining string
        for(int i=0; i<str.length(); i++) {
            char ch = str.charAt(i);
            String remaining = str.substring(0,i) + str.substring(i+1);
            printPermutation(remaining, ans+ch);
        }
    }
    public static void main(String[] args) {
        String str = "ABC";
        printPermutation(str, "");
    }
}