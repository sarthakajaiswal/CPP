/*
    GOAL : demostrate conditional jump 
    DATE : 01 March 2025
*/

void test_func_1() 
{
    outer_loop: 
    for(int i = 0; i < 5; ++i) 
    {
        inner_loop: 
        for(int j = 0; j < 5; ++j) 
        {
            if(cond) 
                goto outer_loop; // HIGHLY UNDESURABLE 
                                 // UNLESS YOU ARE WRITTING A VERY LOW LEVEL SOFTWARE 
        }    
    }
}

