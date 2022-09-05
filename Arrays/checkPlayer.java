import java.util.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    Scanner sc = new Scanner(System.in);
		
		Boolean checker=true;
		long lead1=0,lead2=0,lead = 0;
		long rounds = sc.nextInt();
		for(long i=1;i<=rounds;i++){
		    long x = sc.nextInt();
		    long y = sc.nextInt();
		    if(x>=y){
		        lead1 = x-y;
		        if(lead1>=lead){
		            checker=true;
		            lead=lead1;
		        }
		    }
		    else if(y>x){
		        lead2 = y-x;
		        if(lead2>=lead){
					checker=false;
		            lead=lead2;
		        }
		    }
		}
		sc.close();
		if(checker==true){
		    System.out.println(1+" "+lead);
		}
		else if(checker==false){
		    System.out.println(2+" "+lead);
		}
	}
}
