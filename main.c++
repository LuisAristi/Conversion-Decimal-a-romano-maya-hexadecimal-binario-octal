//integrantes del equipo [PB_INFERNUS_MAXIMUS]
//Leonardo David Navarro Diaz // 0222020006
//Kenner Kaez Jaime// 0222010034
//luis santiago aristizabal // 0222310005
#include <iostream>
using namespace std;

// Prototipos de función
int menu(int &choice);
int mostrarOpciones(int &opc);
int binaryToDecimal(string binaryNumber);
int octalToDecimal(long long octalNumber);
int hexadecimalToDecimal(string hexadecimalNumber);
int romanToDecimal(string romanNumber);
int findPowerLevel(int number);
void printNumber(int number);
void printSeperateLine();
void printMayanNumber(int number);
void entero(long long &number);
void cadena(string &numero);
void caracteresValidos();
void maya(int maya[], int &numDigits);
int convertVigesimalToDecimal(int arr[], int size);
string decimalToBinary(long long int decimalNumber);
int decimalToOctal(int decimalNumber);
string decimalToHexadecimal(int decimalNumber);
string decimalToRoman(int decimalNumber);
int elp(int base, int exponent);


int main() {    
    int choice, subchoice, numero = 0, Nmaya[20], digitosMayas = 0, numMaya, bin, octal, conOctal, roma, conroma;\
    long long int decimal;
    string idk, Nromano, conBin;

    inicio:
    do {
        switch(menu(choice)) {
            case 1:
                // TODO: Implement DECIMAL option
                cout<<"ingrese numero decimal a convertir: "; cin>>decimal;
                caso1:
                switch(mostrarOpciones(subchoice)){
                    case 1:
                        cout<<"decimal: "<<decimal;
                        break;
                    case 2:
                        cout<<"su numero binario es: "<<decimalToBinary(decimal);
                        break;
                    case 3:
                        cout<<"su numero octal es: "<<decimalToOctal(decimal);
                        break;
                    case 4:
                        cout<<"su numero hexadecimal es: "<<decimalToHexadecimal(decimal);
                        break;
                    case 5:
                        cout<<"su numero romano es: "<<decimalToRoman(decimal);
                        break;
                    case 6:
                        cout<<"su numero maya es: "<<endl; printMayanNumber(decimal);
                        break;
                    case 7:
                        goto inicio;
                    default:
                        cout<<"Opción inválida. Por favor, ingrese una opción válida."<<endl;
                        goto caso1;
                        break;
                }
                break;
            case 2:
                // TODO: Implement BINARIO option
                cout<<"recuerde que los digitos de un binario no pueden ser diferente de 1 o 0"<<endl;
                cout<<"ingrese su numero binario: "; fflush(stdin); cin>>conBin;
                bin = binaryToDecimal(conBin);
                caso2:
                switch(mostrarOpciones(subchoice)){
                    case 1:
                        cout<<"su numero de binario a decimal es: "<<bin;
                        break;
                    case 2:
                        cout<<"el binario es: "<<conBin;
                        break;
                    case 3:
                        cout<<"su numero octal es: "<<decimalToOctal(bin);
                        break;
                    case 4:
                        cout<<"su numero hexadecimal es: "<<decimalToHexadecimal(bin);
                        break;
                    case 5:
                        cout<<"su numero romano es: "<<decimalToRoman(bin);
                        break;
                    case 6:
                        cout<<"su numero maya es: "<<endl; printMayanNumber(bin);
                        break;
                    case 7:
                        goto inicio;
                    default:
                        cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                        goto caso2;
                        break;
                }
                break;
            case 3:
                // TODO: Implement OCTAL option
                cout<<"recuerde ue los numeros octales van del 0 al 7"<<endl<<"ingrese su numero octal: ";
                cin>>octal;
                conOctal = octalToDecimal(octal);
                caso3:
                switch(mostrarOpciones(subchoice)){
                    case 1:
                        cout<<"su numero a decimal es: "<<conOctal;
                        break;
                    case 2:
                        cout<<"su numero binario es: "<<decimalToBinary(conOctal);
                        break;
                    case 3:
                        cout<<"su numero octal es: "<<octal;
                        break;
                    case 4:
                        cout<<"su numero hexadecimal es: "<<decimalToHexadecimal(conOctal);
                        break;
                    case 5:
                        cout<<"su numero romano es: "<<decimalToRoman(conOctal);
                        break;
                    case 6:
                        cout<<"su numero maya es: "<<endl; printMayanNumber(conOctal);
                        break;
                    case 7:
                        goto inicio;
                        break;
                    default:
                        cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                        goto caso3;
                        break;
                }
                break;
            case 4:
                // TODO: Implement HEXADECIMAL option
                caso4:
                switch(mostrarOpciones(subchoice)){
                    case 1:

                        break;
                    case 2:
                        break;
                    case 3:
                        break;
                    case 4:
                        break;
                    case 5:
                        break;
                    case 6:
                        break;
                    case 7:
                        goto inicio;
                        break;
                    default:
                        cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                        goto caso4;
                        break;
                }
                break;
            case 5:
                // TODO: Implement ROMANO option
                cadena(Nromano);
                caso5:
                caracteresValidos();
                roma = romanToDecimal(Nromano);
                switch(mostrarOpciones(subchoice)){
                    case 1:
                        cout<<"su numero decimal es: "<<roma;
                        break;
                    case 2:
                        cout<<"su numero binario es: "<<decimalToBinary(roma);
                        break;
                    case 3:
                        cout<<"su numero octal es: "<<decimalToOctal(roma);
                        break;
                    case 4:
                        cout<<"su numero a hexadecimal es: "<<decimalToHexadecimal(roma);
                        break;
                    case 5:
                        cout<<Nromano;
                        break;
                    case 6:
                        cout<<"su numero maya es: "<<endl; printMayanNumber(roma);
                        break;
                    case 7:
                        goto inicio;
                        break;
                    default:
                        cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                        goto caso5;
                        break;
                }
                break;
            case 6:
                // TODO: Implement MAYA option
                maya(Nmaya, digitosMayas);
                caso6:
                numMaya = convertVigesimalToDecimal(Nmaya, digitosMayas);
                switch(mostrarOpciones(subchoice)){
                    case 1:
                        cout<<numMaya;
                        break;
                    case 2:
                        cout<<"su numero binario es: "<<decimalToBinary(numMaya);
                        break;
                    case 3:
                        cout<<"su numero octal es: "<<decimalToOctal(numMaya);
                        break;
                    case 4:
                        cout<<"su numero octal es: "<<decimalToOctal(numMaya);
                        break;
                    case 5:
                        cout<<"su numero romano es: "<<decimalToRoman(numMaya);
                        break;
                    case 6:
                        cout<<"su numero maya en escritura maya es"<<endl; printMayanNumber(numMaya);
                        break;
                    case 7:
                        goto inicio;
                        break;
                    default:
                        cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                        goto caso6;
                        break;
                }
                break;
            case 7:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Por favor, ingrese una opción válida." << endl;
                break;
        }
        
    } while(choice != 7);
    
    return 0;
}

