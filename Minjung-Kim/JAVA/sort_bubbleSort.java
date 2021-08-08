public class sort_bubbleSort {
    public static void main(String[] args) {
		// TODO Auto-generated method stub

		int size=10;
		int tmp=0;
		int arr[]= {10,0,1,2,4,1,6,5,7,9,3};
		
		for(int i=0; i<size;i++)
		{
			for(int j=0;j<size-i-1;j++)
			{
				if(arr[j+1]<arr[j])
				{
					tmp=arr[j];
					arr[j]=arr[j+1];
					arr[j+1]=tmp;
				}
			}
		}
	}

}
