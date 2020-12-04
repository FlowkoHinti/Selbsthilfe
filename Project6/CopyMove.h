#pragma once
class CopyMove
{
public:
	CopyMove();
	~CopyMove();
	CopyMove(CopyMove& zuKopieren);
	CopyMove(CopyMove&& zuBewegen);


	int getInt() const
	{
		return a;
	}
private:
	int a = 1;
	float hoehe;
	char* b;


};

