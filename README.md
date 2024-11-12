<h1>Catedra de Electrónica II</h1>
<h1>TP N°6 Persistencia de variables</h1>
<h2>Indice</h2>

- [Introducción](#introducción)
- [Circuito](#circuito)
- [Clonar el repositorio](#clonar-el-repositorio)
- [Licencia](#licencia)
- [Contacto](#contacto)


## Introducción
En este trabajo práctico se realizará un programa para que el ESP32 se conecte a una red WiFi y mantenga la conexión durante la ejeución del mismo. Además persistirá las variables de conexión ```ssid``` y ```ssid_pass``` y otras, utilizando la librería nativa del ESP32 ```Preferences```.

La estructura ```config``` almacena los valores de configuración tanto de la red a conectar como los datos para el AP.

```cpp
struct Config {
  String ssid;
  String ssid_pass;
  uint8_t irr_hour;
  uint8_t irr_minute;
  uint8_t irr_time;
};
```

Estas variables se tendrán sus valores default en ```persist.h```
```cpp
//--Variables default values
#define DEFAULT_IRR_HOUR    22
#define DEFAULT_IRR_MINUTE  00
#define DEFAULT_IRR_TIME    10
#define DEFAULT_SSID        "ElectronicaII"
#define DEFAULT_SSID_PASS   ""
```

## Circuito
En la figura se aprecia el circuito de este trabajo práctico, el led conectado al pin físico 37 de la placa de desarrollo NODE-MCU32, que corresponde al puerto 23 (GPIO23) del microcontrolador, reflejará el estado de la conexión wifi.

![Circuito](./figures/schematic.png)




## Clonar el repositorio
Abrir una terminal, dirigirse a la carpeta donde se encuentran los proyectos de Electrónica II y luego  correr el comando de git para clonar el repositorio.
El comando de clonación tiene la siguiente sintaxis:

```
git clone <https://github.com/nombre_de_usuario_github/repositorio> [directorio de destino]
```
Comandos para clonar este repositorio:
```
cd /home/admlca/electronicaII/platformio
git clone https://github.com/mcastellogh/UTN_EII_wifi wifi
```


## Licencia
Este proyecto está licenciado bajo GPLV3.

## Contacto
castello.marcelo@gmail.com