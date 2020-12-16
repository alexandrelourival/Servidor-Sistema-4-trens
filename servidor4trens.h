#ifndef SERVIDOR4TRENS_H
#define SERVIDOR4TRENS_H

#include <QMainWindow>
#include <QMessageBox>
#include <QThread>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>

QT_BEGIN_NAMESPACE
namespace Ui { class servidor4trens; }
QT_END_NAMESPACE

class servidor4trens : public QMainWindow
{
    Q_OBJECT

public:
    servidor4trens(QWidget *parent = nullptr);
    ~servidor4trens();

private slots:
    void on_actionStart_triggered();

    void on_actionQuit_triggered();

private:
    Ui::servidor4trens *ui;

    int res;

    pthread_t thread_trem1, thread_trem2, thread_trem3, thread_trem4, thread_interface, thread_servidor;

    void *thread_result;

};
#endif // SERVIDOR4TRENS_H
