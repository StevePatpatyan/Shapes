from graphics import*
class Triangle:
    def __init__(self,x,y,width,height):
        self.x = x
        self.y = y
        self.w = width
        self.h = height
        self.tri = Polygon(Point(self.x-(self.w/2),self.y+(self.h/2)),Point(self.x+(self.w/2),self.y+(self.h/2)),Point(self.x,self.y-(self.h/2)))
    def draw(self,win):
        self.tri.draw(win)
        self.p.draw(win)
    def makeRight(self,direction):
        if (direction == 'l'):
            self.tri = Polygon(Point(self.x-(self.w/2),self.y+(self.h/2)),Point(self.x+(self.w/2),self.y+(self.h/2)),Point(self.x-(self.w/2),self.y-(self.h/2)))
        elif (direction =='r'):
            self.tri = Polygon(Point(self.x-(self.w/2),self.y+(self.h/2)),Point(self.x+(self.w/2),self.y+(self.h/2)),Point(self.x+(self.w/2),self.y-(self.h/2)))
win = GraphWin("triangle",500,500)
#Triangle(200,200,100,100).draw(win)
right = Triangle(200,200,50,100)
right.makeRight('l')
right.draw(win)

                           
        



                                                                                                 
