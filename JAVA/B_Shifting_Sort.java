import java.util.*;
import java.lang.*;

public class B_Shifting_Sort{

public static void main(String[] args){
    Scanner sc=new Scanner(System.in);
     int t=sc.nextInt();
     while(t-->0){
         int n=sc.nextInt();
         int arr[]=new int[n];
         for(int i=0;i<n;i++){
             arr[i]=sc.nextInt();
         }
         
         ArrayList<Trip> ans=new ArrayList<>();

          for(int i=0;i<arr.length-1;i++){ 
            
            int mi=-1,me=Integer.MAX_VALUE;
             for(int j=i;j<arr.length;j++){ 
                 if(arr[j]<me){
                    me=arr[j];
                    mi=j;
                }
             }
            //  System.out.println();
        //   System.out.println("MIN Elemnt"+me);
          if(arr[i]!=me){
                 
                  ans.add(new Trip(i+1,mi+1,mi-i));
                //   System.out.println(str);
                //   ans.add(str);
                  for(int k=mi;k-1>=i;k--){
                      int temp=arr[k];
                      arr[k]=arr[k-1];
                      arr[k-1]=temp;
                  }

                 
             }

           
            //  System.out.println("Updated Array");
            //  System.out.println();
            //  for(int l:arr) System.out.print(l+" ");


          }

        System.out.println(ans.size());
        for(int i=0;i<ans.size();i++){
            Trip p=ans.get(i);
            System.out.println(p.one+" "+p.two+" "+p.three);
        }



     }
}
}



class Trip{

  int one;
  int two;
  int three;

 public Trip(int one,int two,int three){
     this.one=one;
     this.two=two;
     this.three=three;
 }


}