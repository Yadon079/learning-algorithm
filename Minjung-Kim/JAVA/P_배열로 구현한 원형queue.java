package makequeue;
//queue는 FIFO First IN First Out
//makequeue
//push
//pop
//ispull
//isempty
//isclearly
public class mqueue {

	int start=-1;
	int end=0;
	int queuesize;
	int arr[];
	
	public mqueue (int queuesize)
	{
		int start=-1;
		int end=0;
		this.queuesize=queuesize;
		arr = new int[this.queuesize];
		
	}
	public boolean pull() {
		
		if(start == end)
		{
			System.out.println("This Queue is pull");
			return true;
		}
		else return false;
	}
	
	public boolean empty() {
		
		if(start == end-1)
		{
			System.out.println("This queue is empty");
			return true;
		}
		else return false;
	}
	
	public void push(int num)
	{
		if(start==-1)
		{
			start=0;
			arr[end++] = num;
		}
		else if(pull()==false)
		{
		
		arr[end++] = num;
		
		if(end==queuesize)
		{
			end=0;
		}
		}
		else System.out.println("can't");
	}
	
	public void pop()
	{
		if(empty()==false)
		{
			if(start==5) start=0;
			arr[start]=999;
			start++;		
		}
		else System.out.println("aleady empty");
		
	}
	public void printqueue()
	{
		for(int i=0;i<queuesize;i++)
		{
			System.out.println("i="+i+" ["+arr[i]+"]");
		}
	}
	
	public static void main(String args[])
	{
		
		mqueue mqueue =  new mqueue(5);
		
		mqueue.push(1);
		mqueue.push(2);

		mqueue.pop();
		mqueue.push(5);
		mqueue.pop();
		mqueue.printqueue();
		
	}
}
