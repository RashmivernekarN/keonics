//emp salary slip
class employee
{
	int emp_id,basic,hra,da,gross,pf,net;
	void getdata(int id,int x)
	{
		emp_id=id;
		basic=x;
	}
	void salary()
	{
	  hra=basic*16/100;
	  da=basic*32/100;
	  gross=basic+hra+da;
	  pf=basic*12/100;
	  net=gross-pf;
	 System.out.println("\n\temp id= "+emp_id+"\n\tbasic="+basic);
System.out.println("\n\thra="+hra+"\n\tda="+da+"\n\tgross="+gross+"\n\tpf="+pf+"\n\tnet="+net);	  	}

}
class emp
{
	public static void main(String[] args) {
		
	 employee e=new employee();
	 e.getdata(101,9000);
	 e.salary();
	}
}
