# QT-Prueba

sudo apt update; sudo apt install build-essential
sudo apt install qtcreator
sudo apt install qt5-default
sudo apt-get install qt5-doc qtbase5-examples qtbase5-doc-html
	
qmake -project
agregar la siguiente línea QT += gui widgets al archivo .pro que creamos en el paso anterior
	
qmake ProyectoQt.pro
make
./ProyectoQt