// Implementación de la función
int menu(int &choice){
    cout << " #####  ###  #####  ####### ####### #     #    #     #####     ######  #######    #     # #     # #     # ####### ######     #     #####  ### ####### #     # " << endl;
    cout << "#     #  #  #     #    #    #       ##   ##   # #   #     #    #     # #          ##    # #     # ##   ## #       #     #   # #   #     #  #  #     # ##    #" << endl;
    cout << "#        #  #          #    #       # # # #  #   #  #          #     # #          # #   # #     # # # # # #       #     #  #   #  #        #  #     # # #   # " << endl;
    cout << " #####   #   #####     #    #####   #  #  # #     #  #####     #     # #####      #  #  # #     # #  #  # #####   ######  #     # #        #  #     # #  #  # " << endl;
    cout << "      #  #        #    #    #       #     # #######       #    #     # #          #   # # #     # #     # #       #   #   ####### #        #  #     # #   # # " << endl;
    cout << "#     #  #  #     #    #    #       #     # #     # #     #    #     # #          #    ## #     # #     # #       #    #  #     # #     #  #  #     # #    ## " << endl;
    cout << " #####  ###  #####     #    ####### #     # #     #  #####     ######  #######    #     #  #####  #     # ####### #     # #     #  #####  ### ####### #     # " << endl;
    cout << "1. DECIMAL" << endl;
    cout << "2. BINARIO" << endl;
    cout << "3. OCTAL" << endl;
    cout << "4. HEXADECIMAL" << endl;
    cout << "5. ROMANO" << endl;
    cout << "6. MAYA" << endl;
    cout << "7. SALIR" << endl;

    cout << "Ingrese su opción: ";
    cin >> choice;
    return choice;
}

