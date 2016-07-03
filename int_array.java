import java.util.*;

class Intarray
{
public static void main(String args[])
{
IndexAndValue ind=new IndexAndValue();
ind.find();
}
int find()
{
int n;
Scanner sy=new Scanner(System.in);
System.out.println("Enter total no of values in the array");
n=sy.nextInt();
int a[]=new int[n];
for(i=0;i<n;i++)
a[i]=sy.nextInt();
for(int i=0;i<n;i++)
{
if(a[i]==i)
return a[i];
}
}
