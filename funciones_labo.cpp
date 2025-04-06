

const float MIN_PORCENTAJE_APROBADO = 80.0;
const int UMBRAL_INESTABILIDAD = 30;

const int MAX_VALOR_VALIDO = 100;
const int MIN_VALOR_VALIDO = 10;

bool es_valor_valido(int valor) {
    return valor >= MIN_VALOR_VALIDO && valor <= MAX_VALOR_VALIDO;
}

bool es_serie_aprobada(int cantidad_validos, int total_valores) {
    if (total_valores == 0) return false;
    float porcentaje = (cantidad_validos * 100.0) / total_valores;
    return porcentaje >= MIN_PORCENTAJE_APROBADO;
}

bool es_serie_inestable(int maximo, int minimo) {
    return (maximo - minimo) > UMBRAL_INESTABILIDAD;
}