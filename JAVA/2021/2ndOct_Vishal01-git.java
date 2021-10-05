public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        int row = sc.nextInt();
        int column = sc.nextInt();

        ZigZag(row, column);

    }

    public static void ZigZag(int row, int column) {
        int label = 1;
        for (int j = 1; j <= column; j++) {
            if (j == label) {
                System.out.print(label);
                label += (row - 1) * 2;
            } else
                System.out.print("  ");
        }
        System.out.println();

        for (int i = 2; i <= row - 1; i++) {
            label = i;
            int label1 = (row * 2) - i;
            for (int j = 1; j <= column; j++) {
                if (j == label) {
                    System.out.print(label);
                    label += (row - 1) * 2;
                } else if (j == label1) {
                    System.out.print(label1);
                    label1 += (row - 1) * 2;
                } else
                    System.out.print("  ");
            }
            System.out.println();
        }

        label = row;
        for (int j = 1; j <= column; j++) {
            if (j == label) {
                System.out.print(label);
                label += (row - 1) * 2;
            } else
                System.out.print("  ");
        }
    }
