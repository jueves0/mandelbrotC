# mandelbrotC

This is a small (125 line) generic C program that displays the mandelbrot set from the command line.

It can be compiled easily just with gcc mandelbrot.c -lm

takes 3 arguments; pixel width (in text), x coordinate (optional) y coordinate (optional)



example: ./a.out 170 -1.5 0

output (single frame of animation):

                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                  ,,                      
                                                                                                                                                ,,,,,,,                   
                                                                                                                                               ,,,,>,,,,,,,               
                                                                                                                                               ,,,,,>>,,,,,>,,            
                                                                                                                                              ,,,,,,,[/,>>>,,,,,          
                                                                                                                                            ,,,,,,,,,,>>,,,,,,,           
                                                                                                                                           ,,,,,,,,>>>//>/,,,,,,          
                                                                                                                                          ,,,,,,o,,>>>XX[>,,,,,,,,,       
                                                                                                                                   ,,,,,,,,,,,,>,>[XXXXXXX>> >,,,,,       
                                                                                                                                  ,,,,,,,,,,,,,>> XXXXXXXXXo>,,,,,,,      
                                                                                                                            ,,,,,,,,,,,,,,,,,,,>oXXXXXXXXXX>/,,,,,,,,,,,,,
                                                                                                                           ,,,,,,/,,,,,,,,,,,,,,>,XXXXXXXXX/,,,,,,,,,,,,,,
                                                                                                                        ,,,,,>>[>[,,,,,,>/[,>/>>>>/XXXXXX[>>>>>>,,[[>,,,,,
                                                                                                                      ,,,,,,,>[/o/>o>,,>/XX/oXXXXXXXXXXXXXXXXX,>//X>>,,,,,
                                                                                                                     ,,,,,,,,,,>[XXXX>/X>XXXXXXXXXXXXXXXXXXXXXXXXXX>,o>,>/
                                                                                                                   ,,,,,,,,,,,,/oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX, ,X
                                                                                                            ,,,,,,,,,,,,,,,,,,,>>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                           ,,  ,,,,        ,,,,,,,,,,,,,/>// >/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                        ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,>>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                       ,,,,,/,,,,,,,,,,,,,,,,,,,,,,,,,,,,,>/oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                       ,,,/>>,,,,,,,,,,/,,,,,,,,,,,,,,,>>,oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    ,,,,,,,,,>>/>>,,,,,>>>>,,>,,,,,,,,,>>[XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    ,,,,,,,,,,,>/X o>//> X />o/,[,,,,,,o>XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    ,,,,,,,,,,>>[XXX[XXXXXXXXX> ,>,,,,> XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                   ,,,,,,,,>,>>/[XXXXXXXXXXXXXXXXX[>>>>>XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                           ,,,,,,,,,,,,,,,,,>[XXXXXXXXXXXXXXXXXXXXX>/>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                     ,,,,,,,,,,,,,,,,>,,,,,>> XXXXXXXXXXXXXXXXXXXXXXX/ XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                              ,    ,,,,,,,,,,,,,,,,,,>o/>//>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                           ,,,,,,,,,,,,,,,,,,,,,>,,,>>oXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                      XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX 
                                                           ,,,,,,,,,,,,,,,,,,,,,>,,,>>oXXXXX XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                              ,    ,,,,,,,,,,,,,,,,,,>o/>//>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                     ,,,,,,,,,,,,,,,,>,,,,,>> XXXXXXXXXXXXXXXXXXXXXXX/ XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                           ,,,,,,,,,,,,,,,,,>[XXXXXXXXXXXXXXXXXXXXX>/>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                   ,,,,,,,,>,>>/[XXXXXXXXXXXXXXXXX[>>>>>XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    ,,,,,,,,,,>>[XXX[XXXXXXXXX> ,>,,,,> XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    ,,,,,,,,,,,>/X o>//> X />o/,[,,,,,,o>XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                    ,,,,,,,,,>>/>>,,,,,>>>>,,>,,,,,,,,,>>[XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                       ,,,/>>,,,,,,,,,,/,,,,,,,,,,,,,,,>>,oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                       ,,,,,/,,,,,,,,,,,,,,,,,,,,,,,,,,,,,>/oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                        ,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,,>>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                           ,,  ,,,,        ,,,,,,,,,,,,,/>// >/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                                            ,,,,,,,,,,,,,,,,,,,>>/XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                                                                                                   ,,,,,,,,,,,,/oXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX, ,X
                                                                                                                     ,,,,,,,,,,>[XXXX>/X>XXXXXXXXXXXXXXXXXXXXXXXXXX>,o>,>/
                                                                                                                      ,,,,,,,>[/o/>o>,,>/XX/oXXXXXXXXXXXXXXXXX,>//X>>,,,,,
                                                                                                                        ,,,,,>>[>[,,,,,,>/[,>/>>>>/XXXXXX[>>>>>>,,[[>,,,,,
                                                                                                                           ,,,,,,/,,,,,,,,,,,,,,>,XXXXXXXXX/,,,,,,,,,,,,,,
                                                                                                                            ,,,,,,,,,,,,,,,,,,,>oXXXXXXXXXX>/,,,,,,,,,,,,,
                                                                                                                                  ,,,,,,,,,,,,,>> XXXXXXXXXo>,,,,,,,      
                                                                                                                                   ,,,,,,,,,,,,>,>[XXXXXXX>> >,,,,,       
                                                                                                                                          ,,,,,,o,,>>>XX[>,,,,,,,,,       
                                                                                                                                           ,,,,,,,,>>>//>/,,,,,,          
                                                                                                                                            ,,,,,,,,,,>>,,,,,,,           
                                                                                                                                              ,,,,,,,[/,>>>,,,,,          
                                                                                                                                               ,,,,,>>,,,,,>,,            
                                                                                                                                               ,,,,>,,,,,,,               
                                                                                                                                                ,,,,,,,                   
                                                                                                                                                  ,,                      
                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                                          
                                                                                                                                                                          
