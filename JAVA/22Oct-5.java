
class jumbowords
{
    void ip(String jumble)
    { 
        int l=jumble.length();
       char [] split= jumble.toCharArray();
       int e=l;
       String astr="";
       
    String [] jumboword= new String[e];
       for(int fact=l-1; fact>0;fact--){
          e*=fact ;}
          int v=1;
    while (v<e)
     {     for (double y=l-1; y>0; y--)
         { double j= Math.floor(Math.random() * (y+1));
        int o=(int) Math.round(y);
        int m= (int)Math.round(j);
       char tem= split[o];
       split[o]=split[m];
       split[m]=tem;
      }
       //System.out.println(split.join(" ") );
      for (int w=0;w<l;w++)
         { System.out.print(split[w]);}
          
      System.out.println(",");
    
      v++;}
}
public static void main(String[] args){
    jumbowords obj=new jumbowords();
    obj.ip("word");
}
}
