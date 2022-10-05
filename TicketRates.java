package 出票系统;
import java.util.Scanner;

public class TicketRates {

	public static void main(String[] args) {
		/*1,判断淡旺季 旺季（4月-10月）其他位淡季 if else 判断 
		 * 1-12月份键入 用scanner扫描器来实现接收
		 * 判断出淡旺季 将进入旺季和淡季的分支
		 * 2，旺季分支 又要判断年龄同样也要使用scanner来键入并判断 
		 * 成人（18-60）：60元
		 * 儿童（<18）:半价（30元）
		 * 老人（>60）:票价的1/3
		 * 3，淡季
		 * 年龄判断 只需要判断成人（18-60）;40元
		 * 其他：20元
		 * */
		System.out.println("请输入月份1-12：");
		Scanner myScanner = new Scanner(System.in);
		
		int moon = myScanner.nextInt();
		if(moon >= 4 && moon <= 10) {
		 System.out.println("本月是旺季月份！！");
		 System.out.println("请输入年龄：");
		 int age = myScanner.nextInt();
		 if(age >= 18 && age <= 60) {
			 System.out.println("成人票价为60元/位！");
		 }else if(age < 18) {
			 System.out.println("儿童票价为半价， 30元/位！");
			 
		 }else {
			 System.out.println("老年人票价为成人票价的1/3,20元/位！");
		 }
		 	 
		}else {
			System.out.println("本月是淡季月份！！");
			 System.out.println("请输入年龄：");
			 int age = myScanner.nextInt();
			 if(age >= 18 && age <=60 ) {
				 System.out.println("成人票价为40元/位！");
			 }else {
				 System.out.println("儿童或老人票价均为20元/位！");
			 }
			
		}
		

	}

}
