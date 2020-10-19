import java.io.BufferedOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.io.OutputStream;
import java.util.Arrays;
import java.util.InputMismatchException;

class Test {
	
	boolean search(int[][] array, int key){
		for (int i = 0; i < array.length; i++) {
			if(Arrays.binarySearch(array[i], key)>=0){
				return true;
			}
		}
		return false;
	}
	
    public static void main(String[] src) throws IOException {
        InputStream inputStream = System.in;
        Reader sc = new Reader(inputStream);
        OutputStream out=new BufferedOutputStream(System.out);
        
        int m=sc.nextInt();
        int n=sc.nextInt();
        int[][] array=new int[m][n];
       
        for (int i = 0; i < array.length; i++) {
			for (int j = 0; j < array[i].length; j++) {
				array[i][j]=sc.nextInt();
			}
		}
        int num_query=sc.nextInt();
        Test obj=new Test();
        for (int i = 0; i < num_query; i++) {
        	int k=sc.nextInt();
        	out.write((k+"  "+(obj.search(array, k))+"\n").getBytes());
        }
        out.flush();
    }
    
    
    
    static class Mod{
    	private int mod=1000000007;
    	public long power(long x, long n){
    		long result=1;
    		while(n!=0){
    			if((n%2)==1){
    				result=(result*x)%mod;
    			}
    			n=n/2;
    			x=(x*x)%mod;
    		}
    		return result%mod;
    	}
    	
    	public long div(long a, long b){
    		return (long)((a%mod*(power(b, mod-2))%mod)%mod);
    	}
    	
    }

    
       static class Reader {
        	private InputStream stream;
        	private byte[] buf = new byte[8192];
        	private int curChar;
        	private int pnumChars;

        public Reader(InputStream stream) {
            this.stream = stream;
        }

        private int pread() {
            if (pnumChars == -1) {
                throw new InputMismatchException();
            }
            if (curChar >= pnumChars) {
            	
                curChar = 0;
                try {
                    pnumChars = stream.read(buf);
                } catch (IOException e) {
                    throw new InputMismatchException();
                }
                if (pnumChars <= 0) {
                    return -1;
                }
            }
            return buf[curChar++];
        }

        public int nextInt() {
            int c = pread();
            while (isSpaceChar(c))
                c = pread();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = pread();
            }
            int res = 0;
            do {
                if (c == ',') {
                    c = pread();
                }
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = pread();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public String next() {
            return nextString();
        }

        public String nextString() {
            int c = pread();
            while (isSpaceChar(c))
                c = pread();
            StringBuilder res = new StringBuilder();
            do {
                res.appendCodePoint(c);
                c = pread();
            } while (!isSpaceChar(c));
            return res.toString();
        }

        public String[] nextStringArray(int n)
        {
            String array[]=new String[n];
            for(int i=0;i<n;i++)
            {
                array[i]=nextString();
            }
            return array;
        }
        public long[] nextLongArray(int n) {
            long[] array = new long[n];
            for (int i = 0; i < n; i++) {
                array[i] = nextLong();
            }
            return array;
        }

        public double[] nextDoubleArray(int n) {
            double[] array = new double[n];
            for (int i = 0; i < n; i++) {
                array[i] = nextDouble();
            }
            return array;
        }

        public int[] nextIntArray(int n) {
            int[] array = new int[n];
            for (int i = 0; i < n; i++) {
                array[i] = nextInt();
            }
            return array;
        }
        public int[][] next2dIntArray(int n, int m) throws IOException {
    		int a[][] = new int[n][m];
    		for(int i = 0; i < n; i++)
    			for(int j = 0; j < m; j++)
    				a[i][j] = nextInt();
    		return a;
    	}


        public long nextLong() {
            int c = pread();
            while (isSpaceChar(c))
                c = pread();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = pread();
            }
            long res = 0;
            do {
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = pread();
            } while (!isSpaceChar(c));
            return res * sgn;
        }

        public double nextDouble() {
            int c = pread();
            while (isSpaceChar(c))
                c = pread();
            int sgn = 1;
            if (c == '-') {
                sgn = -1;
                c = pread();
            }
            double res = 0.0;
            do {
                if (c < '0' || c > '9') {
                    throw new InputMismatchException();
                }
                res *= 10;
                res += c - '0';
                c = pread();
            } while (!isSpaceChar(c));
            return res * sgn;
        }
        private boolean isSpaceChar(int c) {
            return c == ' ' || c == '\n' || c == '\r' || c == '\t' || c == -1;
        }
    
     }
 }