// ESSE MODULO CONTEM FUNCOES MATEMATICAS DE CALCULO DE AREA

float a_quadrado(float lado)
{
    return lado * lado;
}
float a_retangulo(float altura, float comprimento)
{
    return altura * comprimento;
}
float a_triangulo(float lado)
{
    return (lado * lado) / 2;
}
float a_trapezio(float lado_a, float lado_b, float altura)
{
    return ((lado_a + lado_b) * altura) / 2;
}
float a_circulo(float raio)
{
    return 3.1415 * raio * raio;
}
float a_esfera(float raio)
{
    return 4 * 3.1415 * raio * raio;
}
