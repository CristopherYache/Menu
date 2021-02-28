#include <iostream>
#include <cstdlib>
#include<string>
#include "conio.h"
#include "math.h"
#include <windows.h> 
#include <time.h>
#include <stdio.h>
#include <string.h>
#include "No10.cpp"
char opcionp;
int x=20,y=10;

using namespace std;


int main()
{
    int opcion;
    int num1, num2,s,r,m,d;
    string  texto;
    int aux = 0, igual = 0;
      float f;
               	float i;
	            float n;
	             f = 1;
    
    int cont;
	            int sum;
              	cont = 1;
             	sum = 0;
             	            	
             				 

    
    do {
    	menu:
        system("cls");        // Para limpiar la pantalla
        cout << "\n\nMenu de Opciones" << endl;
        cout << "1. Suma,resta,multiplicacion, division de 2 numeros" << endl;
        cout << "2. Determinar si un numero es par o impar " << endl;
        cout << "3. Conversor" << endl;
        cout << "4. Determinar si una palabra o un número es palíndromo." << endl;
        cout << "5. Conversión de números arábigos a romanos (mínimo 1,000)" << endl;
        cout << "6. Conversión de números enteros a letras" << endl;
        cout << "7. Conversión de números enteros con decimal a letras " << endl;
        cout << "8. Una tabla de multiplicar " << endl;
        cout << "9. Todas las tablas de multiplicar del 1 al 10" << endl;
        cout << "10. Suma,resta,multiplicacion, division de 2 numeros" << endl;
        cout << "11. Conversión de números decimales a binario" << endl;
        cout << "12. Conversión de números decimales a hexadecimales" << endl;
        cout << "13.Crear Figuras Geométricas Básicas" << endl;
        cout << "14. Mover un punto en toda la pantalla" << endl;
        cout << "15. Simulación de un Cajero (Autómata)" << endl;
        cout << "16. Calcular la hipotenusa " << endl;
        cout << "17. Factorial de un numero " << endl;
        cout << "18. suma de los 100 primeros numeros " << endl;
        cout << "19. 10 mi nombre " << endl;
        cout << "20. Que numero es mayo " << endl;
        cout << "21. SALIR" << endl;
        
        cout << "\nIngrese una opcion: ";
        cin >> opcion;
        
        switch (opcion) {
            case 1:
                // Lista de instrucciones de la opción 1                
                cout<<"\n ingrese el 1er numero: ";
                cin>> num1;
                cout<<"\n ingrese el 2do numero";
                cin >> num2; 
                
                s=num1+num2;
                r=num1-num2;
                m=num1*num2;
                d=num1/num2;
                cout<<num1<<"+"<<num2<<"="<<s;
                cout<<"\n"<<num1<<"-"<<num2<<"="<<r;
                cout<<"\n"<<num1<<"*"<<num2<<"="<<m;
                cout<<"\n"<<num1<<"/"<<num2<<"="<<d;
 
                
                system("pause>nul"); // Pausa
                goto menu;
                break;
                
            case 2:
                // Lista de instrucciones de la opción 2                
                cout << "Ingrese un numero porfavor" << endl;
            	cin >> num1;
            	if (num1%2==0){
            		cout<<"El numero es par";	
				} else {
					cout<<"EL numero es impar";
				}
                system("pause>nul"); // Pausa
                goto menu;
                break;
                
            case 3:
                // Lista de instrucciones de la opción 3                
                int opciones;
			cout << "1) Kilometros a millas " << endl;
			cout << "2) Millas a kilometros " << endl; 
			cout << "3) Metros a pulgadas " << endl;
			cout << "4) pulgadas a metros " << endl;
			cout << "5) Libras a kilos " << endl;
			cout << "6) Kilos a libras " << endl;
			cin >> opciones;
			switch (opciones)
			{
				case 1:
					float c1, km, milla;
					cout << " Ingrese los kilometros" << endl;
					cin >> c1;
					milla = c1 * 0.6214;
					cout << " Su conversion de kilometros a millas es:  millas " << milla << endl;
					break;
				case 2:
					 float c2, millas, kilometros;
					cout << " Ingrese las millas " << endl;
					cin >> c2;
					km = c2 * 1.609;
					cout << " Su conversion de millas a kilometros es: kilometros "<< km << endl;
					break; 
				case 3:
					float c3, mt, pulg;
					cout << " Ingrese la cantidad de metros "<< endl;
					cin >> c3;
					mt = c3 * 0.0254;
					cout << " Su conversion de pulgadas a metros es: metros  "<< mt << endl;
					break;
				case 4: 	
				    float c4, mts,pul;
					cout << " Ingrese la cantidad de pulgadas " << endl;
					cin >> c4;
					pul = c4 * 39.37;
					cout << " Su conversion de metros a pulgadas es: pul "<< pul << endl;	
					break;
				case 5:
					float c5, lb,kg;
					cout << " Ingrese la cantidad de libras: "<< endl;
					cin >> c5;
					kg = c5 * 0.45;
					cout << " Su conversion de libras a kilos es: kilos " << kg << endl;
					break;
				case 6:
					float c6, lbs, kil;
					cout << " Ingrese la cantidad de kilogramos: " << endl;
					cin >> c6;
					lbs = c6 * 2.20;
					cout << " Su conversion de kilogramos a libras es: libras " << lbs << endl;
					break;
				 }
                system("pause>nul"); // Pausa            
                break;
                
            case 4:
                // Lista de instrucciones de la opción 4                
            cout << "Ingrese la palabra a evaluar: ";
             getline(cin >> ws, texto);
    
                for(int ind = texto.length() - 1; ind >= 0; ind--) {
                if(texto[ind] == texto[aux]) {
                igual++;
               }
                   aux++;
               } 
                       if(texto.length() == igual) {
                    cout << "La palabra ingresada es palindromo!! :D" << endl;
                } else {
                   cout << "La palabra ingresada no es palindromo!! :D" << endl;
                  }
           
           
            system("pause>nul"); // Pausa     
			goto menu;           
                break;
                
            case 5:
              int numero, unidades, decenas, centenas, millares;
 
 cout<< "Ingrese un numero"<<endl;
 cin>> numero;

 
 unidades = numero % 10; numero /= 10;
 decenas = numero % 10; numero /= 10;
 centenas = numero % 10; numero /= 10;
 millares = numero % 10; numero /= 10;

 switch (millares)
 {
  case 1: cout<<"M"; break;
  case 2: cout<<"MM"; break;
  case 3: cout<<"MMM"; break;
 }
 
 switch (centenas)
 {
  case 1: cout<<"C"; break;
  case 2: cout<<"CC"; break;
  case 3: cout<<"CCC"; break;
  case 4: cout<<"CD"; break;
  case 5: cout<<"D"; break;
  case 6: cout<<"DC"; break;
  case 7: cout<<"DCC"; break;
  case 8: cout<<"DCCC"; break;
  case 9: cout<<"CM"; break; 
 }
 
 switch (decenas)
 {
  case 1: cout<<"X"; break;
  case 2: cout<<"XX"; break;
  case 3: cout<<"XXX"; break;
  case 4: cout<<"XL"; break;
  case 5: cout<<"L"; break;
  case 6: cout<<"LX"; break;
  case 7: cout<<"LXX"; break;
  case 8: cout<<"LXXX"; break;
  case 9: cout<<"XC"; break; 
 }
 
 switch (unidades)
 {
  case 1: cout<<"I"; break;
  case 2: cout<<"II"; break;
  case 3: cout<<"III"; break;
  case 4: cout<<"IV"; break;
  case 5: cout<<"V"; break;
  case 6: cout<<"VI"; break;
  case 7: cout<<"VII"; break;
  case 8: cout<<"VIII"; break;
  case 9: cout<<"IX"; break;
 }
                
           
           
                
                system("pause>nul"); // Pausa     
				goto menu;           
                break;
                
            case 6:
 	{
			int x;
    		cout<<"ingrese un numero"<<endl;
    		cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else
		    {
        		if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       				else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       				else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       				else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       				else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       				else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       				else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       				else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       				else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       				else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        			if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            		if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            		if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            		if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            		if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            		if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            		if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            		if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            		if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            		if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            		if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            		if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            		if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            		if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            		if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            		if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        			if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       				else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       				else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       				else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       				else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       				else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       				else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        			if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        			if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        			if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            		if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       				else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       				else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       				else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       				else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       				else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       			}
    		
    		
		   }
         
                system("pause>nul"); // Pausa                
                break;
                
            case 7:
                // Lista de instrucciones de la opción 7                
                {
			int x;
    		cout<<"ingrese un numero"<<endl;
    		cin>>x;
			if((x<1)||(x>999)) cout<<"INGRESA UN NUMERO DEL 1 AL 999\n";
				else
		    {
        		if(x>=900)   {cout<<"NOVECIENTOS " ;x=x-900;}
       				else if(x>=800)   {cout<<"OCHOCIENTOS " ;x=x-800;}
       				else if(x>=700)   {cout<<"SETECIENTOS " ;x=x-700;}
       				else if(x>=600)   {cout<<"SEISCIENTOS " ;x=x-600;}
       				else if(x>=500)   {cout<<"QUINIENTOS "  ;x=x-500;}
       				else if(x>=400)   {cout<<"CUATROCIENTOS "   ;x=x-400;}
       				else if(x>=300)   {cout<<"TRESCIENTOS " ;x=x-300;}
       				else if(x>=200)   {cout<<"DOSCIENTOS "  ;x=x-200;}
       				else if(x>100)    {cout<<"CIENTO "  ;x=x-100;}
       				else if(x==100)  {cout<<"CIEN"     ;x=x-100;}
        			if(x>90) {cout<<"NOVENTA Y "   ;x=x-90; }
            		if(x==90)   {cout<<"NOVENTA"  ;x=x-90; }  
            		if(x>80) {cout<<"OCHENTA Y "   ;x=x-80; }
            		if(x==80)   {cout<<"OCHENTA"  ;x=x-80; }
            		if(x>70) {cout<<"SETENTA Y "   ;x=x-70; }
            		if(x==70)   {cout<<"SETENTA"  ;x=x-70; }
            		if(x>60) {cout<<"SESENTA Y "   ;x=x-60; }
            		if(x==60)   {cout<<"SESENTA"  ;x=x-60; }
            		if(x>50) {cout<<"CINCUENTA Y " ;x=x-50; }
            		if(x==50)   {cout<<"CINCUENTA"    ;x=x-50; }
            		if(x>40) {cout<<"CUARENTA Y "  ;x=x-40; }
            		if(x==40)   {cout<<"CUARENTA" ;x=x-40; }
            		if(x>30) {cout<<"TREINTA Y "   ;x=x-30; }
            		if(x==30)   {cout<<"TREINTA"  ;x=x-30; }
            		if(x>20) {cout<<"VEINTI"       ;x=x-20; }
            		if(x==20)   {cout<<"VEINTE"       ;x=x-20; }
        			if(x>=16)    {cout<<"DIECI"        ;x=x-10; }
       				else if(x==15)   {cout<<"QUINCE"       ;x=x-15; }
       				else if(x==14)   {cout<<"CATORCE"  ;x=x-14; }
       				else if(x==13)   {cout<<"TRECE"        ;x=x-13; } 
       				else if(x==12)   {cout<<"DOCE"     ;x=x-12; }
       				else if(x==11)   {cout<<"ONCE"     ;x=x-11; }
       				else if(x==10)   {cout<<"DIEZ"     ;x=x-10; }      
        			if(x==9)    {cout<<"NUEVE"        ;x=x-9;  }
        			if(x==8)    {cout<<"OCHO"     ;x=x-8;  }
        			if(x==7)    {cout<<"SIETE"        ;x=x-7;  }
            		if(x==6)    {cout<<"SEIS"     ;x=x-6;  }
       				else if(x==5)    {cout<<"CINCO"        ;x=x-5;  }
       				else if(x==4)    {cout<<"CUATRO"       ;x=x-4;  }
       				else if(x==3)    {cout<<"TRES"     ;x=x-3;  }
       				else if(x==2)    {cout<<"DOS"      ;x=x-2;  }
       				else if(x==1)    {cout<<"UNO"      ;x=x-1;  }
       			}
    		
    		
		   }
                
                system("pause>nul"); // Pausa                
                break;  
                
            case 8:
                // Lista de instrucciones de la opción 8                
                cout << "Digite un numero" << endl;
                	cin >> num1;
             	num2 = 1;
	          while (num2<=10) {
		      cout << num1 << " x " << num2 << " = " << num1*num2 << endl;
	        	num2 = num2+1;
	}
                system("pause>nul"); // Pausa        
				goto menu;        
                break;
                
            case 9:
                // Lista de instrucciones de la opción 9                
                float i;
	float j;
	for (i=0;i<=10;i++) {
		for (j=0;j<=10;j++) {
			cout << i << " * " << j << " = " << i*j << endl;
		}
	}
                system("pause>nul"); // Pausa                
                break;  
                
            case 10:
          {
          	control();
          	void control();
		  }

     
                
                
                break;
                
            case 11:
                // Lista de instrucciones de la opción 11               
      
   {
    cout << "Ingrese un numero entero positivo: \n";
    int numero;
    string binario = "";
    cin >> numero;
    if (numero > 0) {
        while (numero > 0) {
            if (numero%2 == 0) {
                binario = "0"+binario;
            } else {
                binario = "1"+binario;
            }
            numero = (int) numero/2;
        }
    } else if (numero == 0) {
        binario = "0";
    } else {
        binario = "No se puede realizar la conversión. Ingrese solo numeros positivos";
    }
    cout << "El resultado de la conversion es: " << binario;
    return 0;
}
                system("pause>nul"); // Pausa                
                break;    
                
            case 12:
                 {
	int mynum;
	cout << "\n    Entra un numero: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	cout.setf(ios::oct);
	cout << "\n    En Octal: " << mynum;
	cout.unsetf(ios::oct | ios::showbase);
	cout.setf(ios::dec);
	cout << "\n\n";
	system("pause");
	return 0;
}
	                  
   


                system("pause>nul"); // Pausa                
                break;
                
            case 13:
                // Lista de instrucciones de la opción 13                
                {
				int n5 ;
    			cout << " Ingrese un numero : " ;
    			cin >> n5 ;
    			for (int j = 0; j < n5 ; ++j) {
        		for (int i = 0; i < n5-j-1; ++i)
        		    cout << " ";
        			for (int i = 0; i < 2*j+1; ++i)
            		 cout << "*" ;
        			cout << endl ;
    			}

   				 for (int j=n5-2; j>=0; --j) {
    			    for (int i=0; i<n5-j-1; ++i)
        		    cout << " " ;
        			for (int i=0; i<2*j+1; ++i)
        		    cout << "*" ;
       				 cout << endl ;
    			}
	}
                system("pause>nul"); // Pausa                
                break;
                
            case 14:
            	{
				if(opcionp!='p'){
				while (opcionp!='p'){
					system("cls");
					gotoxy(20,1);cout<<" Datos para mover el punto: ";
					gotoxy(20,2);cout<<" W-arriba, S-abajo, A-izquierda, D-derecha, P-salir ";
					gotoxy(x,y);cout<<".";
					opcionp=getch();
					switch(opcionp){
						case 'w' : y--;
						case 's' : y++;
						case 'a' : x--;
						case 'd' : x++;
					}
				}
			        system("pause");	
				}
			}
				
              

                system("pause>nul"); // Pausa                
                break;
                
            case 15:
            	
       {
				int saldo_inicial = 3000;
				int saldo, retiro,opcion, agregar;
				
				cout<<"\tBienvenido a su cajero virtual";
				cout<<"\n Escoja una opcion: ";
				cout<<"\n 1) Ingreso en cuenta";
				cout<<"\n 2) Retiro";
				cout<<"\n 3) Ver su saldo de cuenta";
				cout<<"\n 4) Salir";
				cout<<"\n Digite la opcion a la que desea acceder: ";
				cin>>opcion;
				
				if(opcion==1){
					cout<<"\n Ingrese la cantidad a depositar: ";
					cin>>agregar;
					saldo = saldo_inicial + agregar;
					cout<<"\n Cantidad disponible en su cuenta: "<<saldo;	
				}
				else if(opcion==2){
					cout<<"\n Ingrese la cantidad que desea retirar: ";
					cin>>retiro;
					if(retiro>3000){
						cout<<"\n La cantidad que desea retirar es mayor a su saldo, digite nuevamente la cantidad a retirar";
						cin>>retiro;
					}
					saldo= saldo_inicial - retiro;
					cout<<"\n Su cantidad disponible es: "<<saldo;
				}
				else if(opcion==3){
					cout<<"\n La cantidad disponible en cuenta es de: "<<saldo_inicial;	
				}
				else if(opcion==4){
					cout<<"\n Gracias por utilizar nuestro cajero automata";
				}
				else{
					cout<<"\n La opcion marcada no esta disponible";
				}
				cin.get();
				return 0;
			}



                system("pause>nul"); // Pausa                
                break;
                
            case 16:
                // Lista de instrucciones de la opción 16                
                double q,v,z;
    cout<<"ingrese un cateto"<<endl;
    cin>>q;
    cout<<"ingrese el otro cateto"<<endl;
    cin>>v;
    z=sqrt((q*q+v*v));
    cout<<z;
                	
                system("pause>nul"); // Pausa        
				goto menu;        
                break;
                
            case 17:
                // Lista de instrucciones de la opción 17                
              
	            cout << "Digite un numero: " << endl;
	            cin >> n;
	            for (i=1;i<=n;i++) {
		        f = f*i;
	}
	cout << "Eñ factorial de: " << n << "es: " << f << endl;
                system("pause>nul"); // Pausa    
				goto menu;            
                break;   
                
            case 18:
                // Lista de instrucciones de la opción 18                
                
               	while (cont<=100) {
	               	sum = sum+cont;
	                	cont = cont+1;
	}
	cout << "la suma de los 100 primeros numeros es " << sum << endl;
		
                system("pause>nul"); // Pausa           
				goto menu;     
                break;   
                
            case 19:
                // Lista de instrucciones de la opción 4                
               	float p;
	for (p=1;p<=10;p++) {
		cout << "Cristopher Yache" << endl;
	}
                system("pause>nul"); // Pausa                
                break;    
                
            case 20:
                // Lista de instrucciones de la opción 20                
                int a;
	int b;
	int c;
	cout << "Ingrese el 1er numero" << endl;
	cin >> a;
	cout << "Ingrese el 2do numero" << endl;
	cin >> b;
	cout << "Ingrese el 3er numero" << endl;
	cin >> c;
	if (a>b && a>c) {
		cout << "el numero mayor es: " << a << endl;
	} else {
		if (b>a && b>c) {
			cout << "el numero mayor es: " << b << endl;
		} else {
			if (c>a && c>b) {
				cout << "el numero mayor es: " << c << endl;
			} else {
				cout << "los numero ingresados son iguales: " << endl;
			}
		}
	}
                system("pause>nul"); // Pausa                
                break;
                
        }        
    } while (opcion != 21);  
	     // En vez de 5 pones el número de la opción de SALIDA        
    return 0;
}
    










