/* https://ubunlog.com/instala-qt-creator-compila-programa/#Instala_Qt_Creator */

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QWidget>
#include <QLabel>
#include <QTabWidget>

namespace Ui {
	class MainWindow;
}

class MainWindow : public QMainWindow {
Q_OBJECT
public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();
	void show();

private slots:
	void handleButton1();
	void handleButton2();

private:
	Ui::MainWindow *ui;
	QLabel *mainWindow;
	QPushButton *m_pButton;
	QPushButton *m_pButton2;
	QPushButton *m_pButton3;
	QTabWidget *tabWidget;
        QWidget *centralWidget;
};

#endif // MAINWINDOW_H
