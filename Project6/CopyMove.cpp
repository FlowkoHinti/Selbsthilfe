#include "CopyMove.h"
#include <utility>

CopyMove::CopyMove()
{
	b = new char[1000];
	hoehe = 123;
}

CopyMove::CopyMove(CopyMove& zuKopieren) : b{ new char[1000] }, hoehe {zuKopieren.hoehe}
{
}


CopyMove::CopyMove(CopyMove&& zuBewegen) : b{ std::move(zuBewegen.b) }, hoehe{ std::move(zuBewegen.hoehe) }
{

}

CopyMove::~CopyMove()
{

}
