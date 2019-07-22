#include <cstdio>
#include <iostream>
#include <string>
using namespace std;
string tehai1;
string tumo ="[ch]";
int tehai_p1[13] = {4,5,6,13,14,15,22,23,24,27,27,33,33};
char* int2hai(int i)
{
	static char kind[] = "mps";
	static char tu_hai[] = "tonashpehkhtch";
	static char buf[5];
	if((i<27)
	{
		sprintf(buf,"[%d%c]",i%9,kind[i/9]);
	} else {
		int n = (i-27)*2;
		sprintf(buf,"[%c%c]",tu_hai[n],tu_hai[n+1]);
	}
	return buf;
};
string vec2hai(int* v)
{
	static string ret;
	for(int i=0;i<13; i++)
	{
		ret += int2hai(v[i]);
	}
	return ret;
}
int main(){
	tehai1 = vec2hai(tehai_p1);
	cout << tehai1;
	cout << "_";
	cout << tumo;
	cout << "\n";
	return 0;
};
/*
https://www.developerfusion.com/tools/convert/vb-to-python/?batchId=cda0c5d8-2a88-41c5-bbf3-8725da74fbca
*/
	class int WHITE  = 1;
	class int BLACK  = -1;
	class int USE_AB  = True;
	class int YOMI_DEPTH  = 3;
	class bool HAND_READ  = True;
	class bool DEBUG_LOG  = False;
	class bool RETURN_LOG  = False;
	class bool DEBUG_TIME  = False;
	class int ROBO_TEBAN  = BLACK;
	class int BLANK  = 255;
	class int BRANCH_WIDTH  = 800;
	class MoveData {
		char r;
		char r2;
		char src;
		char dst;
		char hand = BLANK;
	};
    MoveData best = new MoveData
    MoveData modosi = new MoveData
    MoveData Node(BRANCH_WIDTH * (YOMI_DEPTH + 1))
    int NodeCount 
    int ArrayCount 
    int komaname As Array
    int board As Array
    int state 
    int undo 
    int range As Array
    int tegomaw As Array
    int tegomab As Array
    int pop 
    int all As Array
    int komaundo 
    int kihumem 
    int narimem 
    int robomode 
    int table[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 6, 7, 1, 2, 3, 4, 5, 6, 7, 8, 1, 2, 3, 4, 6, 7}
    int score[] = {0, 100, 300, 400, 600, 800, 1000, 1100, 65535, 900, 800, 800, 1000, 1200, 1300, 100, 300, 400, 600, 800, 1000, 1100, 65535, 900, 800, 800, 1000, 1200, 1300}
	void Init(void){
		komaname = {"", "歩", "香", "桂", "銀", "金", "飛", "角", "王", "と", "杏", "圭", "全", "龍", "馬"};
		all = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81};
        board = {16, 17, 18, 19, 22, 19, 18, 17, 16,
                    0, 21, 0, 0, 0, 0, 0, 20, 0,
                    15, 15, 15, 15, 15, 15, 15, 15, 15,
                    0, 0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0, 0,
                    0, 0, 0, 0, 0, 0, 0, 0, 0,
                    1, 1, 1, 1, 1, 1, 1, 1, 1,
                    0, 6, 0, 0, 0, 0, 0, 7, 0,
					2, 3, 4, 5, 8, 5, 4, 3, 2};
		tegomaw = {0, 0, 0, 0, 0, 0, 0, 0};
		tegomab = {0, 0, 0, 0, 0, 0, 0, 0};
		state = 0;
		undo = BLANK;
		komaundo = BLANK;
		kihumem = 0;
		narimem = BLANK;
		robomode = False;
		BoardSet();
		Randomize();
        //     For i = 0 To score.Length - 1 Step 1
        //      score(i) = score(i) + Rnd() * score(i) * 0.1
        //     Next
	}
	void BoardSet(void){
		int p;
		for( p = 1 ; p <= 81; p++){
			UnitSet(p);
		}
	}
	void UnitSet(int locale ){/*
        Dim b As Button
        Dim c 
        b = GetButton(locale)
        c = board(locale - 1)
        if(c = 0 ){
            b.Text = ""
            b.BackColor = Color.LightGray
        Elseif(1 <= c And c <= 14 ){
            b.Text = komaname(c)
            b.BackColor = Color.WhiteSmoke
            b.ForeColor = Color.Black
        Else
            b.Text = komaname(c - 14)
            b.BackColor = Color.DimGray
            b.ForeColor = Color.White
        }
	End Sub
	*/}
	&int[] UnitRange SetUnitRange(int locate ){
		int unit ;
		locate = locate - 1;
		unit = board(locate);
		returnall;
		if( unit = 1 ){
			return HuRange(locate, 1);
        }
        if(unit = 2 ){
			return KyoRange(locate, 1);
        }
        if(unit = 3 ){
			return KeimaRange(locate, 1);
        }
        if(unit = 4 ){
			return GinRange(locate, 1);
        }
        if(unit = 5 || unit = 9 || unit = 10 || unit = 11 || unit = 12 ){
			return KinRange(locate, 1);
        }
        if(unit = 6 ){
			return HisyaRange(locate, 1, False);
        }
        if(unit = 7 ){
			return KakuRange(locate, 1, False);
        }
        if(unit = 8 ){
			return OuRange(locate);
        }
        if(unit = 13 ){
			return HisyaRange(locate, 1, True);
        }
        if(unit = 14 ){
			return KakuRange(locate, 1, True);
        }
        if(unit = 15 ){
			return HuRange(locate, -1);
        }
        if(unit = 16 ){
			return KyoRange(locate, -1);
        }
        if(unit = 17 ){
			return KeimaRange(locate, -1);
        }
        if(unit = 18 ){
			return GinRange(locate, -1);
        }
        if(unit = 19 Or unit = 23 Or unit = 24 Or unit = 25 Or unit = 26 ){
			return KinRange(locate, -1);
        }
        if(unit = 20 ){
			return HisyaRange(locate, -1, False);
        }
        if(unit = 21 ){
			return KakuRange(locate, -1, False);
        }
        if(unit = 22 ){
			return OuRange(locate);
        }
        if(unit = 27 ){
			return HisyaRange(locate, -1, True);
        }
        if(unit = 28 ){
			return KakuRange(locate, -1, True);
        }
	}
	&int[] RangeCheck(ByVal locate ) {
		int i ;
        For i = 0 To range.Length - 1 Step 1
            if(range(i) = locate ){
                RangeCheck = True
                Exit Function
            }
        Next
        if(robomode = False ){
            RangeCheck = False
        Else
            RangeCheck = False
        }
	}
    Private Sub AddRange(ByVal dx , ByVal dy , ByVal array As Array, ByVal pos )
        Dim dist 
        if(CheckBoardRange(dx, dy) = True ){
            dist = dx + dy * 9 + 1
            if(IsWhite(undo) And IsWhite(dist) ){
                Exit Sub
            }
            if(IsBlack(undo) And IsBlack(dist) ){
                Exit Sub
            }
            array.SetValue(dist, pos)
        }
    End Sub
    Private Function HuRange(ByVal locate , ByVal wb ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        HuRange = {BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        dx = x
        dy = y - 1 * wb
        AddRange(dx, dy, HuRange, 0)
    End Function
    Private Function KyoRange(ByVal locate , ByVal wb ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        Dim i 
        Dim dist 
        Dim a As Array
        a = {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        For i = 1 To 8 Step 1
            dx = x
            dy = y - i * wb
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                a.SetValue(dist, i)
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i)
                    Exit For
                }
            Else
                Exit For
            }
        Next
        KyoRange = a
    End Function
    Private Function HisyaRange(ByVal locate , ByVal wb , ByVal c ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        Dim i 
        Dim dist 
        Dim a As Array
        a = {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        For i = 1 To 8 Step 1
            dx = x
            dy = y - i * wb
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                a.SetValue(dist, i)
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i)
                    Exit For
                }
            Else
                Exit For
            }
        Next
        For i = 1 To 8 Step 1
            dx = x
            dy = y + i * wb
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                a.SetValue(dist, i + 7)
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i + 7)
                    Exit For
                }
            Else
                Exit For
            }
        Next
        For i = 1 To 8 Step 1
            dx = x - i * wb
            dy = y
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                a.SetValue(dist, i + 15)
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i + 15)
                    Exit For
                }
            Else
                Exit For
            }
        Next
        For i = 1 To 8 Step 1
            dx = x + i * wb
            dy = y
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                a.SetValue(dist, i + 23)
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i + 23)
                    Exit For
                }
            Else
                Exit For
            }
        Next
        if(c = True ){
            dx = x - 1
            dy = y - 1
            AddRange(dx, dy, a, 32)
            dx = x + 1
            dy = y + 1
            AddRange(dx, dy, a, 33)
            dx = x - 1
            dy = y + 1
            AddRange(dx, dy, a, 34)
            dx = x + 1
            dy = y - 1
            AddRange(dx, dy, a, 35)
        }
        HisyaRange = a
    End Function
    Private Function KakuRange(ByVal locate , ByVal wb , ByVal c ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        Dim i 
        Dim dist 
        Dim a As Array
        a = {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK,
                BLANK, BLANK, BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        For i = 1 To 8 Step 1
            dx = x - i
            dy = y - i
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i)
                    Exit For
                Elseif(wb = -1 And IsBlack(undo) = IsWhite(dist) ){
                    a.SetValue(dist, i)
                    Exit For
                Else
                    a.SetValue(dist, i)
                }
            Else
                Exit For
            }
        Next
        For i = 1 To 8 Step 1
            dx = x + i
            dy = y + i
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i + 7)
                    Exit For
                Else
                    a.SetValue(dist, i + 7)
                }
            Else
                Exit For
            }
        Next
        For i = 1 To 8 Step 1
            dx = x - i
            dy = y + i
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                if(IsWB(wb, undo) = IsWB(-wb, dist) ){
                    a.SetValue(dist, i + 15)
                    Exit For
                Else
                    a.SetValue(dist, i + 15)
                }
            Else
                Exit For
            }
        Next
        For i = 1 To 8 Step 1
            dx = x + i
            dy = y - i
            if(CheckBoardRange(dx, dy) = True ){
                dist = dx + dy * 9 + 1
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    Exit For
                }
                if(IsWB(wb, undo) = IsWB(wb, dist) ){
                    a.SetValue(dist, i + 23)
                    Exit For
                Else
                    a.SetValue(dist, i + 23)
                }
            Else
                Exit For
            }
        Next
        if(c = True ){
            dx = x
            dy = y - 1
            AddRange(dx, dy, a, 32)
            dx = x
            dy = y + 1
            AddRange(dx, dy, a, 33)
            dx = x - 1
            dy = y
            AddRange(dx, dy, a, 34)
            dx = x + 1
            dy = y
            AddRange(dx, dy, a, 35)
        }
        KakuRange = a
    End Function
    Private Function KeimaRange(ByVal locate , ByVal wb ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        KeimaRange = {BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        dx = x + 1
        dy = y - 2 * wb
        AddRange(dx, dy, KeimaRange, 0)
        dx = x - 1
        dy = y - 2 * wb
        AddRange(dx, dy, KeimaRange, 1)
    End Function
    Private Function GinRange(ByVal locate , ByVal wb ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        GinRange = {BLANK, BLANK, BLANK, BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        dx = x
        dy = y - 1 * wb
        AddRange(dx, dy, GinRange, 0)
        dx = x + 1
        dy = y - 1
        AddRange(dx, dy, GinRange, 1)
        dx = x - 1
        dy = y - 1
        AddRange(dx, dy, GinRange, 2)
        dx = x + 1
        dy = y + 1
        AddRange(dx, dy, GinRange, 3)
        dx = x - 1
        dy = y + 1
        AddRange(dx, dy, GinRange, 4)
    End Function
    Private Function KinRange(ByVal locate , ByVal wb ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        KinRange = {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        dx = x
        dy = y - 1
        AddRange(dx, dy, KinRange, 0)
        dx = x + 1
        dy = y - 1 * wb
        AddRange(dx, dy, KinRange, 1)
        dx = x - 1
        dy = y - 1 * wb
        AddRange(dx, dy, KinRange, 2)
        dx = x + 1
        dy = y
        AddRange(dx, dy, KinRange, 3)
        dx = x - 1
        dy = y
        AddRange(dx, dy, KinRange, 4)
        dx = x
        dy = y + 1
        AddRange(dx, dy, KinRange, 5)
    End Function
    Private Function OuRange(ByVal locate ) As Array
        Dim x 
        Dim y 
        Dim dx 
        Dim dy 
        OuRange = {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}
        x = locate - Int(locate / 9) * 9
        y = Int(locate / 9)
        dx = x
        dy = y - 1
        AddRange(dx, dy, OuRange, 0)
        dx = x + 1
        dy = y - 1
        AddRange(dx, dy, OuRange, 1)
        dx = x - 1
        dy = y - 1
        AddRange(dx, dy, OuRange, 2)
        dx = x + 1
        dy = y + 1
        AddRange(dx, dy, OuRange, 3)
        dx = x - 1
        dy = y + 1
        AddRange(dx, dy, OuRange, 4)
        dx = x + 1
        dy = y
        AddRange(dx, dy, OuRange, 5)
        dx = x - 1
        dy = y
        AddRange(dx, dy, OuRange, 6)
        dx = x
        dy = y + 1
        AddRange(dx, dy, OuRange, 7)
    End Function
    Private Function CheckBoardRange(ByVal x , ByVal y ) 
        CheckBoardRange = True
        if(x < 0 Or 8 < x ){
            CheckBoardRange = False
        }
        if(y < 0 Or 8 < y ){
            CheckBoardRange = False
        }
    End Function
    Private Function IsWhite(ByVal locate ) 
        Dim c 
        IsWhite = False
        if(locate < 1 Or 81 < locate ){
            Exit Function
        }
        c = board(locate - 1)
        if(1 <= c And c <= 14 ){
            IsWhite = True
        }
    End Function
    Private Function IsBlack(ByVal locate ) 
        Dim c 
        IsBlack = False
        if(locate < 1 Or 81 < locate ){
            Exit Function
        }
        c = board(locate - 1)
        if(15 <= c And c <= 30 ){
            IsBlack = True
        }
    End Function
    Private Function IsWB(ByVal wb , ByVal i ) 
        if(wb = WHITE ){
            IsWB = IsWhite(i)
        Else
            IsWB = IsBlack(i)
        }
    End Function
    Private Function max(ByVal a , ByVal b )
        if(a >= b ){
            max = a
        Else
            max = b
        }
        Return max
    End Function
    Private Function min(ByVal a , ByVal b )
        if(a <= b ){
            min = a
        Else
            min = b
        }
        Return min
    End Function
    Function ReverceWB(ByVal wb ) 
        if(wb = -1 ){
            ReverceWB = 1
        Else
            ReverceWB = -1
        }
    End Function
    Private Function KomaScore(ByVal koma) 
        KomaScore = score(koma)
    End Function
    Private Function Hyouka() 
        Dim arw As Array = {1, 2, 3, 4, 5, 6, 7, 8}
        Dim arb As Array = {15, 16, 17, 18, 19, 20, 21, 22}
        Hyouka = 0
        For i = 0 To 80 Step 1
            if(IsWB(WHITE, i + 1) ){
                Hyouka += KomaScore(board(i))
            }
            if(IsWB(BLACK, i + 1) ){
                Hyouka -= KomaScore(board(i))
            }
        Next
        For i = 0 To 7 Step 1
            Hyouka += tegomaw(i) * KomaScore(arw(i)) * 1.05
            Hyouka -= tegomab(i) * KomaScore(arb(i)) * 1.05
        Next
        Hyouka = Hyouka / 2
        Return Hyouka
    End Function
    Private Function alphabeta(ByVal first , ByVal wb , ByVal depth ,
                            ByVal alpha , ByVal beta ) 
        if(depth = 0 ){
            Return Hyouka() * wb
        }
        Dim last  = GenerateMoves(first, wb)
        For i = first To last - 1
            MakeMove(Node(i), False)
            Dim a = -alphabeta(last, -wb, depth - 1, -beta, -alpha)
            UnmakeMove(Node(i))
            if((a > alpha) ){
                alpha = a
                if(depth = YOMI_DEPTH ){
                    best = Node(i)
                }
            }
            if(alpha >= beta ){
                Return alpha
            }
        Next
        Return alpha
    End Function
    Private Function GenerateMoves(ByVal first , ByVal wb ) 
        Dim idx  = first
        if(HAND_READ ){
            For i = 0 To 7
                if(wb = 1 ){
                    if(tegomaw(i) > 0 ){
                        range = HandRange(wb, i)
                        For j = 0 To range.Length - 1 Step 1
                            if(range(j) <> BLANK ){
                                Node(idx) = New MoveData
                                Node(idx).hand = i
                                Node(idx).r2 = range(j)
                                NodeCount += 1
                                idx += 1
                            }
                        Next
                    }
                Else
                    if(tegomab(i) > 0 ){
                        range = HandRange(wb, i)
                        For j = 0 To range.Length - 1 Step 1
                            if(range(j) <> BLANK ){
                                Node(idx) = New MoveData
                                Node(idx).hand = i + 15
                                Node(idx).r2 = range(j)
                                NodeCount += 1
                                idx += 1
                            }
                        Next
                    }
                }
            Next
        }
        For i = 1 To 81 Step 1
            if(True = IsWB(wb, i) ){
                undo = i
                range = UnitRange(i)
                ArrayCount += range.Length
                For j = 0 To range.Length - 1 Step 1
                    if(range(j) <> BLANK ){
                        Node(idx) = New MoveData
                        Node(idx).r = i
                        Node(idx).r2 = range(j)
                        Node(idx).src = board(i - 1)
                        Node(idx).dst = board(range(j) - 1)
                        Node(idx).hand = BLANK
                        NodeCount += 1
                        idx += 1
                    }
                Next
            }
        Next
        Return idx
    End Function
    Private Sub RobotMove(ByVal wb )
        Dim c 
        Dim r 
        Dim r2 
        Dim undobuf 
        Dim PutRetire  = False
        Dim nodemax 
        Dim nodemin 
        c = 0
        NodeCount = 0
        ArrayCount = 0
        Dim starttime As Long = Now.Hour * 3600 + Now.Minute * 60 + Now.Second
        undobuf = undo
        nodemax = 214748364
        nodemin = -214748364
        Dim MakeBuff As MoveData = New MoveData
        Dim FindFlag  = False
        SuspendLayout()
        best.r = BLANK
        Dim ret  = alphabeta(0, wb, YOMI_DEPTH, nodemin, nodemax)
        if(RETURN_LOG ){
            ListBox1.Items.Add(ret)
        }
        robomode = True
        ResumeLayout()
        if(best.r = BLANK ){
            ListBox1.Items.Add("▽投了")
            ListBox1.TopIndex = ListBox1.Items.Count - 1
        Elseif(best.hand = BLANK ){
            r = best.r
            r2 = best.r2
            GetButton(r).PerformClick()
            GetButton(r2).PerformClick()
            robomode = False
        Else
            r = best.hand - 14
            r2 = best.r2
            GetHandBlack(r).PerformClick()
            GetButton(r2).PerformClick()
            robomode = False
        }
    End Sub
    Private Sub UnitClick(ByVal locate )
        Dim b As Button
        Dim c 
        Dim r 
        r = False
        if(state = 0 ){
            undo = locate
            range = UnitRange(locate)
            For i = 0 To range.Length - 1 Step 1
                if(range(i) <> BLANK ){
                    r = True
                }
            Next
            if(r = False ){
                Exit Sub
            }
            if(IsWhite(locate) = True ){
                state = 1
            Elseif(IsBlack(locate) = True ){
                state = 2
            Else
                Exit Sub
            }
            For c = 0 To range.Length - 1 Step 1
                b = GetButton(range(c))
                if(IsWhite(locate) = True ){
                    b.BackColor = Color.RoyalBlue
                Else
                    b.BackColor = Color.OrangeRed
                }
            Next
        Elseif(state = 1 And RangeCheck(locate) ){
            'MoveChara(locate)
            Dim d As MoveData = New MoveData
            d.hand = BLANK
            d.r = undo
            d.r2 = locate
            d.src = board(undo - 1)
            d.dst = board(locate - 1)
            MakeMove(d, True)
            DispAll()
            AddKihu(locate)
            state = 0
            Me.Refresh()
            Me.Cursor = Cursors.WaitCursor
            RobotMove(-1)
            Me.Cursor = Cursors.Default
        Elseif((state = 1 Or state = 2) And undo = locate ){
            DispAll()
            state = 0
        Elseif(state = 2 And RangeCheck(locate) ){
            'MoveChara(locate)
            Dim d As MoveData = New MoveData
            d.hand = BLANK
            d.r = undo
            d.r2 = locate
            d.src = board(undo - 1)
            d.dst = board(locate - 1)
            MakeMove(d, True)
            DispAll()
            AddKihu(locate)
            state = 0
        Elseif(state = 3 And RangeCheck(locate) ){
            'board(locate - 1) = pop
            'tegomaw(pop - 1) = tegomaw(pop - 1) - 1
            Dim d As MoveData = New MoveData
            d.hand = pop
            d.r = undo
            d.r2 = locate
            d.src = board(undo - 1)
            d.dst = board(locate - 1)
            MakeMove(d, True)
            DispAll()
            AddKihu(locate)
            undo = BLANK
            komaundo = BLANK
            state = 0
            Me.Refresh()
            Me.Cursor = Cursors.WaitCursor
            RobotMove(-1)
            Me.Cursor = Cursors.Default
        Elseif(state = 4 And RangeCheck(locate) ){
            'board(locate - 1) = pop
            'tegomab(pop - 15) = tegomab(pop - 15) - 1
            Dim d As MoveData = New MoveData
            d.hand = pop
            d.r = undo
            d.r2 = locate
            d.src = board(undo - 1)
            d.dst = board(locate - 1)
            MakeMove(d, True)
            DispAll()
            AddKihu(locate)
            undo = BLANK
            komaundo = BLANK
            state = 0
        }
    End Sub
    Private Sub DispAll()
        For p = 1 To 81 Step 1
            UnitSet(p)
        Next
        DispHand()
        TextBox3.Text = Hyouka().ToString
        TextBox4.Text = -Hyouka().ToString
    End Sub
    Private Function HandRange(ByVal wb , ByVal idx ) As Array
        Dim arw As Array = {1, 2, 3, 4, 5, 6, 7, 8}
        Dim arb As Array = {15, 16, 17, 18, 19, 20, 21, 22}
        Dim koma = arb(idx)
        if(wb = 1 ){
            koma = arw(idx)
        }
        range = all.Clone()
        For i = 0 To 80 Step 1
            if(board(i) <> 0 ){
                range(i) = BLANK
            }
        Next
        if(koma = 1 ){
            For i = 0 To 8 Step 1
                range(i) = BLANK
            Next
            For i = 0 To 8 Step 1
                For j = 0 To 8
                    if(board(i + j * 9) = 1 ){
                        For k = 0 To 8
                            range(i + k * 9) = BLANK
                        Next
                    }
                Next
            Next
        }
        if(koma = 2 ){
            For i = 0 To 8 Step 1
                range(i) = BLANK
            Next
        }
        if(koma = 3 ){
            For i = 0 To 17 Step 1
                range(i) = BLANK
            Next
        }
        if(koma = 15 ){
            For i = 72 To 80 Step 1
                range(i) = BLANK
            Next
            For i = 0 To 8 Step 1
                For j = 0 To 8
                    if(board(i + j * 9) = 15 ){
                        For k = 0 To 8
                            range(i + k * 9) = BLANK
                        Next
                    }
                Next
            Next
        }
        if(koma = 16 ){
            For i = 72 To 80 Step 1
                range(i) = BLANK
            Next
        }
        if(koma = 17 ){
            For i = 63 To 80 Step 1
                range(i) = BLANK
            Next
        }
        HandRange = range.Clone
    End Function
    Private Function TakeHand(ByVal koma ) As Array
        Dim b As Button
        pop = koma
        range = all.Clone()
        For i = 0 To 80 Step 1
            if(board(i) <> 0 ){
                range(i) = BLANK
            }
        Next
        if(koma = 1 ){
            For i = 0 To 8 Step 1
                range(i) = BLANK
            Next
            For i = 0 To 8 Step 1
                For j = 0 To 8
                    if(board(i + j * 9) = 1 ){
                        For k = 0 To 8
                            range(i + k * 9) = BLANK
                        Next
                    }
                Next
            Next
        }
        if(koma = 2 ){
            For i = 0 To 8 Step 1
                range(i) = BLANK
            Next
        }
        if(koma = 3 ){
            For i = 0 To 17 Step 1
                range(i) = BLANK
            Next
        }
        if(koma = 15 ){
            For i = 72 To 80 Step 1
                range(i) = BLANK
            Next
            For i = 0 To 8 Step 1
                For j = 0 To 8
                    if(board(i + j * 9) = 15 ){
                        For k = 0 To 8
                            range(i + k * 9) = BLANK
                        Next
                    }
                Next
            Next
        }
        if(koma = 16 ){
            For i = 72 To 80 Step 1
                range(i) = BLANK
            Next
        }
        if(koma = 17 ){
            For i = 63 To 80 Step 1
                range(i) = BLANK
            Next
        }
        if(komaundo <> BLANK ){
            range = {}
            DispAll()
            komaundo = BLANK
            state = 0
            TakeHand = range.Clone
            Exit Function
        Else
            komaundo = koma
        }
        if(1 <= koma Or koma <= 14 ){
            state = 3
            For c = 0 To range.Length - 1 Step 1
                b = GetButton(range(c))
                b.BackColor = Color.RoyalBlue
            Next
        }
        if(15 <= koma ){
            state = 4
            For c = 0 To range.Length - 1 Step 1
                b = GetButton(range(c))
                b.BackColor = Color.OrangeRed
            Next
        }
        TakeHand = range.Clone
    End Function
    Private Sub DispHand()
        Dim i 
        For i = 1 To tegomaw.Length Step 1
            GetHandWhite(i).Text = GetKomaName(i) + Str(tegomaw(i - 1))
            if(tegomaw(i - 1) > 0 ){
                GetHandWhite(i).Visible = True
            Else
                GetHandWhite(i).Visible = False
            }
        Next
        For i = 1 To tegomab.Length Step 1
            GetHandBlack(i).Text = GetKomaName(i) + Str(tegomab(i - 1))
            if(tegomab(i - 1) > 0 ){
                GetHandBlack(i).Visible = True
            Else
                GetHandBlack(i).Visible = False
            }
        Next
    End Sub
    Private Sub AddYomi(ByVal locate )
        Dim x 
        Dim y 
        Dim koma As String
        Dim uchi As String
        Dim triangle As String
        Dim pos As String
        Dim nari As String
        Dim wb 
        if(IsWhite(locate) = True ){
            wb = 1
            triangle = "▲"
        Else
            wb = -1
            triangle = "▽"
        }
        locate = locate - 1
        x = locate - Int(locate / 9) * 9 + 1
        y = Int(locate / 9) + 1
        if(komaundo <> BLANK ){
            uchi = "打"
        Else
            uchi = ""
        }
        if(locate = kihumem ){
            pos = " 同"
        Else
            pos = Str(x) + GetKanji(y)
        }
        if(narimem <> BLANK And narimem <> board(locate) ){
            koma = GetKomaName(narimem)
            nari = "成"
        Else
            koma = GetKomaName(board(locate))
            nari = ""
        }
        ListBox1.Items.Add("Y" + triangle + pos + koma + GetSoeji(locate + 1) + uchi + nari)
        ListBox1.Items.Add(Hyouka() * ROBO_TEBAN * wb)
        ListBox1.TopIndex = ListBox1.Items.Count - 1
        kihumem = locate
        narimem = BLANK
    End Sub
    Private Sub MakeMove(ByVal d As MoveData, ByVal mov )
        modosi = d
        if(d.hand <> BLANK ){
            KomaOki(d.r2, d.hand)
            GoTo LOG_WRITE
        }
        KomaTori(d.r2)
        if(mov ){
            narimem = board(d.r - 1)
        }
        ClassUp(d.r)
        board(d.r2 - 1) = board(d.r - 1)
        board(d.r - 1) = 0
        ClassUp(d.r2)
LOG_WRITE:
        if(DEBUG_LOG ){
            AddYomi(d.r2)
        }
    End Sub
    Private Sub UnmakeMove(ByVal d As MoveData)
        if(d.hand <> BLANK ){
            KomaModosi(d.r2)
            board(d.r2 - 1) = 0
            Exit Sub
        }
        board(d.r - 1) = d.src
        KomaKaeshi(d.r2, d.dst)
    End Sub
    Private Function Question() 
        Question = True
        if(My.Computer.Keyboard.ShiftKeyDown ){
            Question = False
        }
        if(My.Computer.Keyboard.CtrlKeyDown ){
            Question = False
        }
    End Function
    Private Sub ClassUp(ByVal locate )
        Dim unit 
        unit = board(locate - 1)
        if(IsWhite(locate) And 1 <= locate And locate <= 27 ){
            if(Question() = False ){
                Exit Sub
            }
            if(unit = 1 ){
                board(locate - 1) = 9
            }
            if(unit = 2 ){
                board(locate - 1) = 10
            }
            if(unit = 3 ){
                board(locate - 1) = 11
            }
            if(unit = 4 ){
                board(locate - 1) = 12
            }
            if(unit = 6 ){
                board(locate - 1) = 13
            }
            if(unit = 7 ){
                board(locate - 1) = 14
            }
        }
        if(IsBlack(locate) And 55 <= locate And locate <= 81 ){
            if(unit = 15 ){
                board(locate - 1) = 23
            }
            if(unit = 16 ){
                board(locate - 1) = 24
            }
            if(unit = 17 ){
                board(locate - 1) = 25
            }
            if(unit = 18 ){
                board(locate - 1) = 26
            }
            if(unit = 20 ){
                board(locate - 1) = 27
            }
            if(unit = 21 ){
                board(locate - 1) = 28
            }
        }
    End Sub
    Private Sub KomaTori(ByVal locate)
        Dim t 
        t = board(locate - 1)
        if(15 <= t ){
            t = table(t) - 1
            tegomaw(t) = tegomaw(t) + 1
        Elseif(1 <= t And t <= 14 ){
            t = table(t) - 1
            tegomab(t) = tegomab(t) + 1
        }
    End Sub
    Private Sub KomaModosi(ByVal locate)
        Dim t 
        t = board(locate - 1)
        if(15 <= t ){
            t = table(t) - 1
            tegomab(t) = tegomab(t) + 1
        Elseif(1 <= t And t <= 14 ){
            t = table(t) - 1
            tegomaw(t) = tegomaw(t) + 1
        }
    End Sub
    Private Sub KomaOki(ByVal locate, ByVal t)
        board(locate - 1) = t
        if(15 <= t ){
            t = table(t) - 1
            tegomab(t) = tegomab(t) - 1
        Elseif(1 <= t And t <= 14 ){
            t = table(t) - 1
            tegomaw(t) = tegomaw(t) - 1
        }
    End Sub
    Private Sub KomaKaeshi(ByVal locate, ByVal t)
        board(locate - 1) = t
        if(15 <= t ){
            t = table(t) - 1
            tegomaw(t) = tegomaw(t) - 1
        Elseif(1 <= t And t <= 14 ){
            t = table(t) - 1
            tegomab(t) = tegomab(t) - 1
        }
    End Sub
    Private Sub AddKihu(ByVal locate )
        Dim x 
        Dim y 
        Dim koma As String
        Dim uchi As String
        Dim triangle As String
        Dim pos As String
        Dim nari As String
        if(IsWhite(locate) = True ){
            triangle = "▲"
        Else
            triangle = "▽"
        }
        locate = locate - 1
        x = locate - Int(locate / 9) * 9 + 1
        y = Int(locate / 9) + 1
        if(komaundo <> BLANK ){
            uchi = "打"
        Else
            uchi = ""
        }
        if(locate = kihumem ){
            pos = " 同"
        Else
            pos = Str(x) + GetKanji(y)
        }
        if(narimem <> BLANK And narimem <> board(locate) ){
            koma = GetKomaName(narimem)
            nari = "成"
        Else
            koma = GetKomaName(board(locate))
            nari = ""
        }
        ListBox1.Items.Add(triangle + pos + koma + GetSoeji(locate + 1) + uchi + nari)
        ListBox1.TopIndex = ListBox1.Items.Count - 1
        kihumem = locate
        narimem = BLANK
    End Sub
    Private Function GetKomaName(ByVal index ) As String
        if(15 <= index ){
            index = index - 14
        }
        GetKomaName = komaname(index)
    End Function
    Private Function GetKanji(ByVal num ) As String
        Dim k As Array
        k = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"}
        GetKanji = k(num)
    End Function
    Private Function GetSoeji(ByVal locate ) As String
        Dim prev As Array
        Dim Range As Array
        Dim Kouho As Array
        Dim ki 
        Dim x 
        Dim y 
        Dim ubuf 
        Dim lx 
        Dim ly 
        Dim lbuf 
        Dim dx 
        Dim dy 
        Dim xc 
        Dim yc 
        Dim dl 
        Dim lr As String
        Dim ud As String
        Kouho = {BLANK, BLANK, BLANK, BLANK, BLANK, BLANK}
        ki = 0
        lr = ""
        ud = ""
        prev = board.Clone
        if(undo = BLANK ){
            GetSoeji = ""
            Exit Function
        }
        prev(undo - 1) = board(locate - 1)
        prev(locate - 1) = 0
        For i = 1 To 81 Step 1
            if(i = undo ){
            Elseif(prev(i - 1) = prev(undo - 1) ){
                Range = UnitRange(i)
                For j = 0 To Range.Length - 1 Step 1
                    if(Range(j) = locate ){
                        Kouho(ki) = i
                    }
                Next
            }
        Next
        lbuf = locate - 1
        lx = lbuf - Int(lbuf / 9) * 9 + 1
        ly = Int(lbuf / 9) + 1
        ubuf = undo - 1
        x = ubuf - Int(ubuf / 9) * 9 + 1
        y = Int(ubuf / 9) + 1
        xc = 0
        yc = 0
        For i = 0 To Kouho.Length - 1 Step 1
            if(Kouho(i) <> BLANK ){
                dl = Kouho(i)
                dl = dl - 1
                dx = dl - Int(dl / 9) * 9 + 1
                dy = Int(dl / 9) + 1
                if(x = dx ){
                    xc = xc + 1
                }
                if(y = dy ){
                    yc = yc + 1
                }
            }
        Next

        For i = 0 To Kouho.Length - 1 Step 1
            if(Kouho(i) <> BLANK ){
                dl = Kouho(i)
                dl = dl - 1
                dx = dl - Int(dl / 9) * 9 + 1
                dy = Int(dl / 9) + 1
                if(1 <= yc ){
                    if(state = 1 ){
                        if(x < dx ){
                            lr = "右"
                        Elseif(dx < x ){
                            lr = "左"
                        }
                    Elseif(state = 2 ){
                        if(x < dx ){
                            lr = "左"
                        Elseif(dx < x ){
                            lr = "右"
                        }
                    }
                }
                if(0 = xc ){
                    if(state = 1 ){
                        if(y < dy ){
                            ud = "引"
                        Elseif(dy < y ){
                            ud = "上"
                        }
                    Elseif(state = 2 ){
                        if(y < dy ){
                            ud = "上"
                        Elseif(dy < y ){
                            ud = "引"
                        }
                    }
                }
            }
        Next
        GetSoeji = lr + ud
    End Function
    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        UnitClick(1)
    End Sub
    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        UnitClick(2)
    End Sub
    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        UnitClick(3)
    End Sub
    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        UnitClick(4)
    End Sub
    Private Sub Button5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button5.Click
        UnitClick(5)
    End Sub
    Private Sub Button6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button6.Click
        UnitClick(6)
    End Sub
    Private Sub Button7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button7.Click
        UnitClick(7)
    End Sub
    Private Sub Button8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button8.Click
        UnitClick(8)
    End Sub
    Private Sub Button9_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button9.Click
        UnitClick(9)
    End Sub
    Private Sub Button10_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button10.Click
        UnitClick(10)
    End Sub
    Private Sub Button11_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button11.Click
        UnitClick(11)
    End Sub
    Private Sub Button12_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button12.Click
        UnitClick(12)
    End Sub
    Private Sub Button13_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button13.Click
        UnitClick(13)
    End Sub
    Private Sub Button14_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button14.Click
        UnitClick(14)
    End Sub
    Private Sub Button15_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button15.Click
        UnitClick(15)
    End Sub
    Private Sub Button16_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button16.Click
        UnitClick(16)
    End Sub
    Private Sub Button17_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button17.Click
        UnitClick(17)
    End Sub
    Private Sub Button18_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button18.Click
        UnitClick(18)
    End Sub
    Private Sub Button19_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button19.Click
        UnitClick(19)
    End Sub
    Private Sub Button20_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button20.Click
        UnitClick(20)
    End Sub
    Private Sub Button21_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button21.Click
        UnitClick(21)
    End Sub
    Private Sub Button22_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button22.Click
        UnitClick(22)
    End Sub
    Private Sub Button23_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button23.Click
        UnitClick(23)
    End Sub
    Private Sub Button24_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button24.Click
        UnitClick(24)
    End Sub
    Private Sub Button25_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button25.Click
        UnitClick(25)
    End Sub
    Private Sub Button26_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button26.Click
        UnitClick(26)
    End Sub
    Private Sub Button27_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button27.Click
        UnitClick(27)
    End Sub
    Private Sub Button28_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button28.Click
        UnitClick(28)
    End Sub
    Private Sub Button29_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button29.Click
        UnitClick(29)
    End Sub
    Private Sub Button30_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button30.Click
        UnitClick(30)
    End Sub
    Private Sub Button31_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button31.Click
        UnitClick(31)
    End Sub
    Private Sub Button32_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button32.Click
        UnitClick(32)
    End Sub
    Private Sub Button33_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button33.Click
        UnitClick(33)
    End Sub
    Private Sub Button34_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button34.Click
        UnitClick(34)
    End Sub
    Private Sub Button35_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button35.Click
        UnitClick(35)
    End Sub
    Private Sub Button36_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button36.Click
        UnitClick(36)
    End Sub
    Private Sub Button37_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button37.Click
        UnitClick(37)
    End Sub
    Private Sub Button38_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button38.Click
        UnitClick(38)
    End Sub
    Private Sub Button39_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button39.Click
        UnitClick(39)
    End Sub
    Private Sub Button40_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button40.Click
        UnitClick(40)
    End Sub
    Private Sub Button41_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button41.Click
        UnitClick(41)
    End Sub
    Private Sub Button42_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button42.Click
        UnitClick(42)
    End Sub
    Private Sub Button43_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button43.Click
        UnitClick(43)
    End Sub
    Private Sub Button44_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button44.Click
        UnitClick(44)
    End Sub
    Private Sub Button45_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button45.Click
        UnitClick(45)
    End Sub
    Private Sub Button46_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button46.Click
        UnitClick(46)
    End Sub
    Private Sub Button47_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button47.Click
        UnitClick(47)
    End Sub
    Private Sub Button48_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button48.Click
        UnitClick(48)
    End Sub
    Private Sub Button49_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button49.Click
        UnitClick(49)
    End Sub
    Private Sub Button50_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button50.Click
        UnitClick(50)
    End Sub
    Private Sub Button51_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button51.Click
        UnitClick(51)
    End Sub
    Private Sub Button52_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button52.Click
        UnitClick(52)
    End Sub
    Private Sub Button53_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button53.Click
        UnitClick(53)
    End Sub
    Private Sub Button54_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button54.Click
        UnitClick(54)
    End Sub
    Private Sub Button55_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button55.Click
        UnitClick(55)
    End Sub
    Private Sub Button56_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button56.Click
        UnitClick(56)
    End Sub
    Private Sub Button57_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button57.Click
        UnitClick(57)
    End Sub
    Private Sub Button58_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button58.Click
        UnitClick(58)
    End Sub
    Private Sub Button59_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button59.Click
        UnitClick(59)
    End Sub
    Private Sub Button60_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button60.Click
        UnitClick(60)
    End Sub
    Private Sub Button61_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button61.Click
        UnitClick(61)
    End Sub
    Private Sub Button62_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button62.Click
        UnitClick(62)
    End Sub
    Private Sub Button63_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button63.Click
        UnitClick(63)
    End Sub
    Private Sub Button64_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button64.Click
        UnitClick(64)
    End Sub
    Private Sub Button65_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button65.Click
        UnitClick(65)
    End Sub
    Private Sub Button66_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button66.Click
        UnitClick(66)
    End Sub
    Private Sub Button67_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button67.Click
        UnitClick(67)
    End Sub
    Private Sub Button68_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button68.Click
        UnitClick(68)
    End Sub
    Private Sub Button69_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button69.Click
        UnitClick(69)
    End Sub
    Private Sub Button70_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button70.Click
        UnitClick(70)
    End Sub
    Private Sub Button71_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button71.Click
        UnitClick(71)
    End Sub
    Private Sub Button72_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button72.Click
        UnitClick(72)
    End Sub
    Private Sub Button73_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button73.Click
        UnitClick(73)
    End Sub
    Private Sub Button74_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button74.Click
        UnitClick(74)
    End Sub
    Private Sub Button75_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button75.Click
        UnitClick(75)
    End Sub
    Private Sub Button76_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button76.Click
        UnitClick(76)
    End Sub
    Private Sub Button77_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button77.Click
        UnitClick(77)
    End Sub
    Private Sub Button78_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button78.Click
        UnitClick(78)
    End Sub
    Private Sub Button79_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button79.Click
        UnitClick(79)
    End Sub
    Private Sub Button80_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button80.Click
        UnitClick(80)
    End Sub
    Private Sub Button81_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button81.Click
        UnitClick(81)
    End Sub
    Private Function GetButton(ByVal locate ) As Button
        GetButton = Button255
        if(locate = 1 ){
            GetButton = Button1
        }
        if(locate = 2 ){
            GetButton = Button2
        }
        if(locate = 3 ){
            GetButton = Button3
        }
        if(locate = 4 ){
            GetButton = Button4
        }
        if(locate = 5 ){
            GetButton = Button5
        }
        if(locate = 6 ){
            GetButton = Button6
        }
        if(locate = 7 ){
            GetButton = Button7
        }
        if(locate = 8 ){
            GetButton = Button8
        }
        if(locate = 9 ){
            GetButton = Button9
        }
        if(locate = 10 ){
            GetButton = Button10
        }
        if(locate = 11 ){
            GetButton = Button11
        }
        if(locate = 12 ){
            GetButton = Button12
        }
        if(locate = 13 ){
            GetButton = Button13
        }
        if(locate = 14 ){
            GetButton = Button14
        }
        if(locate = 15 ){
            GetButton = Button15
        }
        if(locate = 16 ){
            GetButton = Button16
        }
        if(locate = 17 ){
            GetButton = Button17
        }
        if(locate = 18 ){
            GetButton = Button18
        }
        if(locate = 19 ){
            GetButton = Button19
        }
        if(locate = 20 ){
            GetButton = Button20
        }
        if(locate = 21 ){
            GetButton = Button21
        }
        if(locate = 22 ){
            GetButton = Button22
        }
        if(locate = 23 ){
            GetButton = Button23
        }
        if(locate = 24 ){
            GetButton = Button24
        }
        if(locate = 25 ){
            GetButton = Button25
        }
        if(locate = 26 ){
            GetButton = Button26
        }
        if(locate = 27 ){
            GetButton = Button27
        }
        if(locate = 28 ){
            GetButton = Button28
        }
        if(locate = 29 ){
            GetButton = Button29
        }
        if(locate = 30 ){
            GetButton = Button30
        }
        if(locate = 31 ){
            GetButton = Button31
        }
        if(locate = 32 ){
            GetButton = Button32
        }
        if(locate = 33 ){
            GetButton = Button33
        }
        if(locate = 34 ){
            GetButton = Button34
        }
        if(locate = 35 ){
            GetButton = Button35
        }
        if(locate = 36 ){
            GetButton = Button36
        }
        if(locate = 37 ){
            GetButton = Button37
        }
        if(locate = 38 ){
            GetButton = Button38
        }
        if(locate = 39 ){
            GetButton = Button39
        }
        if(locate = 40 ){
            GetButton = Button40
        }
        if(locate = 41 ){
            GetButton = Button41
        }
        if(locate = 42 ){
            GetButton = Button42
        }
        if(locate = 43 ){
            GetButton = Button43
        }
        if(locate = 44 ){
            GetButton = Button44
        }
        if(locate = 45 ){
            GetButton = Button45
        }
        if(locate = 46 ){
            GetButton = Button46
        }
        if(locate = 47 ){
            GetButton = Button47
        }
        if(locate = 48 ){
            GetButton = Button48
        }
        if(locate = 49 ){
            GetButton = Button49
        }
        if(locate = 50 ){
            GetButton = Button50
        }
        if(locate = 51 ){
            GetButton = Button51
        }
        if(locate = 52 ){
            GetButton = Button52
        }
        if(locate = 53 ){
            GetButton = Button53
        }
        if(locate = 54 ){
            GetButton = Button54
        }
        if(locate = 55 ){
            GetButton = Button55
        }
        if(locate = 56 ){
            GetButton = Button56
        }
        if(locate = 57 ){
            GetButton = Button57
        }
        if(locate = 58 ){
            GetButton = Button58
        }
        if(locate = 59 ){
            GetButton = Button59
        }
        if(locate = 60 ){
            GetButton = Button60
        }
        if(locate = 61 ){
            GetButton = Button61
        }
        if(locate = 62 ){
            GetButton = Button62
        }
        if(locate = 63 ){
            GetButton = Button63
        }
        if(locate = 64 ){
            GetButton = Button64
        }
        if(locate = 65 ){
            GetButton = Button65
        }
        if(locate = 66 ){
            GetButton = Button66
        }
        if(locate = 67 ){
            GetButton = Button67
        }
        if(locate = 68 ){
            GetButton = Button68
        }
        if(locate = 69 ){
            GetButton = Button69
        }
        if(locate = 70 ){
            GetButton = Button70
        }
        if(locate = 71 ){
            GetButton = Button71
        }
        if(locate = 72 ){
            GetButton = Button72
        }
        if(locate = 73 ){
            GetButton = Button73
        }
        if(locate = 74 ){
            GetButton = Button74
        }
        if(locate = 75 ){
            GetButton = Button75
        }
        if(locate = 76 ){
            GetButton = Button76
        }
        if(locate = 77 ){
            GetButton = Button77
        }
        if(locate = 78 ){
            GetButton = Button78
        }
        if(locate = 79 ){
            GetButton = Button79
        }
        if(locate = 80 ){
            GetButton = Button80
        }
        if(locate = 81 ){
            GetButton = Button81
        }
    End Function
    Private Function GetHandWhite(ByVal locate ) As Button
        GetHandWhite = Button255
        if(locate = 1 ){
            GetHandWhite = ButtonA1
        }
        if(locate = 2 ){
            GetHandWhite = ButtonA2
        }
        if(locate = 3 ){
            GetHandWhite = ButtonA3
        }
        if(locate = 4 ){
            GetHandWhite = ButtonA4
        }
        if(locate = 5 ){
            GetHandWhite = ButtonA5
        }
        if(locate = 6 ){
            GetHandWhite = ButtonA6
        }
        if(locate = 7 ){
            GetHandWhite = ButtonA7
        }
        if(locate = 8 ){
            GetHandWhite = ButtonA8
        }
    End Function
    Private Function GetHandBlack(ByVal locate ) As Button
        GetHandBlack = Button255
        if(locate = 1 ){
            GetHandBlack = ButtonB1
        }
        if(locate = 2 ){
            GetHandBlack = ButtonB2
        }
        if(locate = 3 ){
            GetHandBlack = ButtonB3
        }
        if(locate = 4 ){
            GetHandBlack = ButtonB4
        }
        if(locate = 5 ){
            GetHandBlack = ButtonB5
        }
        if(locate = 6 ){
            GetHandBlack = ButtonB6
        }
        if(locate = 7 ){
            GetHandBlack = ButtonB7
        }
        if(locate = 8 ){
            GetHandBlack = ButtonB8
        }
    End Function
    Private Sub ButtonA1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA1.Click
        TakeHand(1)
    End Sub
    Private Sub ButtonA2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA2.Click
        TakeHand(2)
    End Sub
    Private Sub ButtonA3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA3.Click
        TakeHand(3)
    End Sub
    Private Sub ButtonA4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA4.Click
        TakeHand(4)
    End Sub
    Private Sub ButtonA5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA5.Click
        TakeHand(5)
    End Sub
    Private Sub ButtonA6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA6.Click
        TakeHand(6)
    End Sub
    Private Sub ButtonA7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA7.Click
        TakeHand(7)
    End Sub
    Private Sub ButtonA8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonA8.Click
        TakeHand(8)
    End Sub
    Private Sub ButtonB1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB1.Click
        TakeHand(15)
    End Sub
    Private Sub ButtonB2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB2.Click
        TakeHand(16)
    End Sub
    Private Sub ButtonB3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB3.Click
        TakeHand(17)
    End Sub
    Private Sub ButtonB4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB4.Click
        TakeHand(18)
    End Sub
    Private Sub ButtonB5_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB5.Click
        TakeHand(19)
    End Sub
    Private Sub ButtonB6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB6.Click
        TakeHand(20)
    End Sub
    Private Sub ButtonB7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB7.Click
        TakeHand(21)
    End Sub
    Private Sub ButtonB8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonB8.Click
        TakeHand(22)
    End Sub
    Private Sub ButtonRobo_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles ButtonRobo.Click
        RobotMove(-1)
    End Sub

    Private Sub Button82_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button82.Click
        UnmakeMove(modosi)
        DispAll()
    End Sub
End Class

*/