int mostrarOpciones(int &opc){
    cout<<"Seleccione a qué desea convertir:" << endl;
    cout<<"1. DECIMAL" << endl;
    cout<<"2. BINARIO" << endl;
    cout<<"3. OCTAL" << endl;
    cout<<"4. HEXADECIMAL" << endl;
    cout<<"5. ROMANO" << endl;
    cout<<"6. MAYA " << endl;
    cout<<"7. Salir " << endl;
    cin>>opc;
    return opc;
}

int binaryToDecimal(string binaryNumber) {
    int decimalNumber = 0;
    int length = binaryNumber.size();
    for (int i = 0; i < length; i++) {
        if (binaryNumber[i] == '1') {
            decimalNumber += elp(2, length - 1 - i);
        }
    }
    return decimalNumber;
}

int octalToDecimal(long long octalNumber) {
    int decimalNumber = 0, i = 0, remainder;
    while (octalNumber != 0) {
        remainder = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += remainder * elp(8, i);
        ++i;
    }
    return decimalNumber;
}

int hexadecimalToDecimal(string hexadecimalNumber) {
    int decimalNumber = 0;
    int power = 0;
    for (int i = hexadecimalNumber.length() - 1; i >= 0; i--) {
        char digit = hexadecimalNumber[i];
        int value;
        if (isdigit(digit)) {
            value = digit - '0';
        } else {
            value = toupper(digit) - 'A' + 10;
        }
        decimalNumber += value * elp(16, power);
        power++;
    }
    return decimalNumber;
}

int romanToDecimal(string romanNumber) {
    int decimalNumber = 0;

    for (int i = 0; i < romanNumber.length(); i++) {
        char currentChar = romanNumber[i];

        switch (currentChar) {
            case 'I':
                if (i + 1 < romanNumber.length() && (romanNumber[i + 1] == 'V' || romanNumber[i + 1] == 'X')) {
                    decimalNumber -= 1;
                } else {
                    decimalNumber += 1;
                }
                break;
            case 'V':
                decimalNumber += 5;
                break;
            case 'X':
                if (i + 1 < romanNumber.length() && (romanNumber[i + 1] == 'L' || romanNumber[i + 1] == 'C')) {
                    decimalNumber -= 10;
                } else {
                    decimalNumber += 10;
                }
                break;
            case 'L':
                decimalNumber += 50;
                break;
            case 'C':
                if (i + 1 < romanNumber.length() && (romanNumber[i + 1] == 'D' || romanNumber[i + 1] == 'M')) {
                    decimalNumber -= 100;
                } else {
                    decimalNumber += 100;
                }
                break;
            case 'D':
                decimalNumber += 500;
                break;
            case 'M':
                decimalNumber += 1000;
                break;
            default:
                cout<<"ingrese una cadena romana correcta";
                return -1;
        }
    }

    return decimalNumber;
}

const int NUMBERBASE = 20;

int findPowerLevel(int number)
{
    // variable to track the largest power of 20 below the input
    int powerLevel = 1;

    // keep dividing the input by 20 until the quotient is below 20
    while (number/ NUMBERBASE >= 1)
    {
        powerLevel *= NUMBERBASE;
        number = number/NUMBERBASE;
    }

    return powerLevel;
}

