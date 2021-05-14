#include <iostream>
using namespace std;
void higher() {
    int n1, n2, n3;
    cout << "Entre el primer numero: ";
    cin >> n1;
    cout << "Entre el segundo numero: ";
    cin >> n2;
    cout << "Entre el tercer numero: ";
    cin >> n3;

    if(n1 > n2) {
        if (n1 > n3) {
            cout << "El numero mayor es: " << n1;
        }
        else {
            cout << "El numero mayor es: " << n3;
        }
    }
    else {
        if (n2> n3) {
            cout << "El numero mayor es: " << n1;
        }
        else {
            cout << "El numero mayor es: " << n3;
        }
    }
}

void avg() {
    int opc, num;
    float sum = 0, i = 0;
    do {
        cout << "Digite un numero ";
        cin >> num;
        sum += num;
        i++;
        cout << "Desea agregar otro numero \n";
        cout << "1- Si\n";
        cout << "2- No\n";
        cin >> opc;
    } while (opc == 1);
    cout << "El promedio es " << (sum / i);
}

void factorial() {
    int num, fac = 1;
    cout << "Digite un numero ";
    cin >> num;
    while (num != 0) {
        fac = fac * num;
        num--;
    }
    cout << "El factorial es " << fac;
}

void grade() {
    int grade;
    cout << "Digite los puntos del estudainte";
    cin >> grade;
    cout << "La nota es " << (grade * 100) / 50;
}

int potencial(int base, int exp) {
    int resultado=0;
    int x=1;

    if(x>exp) {
        return 1;
    }

    if (x == exp) {
        return base;
    }

    while (x<exp){
        if (resultado<base){
            resultado=base*base;
        }
        else{
            resultado=resultado*base;
        }
        x++;
    }

    return resultado;
}

void binary() {
    int bin, index = 0, result = 0;
    cout << "Digite el numero binario";
    cin >> bin;

    while (bin > 0) {
        int mod = bin % 10;
        cout << " " << potencial(2, index);
        result = result + (mod * potencial(2, index));
        bin = bin / 10;
        index++;
    }
    cout << "El binario es " << result;
}

void digits() {
    int num, index = 0;
    cout << "Digite el numero";
    cin >> num;

    while (num > 0) {
        num = num / 10;
        index++;
    }
    cout << "El numero de digitos es " << index;
}

int main() {
    int opc;
    do {
        cout << "Digite una opcion: ";
        cout << "1- Sacar mayor de 3 numeros: ";
        cout << "2- Promedio";
        cout << "3- Factorial";
        cout << "4- Nota estudiante";
        cout << "5- Binario a decimal";
        cout << "6- Numero de digitos de un entero";
        cout << "7- Salir";
        cin >> opc;
        switch (opc) {
            case 1:
                higher();
                break;
            case 2:
                avg();
                break;
            case 3:
                factorial();
                break;
            case 4:
                grade();
                break;
            case 5:
                binary();
                break;
            case 6:
                digits();
                break;
            case 7:
                break;
        }
    } while (opc != 7);
    return 0;
}