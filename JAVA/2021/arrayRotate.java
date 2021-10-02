class arrayRotate {   
    public static int gcd(int a, int b) {
        if(b==0)
            return a;
        else
            return gcd(b, a%b);
    }

    public static void main(int arr[], int k) {
        System.out.println("Original array : ");
        for(int ele:arr)
            System.out.print(ele+" ");

        int l = arr.length, temp, m;
        int gcd = gcd(l,k);
        for(int i = 0;i < gcd;i++) {
            temp = arr[i];
            int gap=i;
            while(true) {
                m = gap+k;
                if(m >= l)
                    m -= l;
                if(m==i)
                    break;

                arr[gap] = arr[m];
                gap = m;
            }
            arr[gap]=temp;
        }

        System.out.println("\nRoatated array : ");
        for (int i=0;i<l;i++)
            System.out.print(arr[i]+" ");
    }
}
