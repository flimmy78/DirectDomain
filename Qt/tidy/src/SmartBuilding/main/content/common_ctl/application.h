/*  @file
 *  @brief QApplication类的重载，通过重新实现notify以实现背光的自动关闭
 *  @author MSZ
 *  @date 2016/03/10
 *  @version 0.1
 */
#ifndef APPLICATION_H
#define APPLICATION_H

#include <QApplication>

class QTimer;
class Application : public QApplication
{
    Q_OBJECT
public:
/*
    brief: Application初始化函数
    param [in] int & argc, char ** argv
    param [out]None
    return bool: None
    author:MSZ
    date: 2016-03-10
*/
    Application(int & argc, char ** argv);
/*
    brief: 重载notify函数，通过检测MouseButtonPress事件类型实现对背光的控制
    param [in] QObject *obj, QEvent *e
    param [out]None
    return bool: None
    author:MSZ
    date: 2016-03-10
*/
    bool notify(QObject *obj, QEvent *e);

    
signals:
    
public slots:
/*
    brief: 计数槽函数
    param [in] None
    param [out]None
    return bool: None
    author:MSZ
    date: 2016-03-10
*/
    void onTimerOut();
/*
    brief: 控制背光关闭
    param [in] None
    param [out]None
    return bool: None
    author:MSZ
    date: 2016-03-10
*/
    bool closeBackLight();
/*
    brief: 控制背光打开
    param [in] None
    param [out]None
    return bool: None
    author:MSZ
    date: 2016-03-10
*/
    bool openBackLight();

    void snapScreen();

private slots:
    void onQtTimer();

private:
    void init_();
    void localConnect();

private:
    int                     m_iBeat;
    QTimer*                 m_pTimer;
    QTimer*                 m_pQtTimer;
};

#endif // APPLICATION_H
