＃包括 < iostream的>

使用 名稱空間 std ;

結構 角色{
    字符* name; //姓名
    INT水平;  //等級
    INT馬力; //血量
    int ap; //攻擊力
    int dp; //防禦力
    int sp; //精神能量 
};

void  dump_role（角色和角色）{
    cout << “名稱：    ” <<作用。名字<< endl;
    cout << “等級：    ” <<角色。級別<< endl;
    cout << “血量：    ” <<角色。hp << endl;
    cout << “攻擊力：” <<角色。ap << endl;
    cout << “防禦力：” <<角色。dp << endl;
	cout << “精神能量 :  ”<<角色。sp << endl;
}

無效 test_role（）{
    char name [] = “路人甲” ;

    struct  Role角色；

    角色。名稱=名稱
    角色。等級= 1 ;
    角色。馬力= 10 ;
    角色。ap = 1 ;
    角色。dp = 1 ;
    角色。sp = 50 ; 

    dump_role（角色）;
}

int  main（int argc，char * argv []）{
    test_role（）;
}
