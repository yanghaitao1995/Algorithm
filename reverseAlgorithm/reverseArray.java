/*
 * Demo:
 *      array reverse based on Java
 */

public class reverseArray{
	public static void main(String[] argv){
		// initialize an array
		int array[] = new int[] {1,2,3,4,5,6,7,8,9,10};
		// initialize the tmp
		int tmp = 0;

		// exchange array element
		for(int i=0,j=array.length-1;i<j;i++,j--){
			tmp = array[i];
			array[i] = array[j];
			array[j] = tmp;
		}

		// print the array after reverse
		for(int index=0;index<array.length;index++){
			if(index == array.length-1){
				System.out.println(array[index]);
			}
			else{
				System.out.print(array[index] + " ");
			}
		}
	}
}

