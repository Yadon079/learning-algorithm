
//stack 생성
// pop
// push
// clear 초기화
// pull 
// empty
public class makeStack {

	int top=-1;
	int stacksize;
	int arr[];
	
	public makeStack (int stacksize)
	{
		top= -1;
		this.stacksize=stacksize;
		arr = new int [this.stacksize];
		
		System.out.println("Stack publishing");
		
	}
	public boolean empty() {
		return (top == -1);
	}
	
	public boolean full() {
		return (top ==stacksize-1);
	}
	
	public void push(int insert)
	{
		if(full()==true)
		{
			System.out.println("Stack is full");
		}
		else{
			arr[++top]=insert;
			System.out.println("Stack push");
			
			
		}
		
	}
	
	public void pop()
	{
		
		if(empty()==true)
		{
			System.out.println("Stack is aleady empty");
			
		}
		else {
			
			arr[top--]=0;
		}
		
	}
	public void clear() {
		
		if(empty()==true) System.out.println("aleady clean");
		else {
			top = -1;
			arr =new int [stacksize];
		}
	}
	public void printstack() {
		
		for(int i=0;i<=top; i++)
		{
			System.out.print("["+arr[i]+"]");
		}
		System.out.println();
	}
	public static void main(String args[]) {
	
	
		makeStack makeStack =new makeStack(10);
		
		makeStack.push(5);
		makeStack.push(10);
		makeStack.push(15);
		makeStack.printstack();
		makeStack.pop();
		makeStack.printstack();
		makeStack.clear();
		makeStack.printstack();
		makeStack.push(20);
		makeStack.printstack();		
	}

}
