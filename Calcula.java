/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package calculadora;
import java.util.Scanner;

/**
 *
 * @author hober
 */
public class Calcula {
    
    private float n1;
    private float n2;
    private String operador;
    
    Scanner leer = new Scanner(System.in);
    
    public Calcula () {
        
        System.out.println("Escribe el primer numero");
            n1 = leer.nextInt();
      
      
        System.out.println("Escribe el signo:");
            operador = leer.next();
        
        
        System.out.println("Escribe el segundo numero");
            n2 = leer.nextInt();
        
    }
    

    public float opera(){
        switch(operador){
            case "+":
                return(n1+n2);
            case "-": 
                return(n1-n2);
            case "*": 
                return(n1*n2);
            case "/": 
                if (n2 != 0){
                    return(n1/n2);
                } else {
                    System.out.println("Lo siento, no se puede dividir entre cero");
                }
                
            default : return(0);
        }
    }
    
}

         