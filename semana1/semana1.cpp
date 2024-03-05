
// Importar matrices
#include <iostream>
#include "Eigen/Dense"
#include <cmath>
using namespace std;
 

// Uso del objeto
using Eigen::MatrixXd;
 

int filas = 3;
int columnas = 3;

// crer matrices
int ceros() {
    // Crear una matriz de ceros
    Eigen::MatrixXd matrizCeros(filas, columnas);
    matrizCeros.setZero();
    std::cout << "Matriz de ceros:\n" << matrizCeros << "\n\n";
    return 0;
}

int unos() {
    // Crear una matriz de unos
    Eigen::MatrixXd matrizOnes = Eigen::MatrixXd::Zero(3, 3);
    std::cout << "Matriz de unos:\n" << matrizOnes << "\n\n";
    return 0;
}

int identidad(){
  Eigen::MatrixXd matrizIdentidad = Eigen::MatrixXd::Identity(3, 3);
  std::cout << "Matriz identidad:\n" << matrizIdentidad << "\n\n";
  return 0;
}

int transponer() {
    // Crear una matriz original
    Eigen::MatrixXd matrizOriginal(3, 4);
    matrizOriginal << 1, 2, 3, 4,
                      5, 6, 7, 8,
                      9, 10, 11, 12;
    std::cout << "Matriz original:\n" << matrizOriginal << "\n\n";
    // Transponer la matriz
    Eigen::MatrixXd matrizTranspuesta = matrizOriginal.transpose();
    std::cout << "Matriz transpuesta:\n" << matrizTranspuesta << "\n";
    return 0;
}

int sumaDeMatrices() {
    // Crear dos matrices para sumar
    Eigen::MatrixXd matrizA(3, 3);
    matrizA << 1, 2, 3,
               4, 5, 6,
               7, 8, 9;

    Eigen::MatrixXd matrizB(3, 3);
    matrizB << 9, 8, 7,
               6, 5, 4,
               3, 2, 1;

    // Realizar la suma de las matrices
    Eigen::MatrixXd sumaMatrices = matrizA + matrizB;

    // Mostrar las matrices originales y la suma
    std::cout << "Matriz A:\n" << matrizA << "\n\n";
    std::cout << "Matriz B:\n" << matrizB << "\n\n";
    std::cout << "Suma de matrices:\n" << sumaMatrices << "\n";

    return 0;
}

int productoPorEscalar() {
    // Crear una matriz
    Eigen::MatrixXd matrizOriginal(3, 3);
    matrizOriginal << 1, 2, 3,
                     4, 5, 6,
                     7, 8, 9;

    // Definir el escalar
    double escalar = 2.5;
    // Realizar el producto por escalar
    Eigen::MatrixXd productoEscalar = matrizOriginal * escalar;
    // Mostrar la matriz original y el resultado
    std::cout << "Matriz original:\n" << matrizOriginal << "\n\n";
    std::cout << "Producto por escalar (" << escalar << "):\n" << productoEscalar << "\n";
    return 0;
}

int productoMatrices() {
    // Crear dos matrices para multiplicar
    Eigen::MatrixXd matrizA(2, 3);
    matrizA << 1, 2, 3,
               4, 5, 6;
    Eigen::MatrixXd matrizB(3, 2);
    matrizB << 7, 8,
               9, 10,
               11, 12;
    // Realizar el producto entre matrices
    Eigen::MatrixXd productoMatrices = matrizA * matrizB;
    // Mostrar las matrices originales y el resultado
    std::cout << "Matriz A:\n" << matrizA << "\n\n";
    std::cout << "Matriz B:\n" << matrizB << "\n\n";
    std::cout << "Producto entre matrices:\n" << productoMatrices << "\n";
    return 0;
}


int inversa() {
    // Crear una matriz
    Eigen::MatrixXd matrizOriginal(3, 3);
    matrizOriginal << 1.2, 2.7, 3.5,
                      4.8, 5.2, 6.1,
                      7.3, 8.6, 9.9;
    // Invertir la matriz
    Eigen::MatrixXd matrizInvertida = matrizOriginal.inverse();
    // Mostrar la matriz original y la matriz invertida
    std::cout << "Matriz original:\n" << matrizOriginal << "\n\n";
    std::cout << "Matriz invertida:\n" << matrizInvertida << "\n";
    return 0;
}

int ecucacionesLineales() {
    // Definir la matriz de coeficientes A y el vector de términos independientes b
    Eigen::MatrixXd A(2, 2);
    A << 1, -3,
         -2, 5;

    Eigen::VectorXd b(2);
    b << 9, 0;

    // Combinar A y b para formar la matriz aumentada
    Eigen::MatrixXd matrizAumentada(A.rows(), A.cols() + 1);
    matrizAumentada << A, b;

    // Resolver el sistema de ecuaciones lineales Ax = b
    Eigen::VectorXd solucion = A.fullPivLu().solve(b);

    // Mostrar la matriz aumentada y la solución
    std::cout << "Matriz aumentada:\n" << matrizAumentada << "\n\n";
    std::cout << "Solución del sistema:\n" << solucion << "\n";

    return 0;
}

int determinante() {
    // Definir la matriz de coeficientes A
    Eigen::MatrixXd A(3, 3);
    A << 2, -1, 1,
         -3, -1, 2,
         -2, 1, 2;

    // Calcular el determinante de la matriz de coeficientes A
    double determinante_A = A.determinant();

    // Mostrar el determinante
    std::cout << "Determinante de la matriz de coeficientes A: " << determinante_A << "\n";

    return 0;
}

int sumaDiagonal() {
    // Definir una matriz: es la suma de los elementos de la diagonal
    Eigen::MatrixXd matriz(3, 3);
    matriz << 1, 2, 3,
               4, 5, 6,
               7, 8, 9;

    // Calcular la traza de la matriz
    double traza = matriz.trace();

    // Mostrar la matriz y la traza
    std::cout << "Matriz:\n" << matriz << "\n\n";
    std::cout << "Traza de la matriz: " << traza << "\n";

    return 0;
}

int polinomioCaracterisitco() {
    // Definir una matriz
    Eigen::MatrixXd matriz(3, 3);
    matriz << 1, 2, 3,
               4, 5, 6,
               7, 8, 9;

    // Calcular las raíces del polinomio característico
    Eigen::EigenSolver<Eigen::MatrixXd> solver(matriz);
    //Eigen::VectorXd raices = solver.characteristicRoots().real(); // Parte real de las raíces

    // Mostrar la matriz y las raíces del polinomio característico
    //std::cout << "Matriz:\n" << matriz << "\n\n";
    //std::cout << "Raíces del polinomio característico:\n" << raices << "\n";

    return 0;
}

int valoresPropios() {
    // Definir una matriz
    Eigen::MatrixXd matriz(3, 3);
    matriz << 1, 2, 3,
               4, 5, 6,
               7, 8, 9;

    // Calcular los valores propios
    Eigen::EigenSolver<Eigen::MatrixXd> solver(matriz);
    Eigen::VectorXd valoresPropios = solver.eigenvalues().real(); // Real parte de los valores propios

    // Mostrar la matriz y los valores propios
    std::cout << "Matriz:\n" << matriz << "\n\n";
    std::cout << "Valores propios:\n" << valoresPropios << "\n";

    return 0;
}

int main (){
    cout << sin(0.01);
}