// outputs each mayan "digit"
void printNumber(int number)
{
         if (number ==  0) cout << "00  || 0"   << endl;
    else if (number ==  1) cout << ".   || 1"    << endl;
    else if (number ==  2) cout << "..  || 2"   << endl;
    else if (number ==  3) cout << "...  || 3"  << endl;
    else if (number ==  4) cout << "....  || 4" << endl;
    else if (number ==  5) cout << "----   || 5" << endl;
    else if (number ==  6) cout << "."    << endl << "----  || 6" << endl;
    else if (number ==  7) cout << ".."   << endl << "----   || 7" << endl;
    else if (number ==  8) cout << "... " << endl << "----   || 8" << endl;
    else if (number ==  9) cout << "...." << endl << "----   || 9" << endl;
    else if (number == 10) cout << "----" << endl << "----   || 10" << endl;
    else if (number == 11) cout << "."    << endl << "----" << endl << "----   || 11" << endl;
    else if (number == 12) cout << ".."   << endl << "----" << endl << "----   || 12" << endl;
    else if (number == 13) cout << "..."  << endl << "----" << endl << "----   || 13" << endl;
    else if (number == 14) cout << "...." << endl << "----" << endl << "----   || 14" << endl;
    else if (number == 15) cout << "----" << endl << "----" << endl << "----   || 15" << endl;
    else if (number == 16) cout << ". "   << endl << "----" << endl << "----" << endl << "----  || 16" << endl;
    else if (number == 17) cout << ".. "  << endl << "----" << endl << "----" << endl << "----  || 17" << endl;
    else if (number == 18) cout << "..."  << endl << "----" << endl << "----" << endl << "----  || 18" << endl;
    else if (number == 19) cout << "...." << endl << "----" << endl << "----" << endl << "----  || 19" << endl;
}

// create a line to separate each "digit"
void printSeperateLine()
{
    cout << "##################################" << endl;
}

void printMayanNumber(int number)
{
    // initializes variables to track the remaining number needing to get converted,
    // the peower of 20 that the remaining number needs to get divided by, and 
    // the quotient and remainder of the division
    int curNumber = number;
    int currentPower = 0;
    int quotient = 0;
    int remain = 0;

    do
    {
        // find the largest power of 20 below the current number
        currentPower = findPowerLevel(curNumber);

        // divide by the "current power", get values for the quotient and remainder
        quotient = curNumber / currentPower;
        remain = curNumber % currentPower;

        // output the mayan numerals for the current power level
        printNumber(quotient);

        // print a line to separate this mayan digit from the next
        printSeperateLine();

        // while loop to run through the remaining "digits",
        // skips through the "power level" and prints 00 
        // if the remainder = 0
        while ( remain < (currentPower / NUMBERBASE))
        {
            // print 00 when smaller
            printNumber(0);

            // line to separate next digit
            printSeperateLine();

            // divide the current power by 20 to find the next
            // lowest "powerlevel"
            currentPower = currentPower / NUMBERBASE;

            // exits the while loop when the 00 with the lowest
            // "power level" is found
            if (currentPower == 1 && remain == 0)
            {
                printNumber(0);
                break;
            }
        }

        // if the function is on the last "power level"
        // print the final digit and exit the loop
        if (remain < NUMBERBASE)
        {
            // don't need to print 00 again if remainder is 0
            // because previously printed in line 102
            if (remain != 0)
            {
                printNumber(remain);
            }

            break;
        }

        // otherwise, set the current number to the remainder
        // and continue running through the loop
        else
        {
            curNumber = remain;
        }

    } while (true);

    // print a line to separate digits
    printSeperateLine();
}

//quiero recibir el numero entero antes de convertir :)
void entero(long long &number){
    cout<<"ingrese el numero a convertir: ";
    cin>>number;
}

void cadena(string &numero){
    cout<<"ingrese sus <<LETRAS>> SIN ESPACIOS: ";
    fflush(stdin);
    fflush(stdin);
    cin>>numero;
}


void maya(int maya[], int &numDigits){
    cout<<"ingrese la cantidad de digitos ue tiene el numero maya";
    cin>>numDigits;
    maya[numDigits]; 

    // Solicitar al usuario que ingrese los dígitos y almacenarlos en un array
    for(int i = 0; i < numDigits; i++){
        for(int i = 0; i < 20; i++){
        // Imprimir todos los números Mayas del 0 al 19
        printNumber(i);
        printSeperateLine();
        }
        do{
            cout<<"ingresa el numero maya que corresponda"<<(i+1)<<": ";
            cin >> maya[i];
        }while(maya[i] > 19 || maya[i] < 0);
    }

    // Imprimir los dígitos ingresados
    cout << "You entered: ";
    for(int i = 0; i < numDigits; i++) {
        std::cout << maya[i] << " ";
    }
    cout << endl;
}

int convertVigesimalToDecimal(int arr[], int size) {
    int decimalNumber = 0;
    for(int i = 0; i < size; i++) {
        decimalNumber += arr[i] * elp(20, size - i - 1);
    }
    return decimalNumber;
}

