public class ejercicio6 {
  public static void main(String[] args) {
    System.out.println("Calculos numéricos");

    double seno = 0, coseno = 0, tangente = 0, logaritmo = 0, raizCuad = 0;

	double i = 0;
	
	while(i < 10000000){
		seno+=Math.sin(i);
		coseno+=Math.cos(i);
		tangente+=Math.tan(i);
		logaritmo+=Math.log(i);
		raizCuad+=Math.sqrt(i);
		i++;
	}
  }
}