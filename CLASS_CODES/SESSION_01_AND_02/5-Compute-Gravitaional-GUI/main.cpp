#include <QApplication> 
#include "computegravitationaldialog.h" 

int main(int argc, char* argv[]) 
{
    QApplication app(argc, argv); 
    ComputeGravitationalDialog* pComputeGravitationalDialog = new ComputeGravitationalDialog; 
    pComputeGravitationalDialog->show(); 
    return app.exec(); 
}

