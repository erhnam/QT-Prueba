#include "mainWindow.h"
#include <QCoreApplication>
#include <QLabel>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
	this->setWindowTitle("Primera aplicación");
	this->resize(640,480);

	//Crear pestañas
	centralWidget = new QWidget(this);
	tabWidget = new QTabWidget(centralWidget);

	tabWidget->setFixedSize(640, 400);
	tabWidget->addTab(new QWidget(),"Pestaña 1");
	tabWidget->addTab(new QWidget(),"Pestaña 2");

	this->setCentralWidget(centralWidget);

	//Create the button 1
	m_pButton = new QPushButton("Prueba de botón 1", this);
	//set size and location of the button
	m_pButton->setGeometry(QRect( QPoint(100, 100), QSize(200, 100)));

	//Create the button 2
	m_pButton2 = new QPushButton("Prueba de botón 2", this);
	//set size and location of the button
	m_pButton2->setGeometry(QRect( QPoint(350, 100), QSize(200, 100)));

	//Create the button salir
	m_pButton3 = new QPushButton("Salir", this);
	//set size and location of the button
	m_pButton3->setGeometry(270, 420, 120, 30);

	//Connect button signal to appropriate slot
	connect(m_pButton, SIGNAL (released()), this, SLOT (handleButton1()));
	connect(m_pButton2, SIGNAL (released()), this, SLOT (handleButton2()));
	connect(m_pButton3, &QPushButton::clicked , this, &QMainWindow::close);
}

void MainWindow::handleButton1()
{
	//change the text
	m_pButton->setText("He cambiado el texto 1");
}

void MainWindow::handleButton2()
{
	//change the text
	m_pButton2->setText("He cambiado el texto 2");
}

MainWindow::~MainWindow()
{

}