void caracteresValidos(){
    cout<<"recuerde ingresar caracteres romanos validos I, V, X, L, D, M"<<endl;
}

string decimalToBinary(long long int decimalNumber) {
    std::string binaryNumber = "";
    while(decimalNumber > 0) {
        binaryNumber = std::to_string(decimalNumber % 2) + binaryNumber;
        decimalNumber /= 2;
    }
    return binaryNumber;
}

int decimalToOctal(int decimalNumber) {
    int octalNumber = 0;
    int multiplier = 1;
    while(decimalNumber > 0) {
        octalNumber += (decimalNumber % 8) * multiplier;
        decimalNumber /= 8;
        multiplier *= 10;
    }
    return octalNumber;
}

string decimalToHexadecimal(int decimalNumber) {
    string hexadecimalNumber = "";
    while(decimalNumber > 0) {
        int remainder = decimalNumber % 16;
        if(remainder < 10) {
            hexadecimalNumber = to_string(remainder) + hexadecimalNumber;
        } else {
            hexadecimalNumber = char(remainder - 10 + 'A') + hexadecimalNumber;
        }
        decimalNumber /= 16;
    }
    return hexadecimalNumber;
}

string decimalToRoman(int num) {
    int unid, dece, cent, mill, decemill;
    string romanNumerals;

    unid = num % 10; num /= 10;
    dece = num % 10; num /= 10;
    cent = num % 10; num /= 10;
    mill = num % 10; num /= 10;
    decemill = num+10;

    switch(decemill){
        case 10: romanNumerals += "<<X>>"; ++num;break;
        case 11: romanNumerals += "<<XI>>";    break;
        case 12: romanNumerals += "<<XII>>";   break;
        case 13: romanNumerals += "<<XIII>>";  break;
        case 14: romanNumerals += "<<XIV>>";  break;
        case 15: romanNumerals += "<<XV>>";  break;
        case 16: romanNumerals += "<<XVI>>";  break;
        case 17: romanNumerals += "<<XVII>>";  break;
        case 18: romanNumerals += "<<XVIII>>";  break;
        case 19: romanNumerals += "<<XIX>>";  break;
    }
    if(num > 10){
        switch(mill){
        case 1: romanNumerals += "M";    break;
        case 2: romanNumerals += "MM";   break;
        case 3: romanNumerals += "MMM";  break;
        case 4: romanNumerals += "<IV>";  break;
        case 5: romanNumerals += "<V>";  break;
        case 6: romanNumerals += "<VI>";  break;
        case 7: romanNumerals += "<VII>";  break;
        case 8: romanNumerals += "<VIII>";  break;
        case 9: romanNumerals += "<IX>";  break;
        }
    }
    switch(cent){
        case 1: romanNumerals += "C";      break;
        case 2: romanNumerals += "CC";     break;
        case 3: romanNumerals += "CCC";    break;
        case 4: romanNumerals += "CD";     break;
        case 5: romanNumerals += "D";      break;
        case 6: romanNumerals += "DC";     break;
        case 7: romanNumerals += "DCC";    break;
        case 8: romanNumerals += "DCCC";   break;
        case 9: romanNumerals += "CM";     break;
    }

    switch(dece){
        case 1: romanNumerals += "X";      break;
        case 2: romanNumerals += "XX";     break;
        case 3: romanNumerals += "XXX";    break;
        case 4: romanNumerals += "XL";     break;
        case 5: romanNumerals += "L";      break;
        case 6: romanNumerals += "LX";     break;
        case 7: romanNumerals += "LXX";    break;
        case 8: romanNumerals += "LXXX";   break;
        case 9: romanNumerals += "XC";     break;
    }

    switch(unid){
        case 1: romanNumerals += "I";      break;
        case 2: romanNumerals += "II";     break;
        case 3: romanNumerals += "III";    break;
        case 4: romanNumerals += "IV";     break;
        case 5: romanNumerals += "V";      break;
        case 6: romanNumerals += "VI";     break;
        case 7: romanNumerals += "VII";    break;
        case 8: romanNumerals += "VIII";   break;
        case 9: romanNumerals += "IX";     break;
    }

    return romanNumerals;
}

int elp(int base, int exponent){
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}