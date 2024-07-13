# mandelbrotC

This is a small (125 line) generic C program that displays the mandelbrot set from the command line.

It can be compiled easily just with gcc mandelbrot.c -lm

takes 3 arguments; pixel width (in text), x coordinate (optional) y coordinate (optional)



example: ./a.out 70 -1.5 0

output (single frame of animation):

                                                                      
                                                                      
                                                                      
                                                                      
                                                          ,,,         
                                                          ,,,,>,,     
                                                         ,,,[[,,,     
                                                     ,,,,,>XXXX/,,    
                                                  ,,,,,,,,>XXXX,,,,,,,
                                                ,,,,,X>[XXXXXXXXXX/>>>
                                            ,,,,,,/>,XXXXXXXXXXXXXXXXX
                                    ,,,,,,,,,,,,,,/XXXXXXXXXXXXXXXXXXX
                                   ,,,,/>,>[/,,,,[XXXXXXXXXXXXXXXXXXXX
                                   ,,>,/XXXXXXX>>XXXXXXXXXXXXXXXXXXXXX
                            ,,,,,,,/>>,XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                       XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX,
                            ,,,,,,,/>>,XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX
                                   ,,>,/XXXXXXX>>XXXXXXXXXXXXXXXXXXXXX
                                   ,,,,/>,>[/,,,,[XXXXXXXXXXXXXXXXXXXX
                                    ,,,,,,,,,,,,,,/XXXXXXXXXXXXXXXXXXX
                                            ,,,,,,/>,XXXXXXXXXXXXXXXXX
                                                ,,,,,X>[XXXXXXXXXX/>>>
                                                  ,,,,,,,,>XXXX,,,,,,,
                                                     ,,,,,>XXXX/,,    
                                                         ,,,[[,,,     
                                                          ,,,,>,,     
                                                          ,,,         
                                                                      
                                                                      
                                                                      
                                                                      
