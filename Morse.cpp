#include<bits/stdc++.h>
#include<string>
using namespace std;
int main()
{
	char a=' ';
	//again:
	cout<<endl<<"Enter Input"<<endl;
	string encoded;
	string decoded;
	getline(cin, encoded);
	again:
	int c=0;
	if(encoded[0]=='_'||encoded[0]=='.')
	{
	english:
		meng:
			int d=0;
			while(encoded[c]=='.'|| encoded[c]=='_')
			{
				decoded[d]=encoded[c];
				c++;
				d++;
			}
			if(d==1)
			{
				if(decoded[0]=='.')
				cout<<"E";
				else
				cout<<"T";
				//break;
			}
			
			
			
			if(d==2)
			{
				if(decoded[0]=='.')
				{
					if(decoded[1]=='.')
					cout<<"I";
					else
					cout<<"A";
					//break;
				}
				if(decoded[0]=='_')
				{
					if(decoded[1]=='.')
					cout<<"N";
					else
					cout<<"M";
					//break;
				}
			}
			
			
			if(d==3)
			{
				if(decoded[0]=='.')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						cout<<"S";
						else
						cout<<"U";
						//break;
					}
					else
					{
						if(decoded[2]=='.')
						cout<<"R";
						else
						cout<<"W";
						//break;
					}
				}
				if(decoded[0]=='_')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						cout<<"D";
						else
						cout<<"K";
						//break;
					}
					else
					{
						if(decoded[2]=='.')
						cout<<"G";
						else
						cout<<"O";
						//break;
					}
				}
			}
				
			if(d==4)
			{
				if(decoded[0]=='.')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							cout<<"H";
							else
							cout<<"V";
							//break;
						}
						else
						{
							if(decoded[3]=='.')
							cout<<"F";
							else
							cout<<":U";
							//break;
						}
					}
					else
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							cout<<"L";
							else
							cout<<":A";
							//break;
						}
						else
						{
							if(decoded[3]=='.')
							cout<<"P";
							else
							cout<<"J";
							//break;
						}
					}
				}
				if(decoded[0]=='_')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							cout<<"B";
							else
							cout<<"X";
							//break;
						}
						else
						{
							if(decoded[3]=='.')
							cout<<"C";
							else
							cout<<"Y";
							//break;
						}
					}
					else
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							cout<<"Z";
							else
							cout<<"Q";
							//break;
						}
						else
						{
							if(decoded[3]=='.')
							cout<<":O";
							else
							cout<<"CH";
						}
					}
				}
			}
			if(d==5)
			{
				if(decoded[0]=='.')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<'5';
								else
								cout<<'4';
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"^S";
								else
								cout<<'3';
							}
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<"`E";
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"-D";
								else
								cout<<'2';
							}
						}
					}
					else
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<"&";
								else
								cout<<"`E";
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"+";
							}
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<"|p";
								else
								cout<<"`A";
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"^j";
								else
								cout<<'1';
							}
						}
					}
				}
				if(decoded[0]=='_')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<'6';
								else
								cout<<"=";
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"/";
							}
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<",C";
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"(";
							}
						}
					}
					else
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<'7';
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"^G";
								else
								cout<<"~N";
							}
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								cout<<"8";
							}
							else
							{
								if(decoded[4]=='.')
								cout<<"9";
								else
								cout<<'0';
							}
						}
					}
				}
			}
			if(d==6)
			{
				if(decoded[0]=='.')
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='.')
									{
									}	
								}
							}
							else
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='_')
									{
										cout<<"END OF WORK !";
									}	
								}
							}
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='.')
									{
									}
								}
							}
							else
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='.')
									cout<<"?";
									else
									cout<<"_";
								}
							}
						}
					}
					else
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='.')
									{
									}
								}
								else
								{
									if(decoded[5]=='.')
									cout<<"''";
								}
							}
							else
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='_')
									cout<<".";
								}
							}
							
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='.')
									{
									}
								}
								else
								{
									if(decoded[5]=='.')
									cout<<"@";
								}
							}
							else
							{
								if(decoded[4]=='_')
								{
									if(decoded[5]=='.')
									cout<<"'";
								}
							}
						}
					}
				}
				else 
				{
					if(decoded[1]=='.')
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='_')
									{
										cout<<"-";
									}	
								}
								
							}
							
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='_')
									{
										cout<<"-";
									}	
								}
								else
								{
									if(decoded[5]=='.')
									{
										cout<<";";
									}
									else
									{
										cout<<"!";
									}
								}
								
							}
							else //_._ _
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='_')
									{
										cout<<")";
									}	
								}
							}
						}
					}
					else
					{
						if(decoded[2]=='.')
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='_')
									{
									}	
								}
								else
								{
									if(decoded[5]=='_')
									cout<<",";
								}	
							}
						}
						else
						{
							if(decoded[3]=='.')
							{
								if(decoded[4]=='.')
								{
									if(decoded[5]=='.')
									cout<<":";	
								}
							}
						}
					}
				}
			}
	fflush(stdin);
	if(encoded[c]==' '||encoded[c+1]==' '||encoded[c+2]==' ' && c+2<=encoded.length())
	{
		c+3;
		cout<<"C+3 worked";
		goto meng;
	}
	if(encoded[c]==' ' && encoded[c+1]!=' ')
	{
		c++;
		cout<<"C++ Workin";
		goto meng;
	}
	}
	else
	{
	//morse:
		int count=0, alp=0;
		count=encoded.length();
		while(count--)
		{
			if((encoded[alp]>='a'&&encoded[alp]<='z')||(encoded[alp]>='A'&&encoded[alp]<='Z')||(encoded[alp]>='0'&&encoded[alp]<='9')||encoded[alp]=='?'||encoded[alp]=='_'||encoded[alp]=='"'||encoded[alp]=='.'||encoded[alp]=='@'||encoded[alp]=='`'||encoded[alp]=='-'||encoded[alp]=='='||encoded[alp]=='/'||encoded[alp]==':'||encoded[alp]==' ')
			{
				if(encoded[alp]==' ')
				cout<<"   ";
				if(encoded[alp]=='A'||encoded[alp]=='a')
				cout<<"._ " ;
				if(encoded[alp]=='B'||encoded[alp]=='b')
				cout<<"_... ";
				if(encoded[alp]=='C'||encoded[alp]=='c')
				cout<<"_._. ";
				if(encoded[alp]=='D'||encoded[alp]=='d')
				cout<<"_.. ";
				if(encoded[alp]=='E'||encoded[alp]=='e')
				cout<<". ";
				if(encoded[alp]=='F'||encoded[alp]=='f')
				cout<<".._. ";
				if(encoded[alp]=='G'||encoded[alp]=='g')
				cout<<"__. ";
				if(encoded[alp]=='H'||encoded[alp]=='h')
				cout<<".... ";
				if(encoded[alp]=='I'||encoded[alp]=='i')
				cout<<".. ";
				if(encoded[alp]=='J'||encoded[alp]=='j')
				cout<<".___ ";
				if(encoded[alp]=='K'||encoded[alp]=='k')
				cout<<"_._ ";
				if(encoded[alp]=='L'||encoded[alp]=='l')
				cout<<"._.. ";
				if(encoded[alp]=='M'||encoded[alp]=='m')
				cout<<"__ ";
				if(encoded[alp]=='N'||encoded[alp]=='n')
				cout<<"_. ";
				if(encoded[alp]=='O'||encoded[alp]=='o')
				cout<<"___ ";
				if(encoded[alp]=='P'||encoded[alp]=='p')
				cout<<".__. ";
				if(encoded[alp]=='Q'||encoded[alp]=='q')
				cout<<"__._ ";
				if(encoded[alp]=='R'||encoded[alp]=='r')
				cout<<"._. ";
				if(encoded[alp]=='S'||encoded[alp]=='s')
				cout<<"... ";
				if(encoded[alp]=='T'||encoded[alp]=='t')
				cout<<"_ ";
				if(encoded[alp]=='U'||encoded[alp]=='u')
				cout<<".._ ";
				if(encoded[alp]=='V'||encoded[alp]=='v')
				cout<<"..._ ";
				if(encoded[alp]=='W'||encoded[alp]=='w')
				cout<<".__ ";
				if(encoded[alp]=='X'||encoded[alp]=='x')
				cout<<"_.._ ";
				if(encoded[alp]=='Y'||encoded[alp]=='y')
				cout<<"_.__ ";
				if(encoded[alp]=='Z'||encoded[alp]=='z')
				cout<<"__.. ";
				if(encoded[alp]=='1')
				cout<<".____ ";
				if(encoded[alp]=='2')
				cout<<"..___ ";
				if(encoded[alp]=='3')
				cout<<"...__ ";
				if(encoded[alp]=='4')
				cout<<"...._ ";
				if(encoded[alp]=='5')
				cout<<"..... ";
				if(encoded[alp]=='6')
				cout<<"_.... ";
				if(encoded[alp]=='7')
				cout<<"__... ";
				if(encoded[alp]=='8')
				cout<<"___.. ";
				if(encoded[alp]=='9')
				cout<<"____. ";
				if(encoded[alp]=='0')
				cout<<"_____ ";
				if(encoded[alp]==':')
				cout<<"___... ";
				if(encoded[alp]==',')
				cout<<"__..__ ";
				if(encoded[alp]==')')
				cout<<"_.__._ ";
				if(encoded[alp]=='(')
				cout<<"_.__. ";
				if(encoded[alp]=='!')
				cout<<"_._.__ ";
				if(encoded[alp]==';')
				cout<<"_._._. ";
				if(encoded[alp]=='/')
				cout<<"_.._. ";
				if(encoded[alp]=='/')
				cout<<"_.._. ";
				if(encoded[alp]=='-')
				cout<<"_...._ ";
				if(encoded[alp]=='`')
				cout<<".____. ";
				if(encoded[alp]=='@')
				cout<<".__._. ";
				if(encoded[alp]=='.')
				cout<<"._._._ ";
				if(encoded[alp]=='"')
				cout<<"._.._. ";
				if(encoded[alp]=='?')
				cout<<"..__.. ";
				if(encoded[alp]=='_')
				cout<<"..__._ ";
			}
			alp++;
		}
	}
 	cout<<endl<<"Enter next Input        or        Press Space to exit."<<endl<<endl<<endl<<endl;
	encoded.clear();
	cin>>encoded;
	if(encoded[0]==' ')
	return 0;
	else
	goto again;
	return 0;
}
