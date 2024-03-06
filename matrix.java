
import java.util.Scanner;

public class matrix {

 public static void main(String[] args) {
    Scanner input=new Scanner(System.in);
    
    System.out.println("Enter size of row:- ");
    int row=input.nextInt();
    System.out.println("Enter size of row:- ");
    int col=input.nextInt();
    

    int[][] matrix=new int[row][col];
    System.out.println("Enter element:-");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j]=input.nextInt();
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            System.out.print(matrix[i][j]+" ");
        }
        System.out.println();
    }
 }   
}