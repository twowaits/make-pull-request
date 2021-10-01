import java.util.Arrays;

public class Sort012 {
    public static void sortNums(int[] nums) {
        int zero = 0;
        int two = nums.length - 1;
        for (int one = 0; one <= two; one++) {
            if (nums[one] == 0) {
                swap(nums, zero++, one);
            } else if (nums[one] == 2) {
                swap(nums, one--, two--);
            }
        }
    }

    public static void swap(int[] nums, int index1, int index2) {
        int temp = nums[index1];
        nums[index1] = nums[index2];
        nums[index2] = temp;
    }

    public static void main(String[] args) {
        int nums[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
        System.out.println("Array before sorting");
        System.out.println(Arrays.toString(nums));
        sortNums(nums);
        System.out.println("\nArray after sorting");
        System.out.println(Arrays.toString(nums));
    }
}
