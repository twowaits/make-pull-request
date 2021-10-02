 static void pattern(int n, int last) {
        int i = 1;
        int[][] arr = new int[n][last];
        int row = -1;
        int column = 0;
        while (i < last+1) {
            if (row == 0||row==-1) {
                while (row != n-1) {
                    row++;
                    arr[row][column] = i;
                    column++;
                    i++;
                    if(i==last+1){
                        break;
                    }
                }
            } else {
                while (row != 0) {
                    row--;
                    arr[row][column] = i;
                    column++;
                    i++;
                    if(i==last+1){
                        break;
                    }
                }
            }
        }
        for (int j = 0; j < arr.length; j++) {
            for (int k = 0; k < arr[j].length; k++) {
                if(arr[j][k]!=0) {
                    System.out.print(arr[j][k]);
                }else{
                    System.out.print(" ");
                }
            }
            System.out.println("");
        }
    }
