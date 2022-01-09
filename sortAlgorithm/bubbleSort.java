/*
 * Demo:
 *      The bubble sort algorithm based on Java
 */


public class bubbleSort{
	public static void main(String[] argv){
		// initialize an array
		int array[] = new int[] {3,1,2,4,0,10,9,12,6,20};
		// initialize the tmp
		int tmp = 0;

		// bubble sort
		for(int j=array.length-1;j>1;j--){
			for(int i=0;i<j;i++){
				if(array[i] > array[i+1]){
					tmp = array[i];
					array[i] = array[i+1];
					array[i+1] = tmp;
				}else{
					continue;
				}
			}
		}

		// print the array based on bubble sort algorithm
		for(int index=0;index<array.length;index++){
			if(index == array.length-1){
				System.out.println(array[index]);
			}else{
				System.out.print(array[index] + " ");
			}
		}
	}
}

