import java.util.*;
import java.lang.*;




public class B_Suffix_Structures{

public static boolean cond2=false;


public static void check(String s,String t,int i,String ans){
  

    int a=0,b=0;
    while(a<s.length() && b<t.length()){
        if(s.charAt(a)==t.charAt(b)){
            ++a;
            ++b;
        }else{
            ++a;
        }
    }

    if(b==t.length()){
        cond2=true;
    }
    

}



public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
     String s=sc.next();
     String t=sc.next();
      
     HashMap<Character,Integer> maps=new HashMap<>();
     HashMap<Character,Integer> mapt=new HashMap<>();

     for(int i=0;i<s.length();i++){
         char temp=s.charAt(i);
         if(maps.containsKey(temp)){
            int nv=maps.get(temp)+1;
            maps.put(temp,nv);
         }else{
             maps.put(temp,1);
         }
     }


     for(int i=0;i<t.length();i++){
        char temp=t.charAt(i);
        if(mapt.containsKey(temp)){
            int nv=mapt.get(temp)+1;
            mapt.put(temp,nv);
        }else{
            mapt.put(temp,1);
        }
    }

     boolean cond1=true;
    for(int j=0;j<t.length();j++){
        char c=t.charAt(j);
        int temp1=0;
         if(maps.containsKey(c)){
         temp1=maps.get(c);
        }
         int temp2=mapt.get(c);
         if(temp1<temp2){
             cond1=false;
            //  System.out.println("Cond1 failed at"+ c);
             break;
         }
    }

//    System.out.println(cond1);
   if(cond1==true){
         check(s,t,0,"");
        if(cond2==true){
           System.out.println("automaton");
        }else if(s.length()==t.length()){
           System.out.println("array");
        }else{
           System.out.println("both");
        }
   }else{
       System.out.println("need tree");
   }




}
}
