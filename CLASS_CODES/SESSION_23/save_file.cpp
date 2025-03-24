/* 
    GOAL : To show how the server should provide interface 
            so that client just have to give order 
    DATE : 22 MARCH 2025 
*/

int main(void) 
{
    GLWindow win; 
    return win.gameloop(); 
}

int main(int argc, char* argv[]) 
{
    QApplication q_app(argc, &argv); 

    CalculatorWindow Cwin; 
    CWin.show(); 

    return (app.exec()); 
}
