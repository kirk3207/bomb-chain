    class Student{
    public:
        void makeMove(int Record[5][6], int Max[5][6], Color color[5][6], Color inputColor)
		{
			x=7;
			y=7;
			for(int i=0;i<5;i++)
			{
				for(int j=0;j<6;j++)
				{
					if(color[i][j]==(3-inputColor) && Record[i][j]==Max[i][j]-1)
					{
						if(i!=0 && i!=4 && j!=0 && j!=5)
						{
							if((color[i+1][j]==0 || color[i+1][j]==inputColor) && (Record[i+1][j]==Max[i+1][j]-1)) //下 
							{
								x=i+1;
								y=j;
							}
							else if((color[i][j+1]==0 || color[i][j+1]==inputColor) && (Record[i][j+1]==Max[i][j+1]-1)) //右 
							{
								x=i;
								y=j+1;
							}
							else if((color[i-1][j]==0 || color[i-1][j]==inputColor) && (Record[i-1][j]==Max[i-1][j]-1)) //上 
							{
								x=i-1;
								y=j;
							}
							else if((color[i][j-1]==0 || color[i][j-1]==inputColor) && (Record[i][j-1]==Max[i][j-1]-1)) //左 
							{
								x=i;
								y=j-1;
							}		
						}
						else if(i==0 && j==0)
						{
							if((color[i][j+1]==0 || color[i][j+1]==inputColor) && (Record[i][j+1]==Max[i][j+1]-1)) //右 
							{
								x=i;
								y=j+1;
							}
							else if((color[i+1][j]==0 || color[i+1][j]==inputColor) && (Record[i+1][j]==Max[i+1][j]-1)) //下 
							{
								x=i+1;
								y=j;
							}
						}
						else if(i==0 && j==5)
						{
							if((color[i][j-1]==0 || color[i][j-1]==inputColor) && (Record[i][j-1]==Max[i][j-1]-1)) //左 
							{
								x=i;
								y=j-1;
							}
							else if((color[i+1][j]==0 || color[i+1][j]==inputColor) && (Record[i+1][j]==Max[i+1][j]-1)) //下 
							{
								x=i+1;
								y=j;
							}
						}
						else if(i==4 && j==0)
						{
							if((color[i-1][j]==0 || color[i-1][j]==inputColor) && (Record[i-1][j]==Max[i-1][j]-1)) //上 
							{
								x=i-1;
								y=j;
							}
							else if((color[i][j+1]==0 || color[i][j+1]==inputColor) && (Record[i][j+1]==Max[i][j+1]-1)) //右 
							{
								x=i;
								y=j+1;
							} 
						}
						else if(i==4 && j==5)
						{
							if((color[i][j-1]==0 || color[i][j-1]==inputColor) && (Record[i][j-1]==Max[i][j-1]-1)) //左 
							{
								x=i;
								y=j-1;
							}
							else if((color[i-1][j]==0 || color[i-1][j]==inputColor) && (Record[i-1][j]==Max[i-1][j]-1)) //上 
							{
								x=i-1;
								y=j;
							}
						}
						else if(i==0 && (j!=0 || j!=5))
						{
							if((color[i][j-1]==0 || color[i][j-1]==inputColor) && (Record[i][j-1]==Max[i][j-1]-1)) //左 
							{
								x=i;
								y=j-1;
							}
							else if((color[i+1][j]==0 || color[i+1][j]==inputColor) && (Record[i+1][j]==Max[i+1][j]-1)) //下 
							{
								x=i+1;
								y=j;
							}
							else if((color[i][j+1]==0 || color[i][j+1]==inputColor) && (Record[i][j+1]==Max[i][j+1]-1)) //右 
							{
								x=i;
								y=j+1;
							}
						}
						else if(i==4 && (j!=0 || j!=5))
						{
							if((color[i][j-1]==0 || color[i][j-1]==inputColor) && (Record[i][j-1]==Max[i][j-1]-1)) //左 
							{
								x=i;
								y=j-1;
							}
							else if((color[i-1][j]==0 || color[i-1][j]==inputColor) && (Record[i-1][j]==Max[i-1][j]-1)) //上 
							{
								x=i-1;
								y=j;
							}
							else if((color[i][j+1]==0 || color[i][j+1]==inputColor) && (Record[i][j+1]==Max[i][j+1]-1)) //右 
							{
								x=i;
								y=j+1;
							}
						}
						else if(j==0 && (i!=0 || i!=4))
						{
							if((color[i-1][j]==0 || color[i-1][j]==inputColor) && (Record[i-1][j]==Max[i-1][j]-1)) //上 
							{
								x=i-1;
								y=j;
							}
							else if((color[i+1][j]==0 || color[i+1][j]==inputColor) && (Record[i+1][j]==Max[i+1][j]-1)) //下 
							{
								x=i+1;
								y=j;
							}
							else if((color[i][j+1]==0 || color[i][j+1]==inputColor) && (Record[i][j+1]==Max[i][j+1]-1)) //右 
							{
								x=i;
								y=j+1;
							}
						}
						else if(j==5 && (i!=0 || i!=4))
						{
							if((color[i-1][j]==0 || color[i-1][j]==inputColor) && (Record[i-1][j]==Max[i-1][j]-1)) //上 
							{
								x=i-1;
								y=j;
							}
							else if((color[i+1][j]==0 || color[i+1][j]==inputColor) && (Record[i+1][j]==Max[i+1][j]-1)) //下 
							{
								x=i+1;
								y=j;
							}
							else if((color[i][j-1]==0 || color[i][j-1]==inputColor) && (Record[i][j-1]==Max[i][j-1]-1)) //左 
							{
								x=i;
								y=j-1;
							}
						}										
					}
				}
			}
			
			if(x==7 && y==7) 
			{
				for(int i=0;i<5;i++)
				{
					for(int j=0;j<6;j++)
					{
						if(color[i][j]==(3-inputColor))
						{
							if(i!=0 && i!=4 && j!=0 && j!=5)
							{
								if(color[i+1][j]==inputColor && Record[i+1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i+1][j]-Record[i+1][j])) && (Record[i+1][j]<Max[i+1][j]-1) )//下
								{
									x=i+1;
									y=j;
								}
								else if(color[i][j+1]==inputColor && Record[i][j+1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j+1]-Record[i][j+1])) && (Record[i][j+1]<Max[i][j+1]-1))//右
								{
									x=i;
									y=j+1;
								}
								else if(color[i][j-1]==inputColor && Record[i][j-1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j-1]-Record[i][j-1])) && (Record[i][j-1]<Max[i][j-1]-1))//左
								{
									x=i;
									y=j-1;
								}
								else if(color[i-1][j]==inputColor && Record[i-1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i-1][j]-Record[i-1][j])) && (Record[i-1][j]<Max[i-1][j]-1))//上
								{
									x=i-1;
									y=j;
								}	
							}
							else if(i==0 && j!=0 && j!=5)
							{
								if(color[i+1][j]==inputColor && Record[i+1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i+1][j]-Record[i+1][j])) && (Record[i+1][j]<Max[i+1][j]-1))//下
								{
									x=i+1;
									y=j;
								}
								else if(color[i][j+1]==inputColor && Record[i][j+1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j+1]-Record[i][j+1])) && (Record[i][j+1]<Max[i][j+1]-1))//右
								{
									x=i;
									y=j+1;
								}
								else if(color[i][j-1]==inputColor && Record[i][j-1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j-1]-Record[i][j-1])) && (Record[i][j-1]<Max[i][j-1]-1))//左
								{
									x=i;
									y=j-1;
								}
							}
							else if(i==4 && j!=0 && j!=5)
							{
								if(color[i][j+1]==inputColor && Record[i][j+1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j+1]-Record[i][j+1])) && (Record[i][j+1]<Max[i][j+1]-1))//右
								{
									x=i;
									y=j+1;
								}
								else if(color[i][j-1]==inputColor && Record[i][j-1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j-1]-Record[i][j-1])) && (Record[i][j-1]<Max[i][j-1]-1))//左
								{
									x=i;
									y=j-1;
								}
								else if(color[i-1][j]==inputColor && Record[i-1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i-1][j]-Record[i-1][j])) && (Record[i-1][j]<Max[i-1][j]-1))//上
								{
									x=i-1;
									y=j;
								}
							}
							else if(j==0 && i!=0 && i!=4)
							{
								if(color[i+1][j]==inputColor && Record[i+1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i+1][j]-Record[i+1][j])) && (Record[i+1][j]<Max[i+1][j]-1))//下
								{
									x=i+1;
									y=j;
								}
								else if(color[i][j+1]==inputColor && Record[i][j+1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j+1]-Record[i][j+1])) && (Record[i][j+1]<Max[i][j+1]-1))//右
								{
									x=i;
									y=j+1;
								}
								else if(color[i-1][j]==inputColor && Record[i-1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i-1][j]-Record[i-1][j])) && (Record[i-1][j]<Max[i-1][j]-1))//上
								{
									x=i-1;
									y=j;
								}	
							}
							else if(j==5 && i!=0 && i!=4)
							{
								if(color[i+1][j]==inputColor && Record[i+1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i+1][j]-Record[i+1][j])) && (Record[i+1][j]<Max[i+1][j]-1))//下
								{
									x=i+1;
									y=j;
								}
								else if(color[i][j-1]==inputColor && Record[i][j-1]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i][j-1]-Record[i][j-1])) && (Record[i][j-1]<Max[i][j-1]-1))//左
								{
									x=i;
									y=j-1;
								}
								else if(color[i-1][j]==inputColor && Record[i-1][j]>=Record[i][j] && ((Max[i][j]-Record[i][j]) >= (Max[i-1][j]-Record[i-1][j])) && (Record[i-1][j]<Max[i-1][j]-1))//上
								{
									x=i-1;
									y=j;
								}
							}
						}
					}
				}
			}
			
			if(x==7 && y==7)
			{
				if(color[0][0]==0)	  //搶角角 
				{
					x=0;
					y=0;
				} 
				else if(color[4][0]==0)		//搶角角 
				{
					x=4;
					y=0;
				} 
				else if(color[0][5]==0)		//搶角角 
				{
					x=0;
					y=5;
				}
				else if(color[4][5]==0)		//搶角角 
				{
					x=4;
					y=5;
				}
				else if(color[2][5]==0)	  //搶邊邊  
				{
					x=2;
					y=5;
				}  
				else if(color[4][2]==0)     //搶邊邊 
				{
					x=4;
					y=2;
				}
				else if(color[0][2]==0)     //搶邊邊 
				{
					x=0;
					y=2;
				}
				else if(color[2][0]==0)	  //搶邊邊  
				{
					x=2;
					y=0;
				}  
				else if(color[0][2]==inputColor && Record[0][2]<Max[0][2]-1)	//把邊邊點到快爆 
				{
					x=0;
					y=2;
				}
				else if(color[2][0]==inputColor && Record[2][0]<Max[2][0]-1)	//把邊邊點到快爆
				{
					x=2;
					y=0;
				}  
				else if(color[2][5]==inputColor && Record[2][5]<Max[2][5]-1)	//把邊邊點到快爆
				{
					x=2;
					y=5;
				}  
				else if(color[4][2]==inputColor && Record[4][2]<Max[4][2]-1)	//把邊邊點到快爆
				{
					x=4;
					y=2;
				}
				
				/*else if((color[0][3]==0 || color[0][3]==inputColor) && Record[0][3]<Max[0][3]-1)
				{
					x=0;
					y=3;
				}
				else if((color[4][3]==0 || color[4][3]==inputColor) && Record[4][3]<Max[4][3]-1)
				{
					x=4;
					y=3;
				}*/
				else if(color[1][1]==0)
				{
					x=1;
					y=1;
				}
				else if(color[3][1]==0)
				{
					x=3;
					y=1;
				}
				else if(color[3][4]==0)
				{
					x=3;
					y=4;
				}
				else if(color[1][4]==0)
				{
					x=1;
					y=4;
				}
				else if(color[2][2]==0)
				{
					x=1;
					y=4;
				}
				else if(color[2][3]==0)
				{
					x=1;
					y=4;
				}
				else if(color[1][1]==inputColor && Record[1][1]<Max[1][1]-1)
				{
					x=1;
					y=1;
				}
				else if((color[3][1]==inputColor) && Record[3][1]<Max[3][1]-1)
				{
					x=3;
					y=1;
				} 
				else if((color[3][4]==inputColor) && Record[3][4]<Max[3][4]-1)
				{
					x=3;
					y=4;
				}      
				else if((color[1][4]==inputColor) && Record[1][4]<Max[1][4]-1)
				{
					x=1;
					y=4;
				}
				else if((color[2][2]==inputColor) && Record[2][2]<Max[2][2]-1)
				{
					x=2;
					y=2;
				}
				else if((color[2][3]==inputColor) && Record[2][3]<Max[2][3]-1)
				{
					x=2;
					y=3;
				}
				else
				{				
					if(x==7 && y==7)
					{
						for(int i=0;i<5;i+=4)
						{
							for(int j=0;j<6;j++)
							{
								if((color[i][j]==inputColor && Record[i][j]<Max[i][j]-1))
								{
									x=i;
									y=j;				
								}
							}
						}
					}
					
					if(x==7 && y==7)
					{
						for(int i=0;i<5;i++)
						{
							for(int j=0;j<6;j+=5)
							{
								if((color[i][j]==inputColor && Record[i][j]<Max[i][j]-1))
								{
									x=i;
									y=j;
									
								}
							}
						}
					}
					
					if(x==7 && y==7)
					{
						for(int i=0;i<5;i++)
						{
							for(int j=0;j<6;j+=5)
							{
								if(color[i][j]==inputColor || color[i][j]==0)
								{
									if(Record[i][j]<Max[i][j]-1)
									{
										x=i;
										y=j;	
										
									}
									
								}
							}
						}
					}
				}      
			}
			       
        }
        
        int getX()
		{
            return x;
        }
        int getY()
		{
            return y;
        }
    private:
        int x;
        int y;
    };
