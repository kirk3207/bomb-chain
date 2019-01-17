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
				else if(color[2][5]==0 && color[1][5]!=(3-inputColor) && color[3][5]!=(3-inputColor))	  //搶邊邊
				{
					x=2;
					y=5;
				}
				else if(color[4][2]==0 && color[1][4]!=(3-inputColor) && color[3][4]!=(3-inputColor))     //搶邊邊
				{
					x=4;
					y=2;
				}
				else if(color[0][2]==0 && color[0][1]!=(3-inputColor) && color[0][3]!=(3-inputColor))     //搶邊邊
				{
					x=0;
					y=2;
				}
				else if(color[2][0]==0 && color[1][0]!=(3-inputColor) && color[3][0]!=(3-inputColor))	  //搶邊邊
				{
					x=2;
					y=0;
				}
				else if(color[1][1]==0 && color[0][1]!=(3-inputColor) && color[1][0]!=(3-inputColor))		//搶內圈
				{
					x=1;
					y=1;
				}
				else if(color[3][1]==0 && color[3][0]!=(3-inputColor) && color[4][1]!=(3-inputColor))		//搶內圈
				{
					x=3;
					y=1;
				}
				else if(color[3][4]==0 && color[4][4]!=(3-inputColor) && color[3][5]!=(3-inputColor))		//搶內圈
				{
					x=3;
					y=4;
				}
				else if(color[1][4]==0 && color[0][4]!=(3-inputColor) && color[1][5]!=(3-inputColor))		//搶內圈
				{
					x=1;
					y=4;
				}
				else
				{				
					if(x==7 && y==7)
					{
						for(int i=0;i<5;i+=4)
						{
							for(int j=1;j<5;j++)
							{
								if(color[i][j]==0 && color[i][j-1]!=(3-inputColor) && color[i][j+1]!=(3-inputColor))
								{
									x=i;
									y=j;
								}
							}
						}
					}//上下兩排 占地

					if(x==7 && y==7)
					{
						for(int i=1;i<4;i++)
						{
							for(int j=0;j<6;j+=5)
							{
								if(color[i][j]==0 && color[i-1][j]!=(3-inputColor) && color[i-1][j]!=(3-inputColor))
								{
									x=i;
									y=j;
								}
							}
						}
					}//左右兩排 占地

					if(x==7 && y==7)
					{
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<5;j++)
							{
								if(color[i][j]==0 && color[i-1][j]!=(3-inputColor) && color[i+1][j]!=(3-inputColor) && color[i][j-1]!=(3-inputColor) && color[i][j+1]!=(3-inputColor))
								{
									x=i;
									y=j;
								}
							}
						}
					}//內圈 占地(上下左右都沒有敵棋)
					
					if(x==7 && y==7)
					{
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<5;j++)
							{
								if(color[i][j]==0 && color[i-1][j]==inputColor && color[i+1][j]==inputColor && color[i][j-1]==inputColor)
								{
									x=i;
									y=j;
								}
							}
						}
					}//內圈 占地 (上下左是友棋)

					if(x==7 && y==7)
					{
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<5;j++)
							{
								if(color[i][j]==0 && color[i-1][j]==inputColor && color[i+1][j]==inputColor && color[i][j+1]==inputColor)
								{
									x=i;
									y=j;
								}
							}
						}
					}//內圈 占地 (上下右是友棋)

					if(x==7 && y==7)
					{
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<5;j++)
							{
								if(color[i][j]==0 && color[i-1][j]==inputColor && color[i][j-1]==inputColor && color[i][j+1]==inputColor)
								{
									x=i;
									y=j;
								}
							}
						}
					}//內圈 占地 (左右上是友棋)

					if(x==7 && y==7)
					{
						for(int i=1;i<4;i++)
						{
							for(int j=1;j<5;j++)
							{
								if(color[i][j]==0 && color[i+1][j]==inputColor && color[i][j-1]==inputColor && color[i][j+1]==inputColor)
								{
									x=i;
									y=j;
								}
							}
						}
					}//內圈 占地 (左右下是友棋)

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
					}//上下兩排 點到快爆

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
					}//左右兩排 點到快爆
					
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
