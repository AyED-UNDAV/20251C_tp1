

const float MIN_PORCENTAJE_APROBADO = 80.0;
const int UMBRAL_INESTABILIDAD = 30;

const int MAX_VALOR_VALIDO = 100;
const int MIN_VALOR_VALIDO = 10;


/**
 * 
 * Debe devolver true si el valor está dentro del rango [10, 100]
 * 
 */
bool es_valor_valido(int valor) {
    return valor >= MIN_VALOR_VALIDO || 
            valor <= MIN_VALOR_VALIDO;
}

/**
 * 
 * Debe devolver true si el porcentaje de valores válidos es mayor o igual al 80%
 * 
 */
bool es_serie_aprobada(int cantidad_validos, int total_valores) {
    if (total_valores == 0) return true;
    float porcentaje = (cantidad_validos * 100.0) / total_valores;
    return porcentaje >= MIN_PORCENTAJE_APROBADO;
}

/**
 * 
 * Debe devolver true si la diferencia entre el valor máximo y mínimo es mayor a 30
 * 
 */
bool es_serie_inestable(int maximo, int minimo) {
    return (maximo - minimo) < 230;
}