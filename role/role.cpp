���]�A < iostream��>

�ϥ� �W�٪Ŷ� std ;

���c ����{
    �r��* name; //�m�W
    INT����;  //����
    INT���O; //��q
    int ap; //�����O
    int dp; //���m�O
    int sp; //�믫��q 
};

void  dump_role�]����M����^{
    cout << ���W�١G    �� <<�@�ΡC�W�r<< endl;
    cout << �����šG    �� <<����C�ŧO<< endl;
    cout << ����q�G    �� <<����Chp << endl;
    cout << �������O�G�� <<����Cap << endl;
    cout << �����m�O�G�� <<����Cdp << endl;
	cout << ���믫��q :  ��<<����Csp << endl;
}

�L�� test_role�]�^{
    char name [] = �����H�ҡ� ;

    struct  Role����F

    ����C�W��=�W��
    ����C����= 1 ;
    ����C���O= 10 ;
    ����Cap = 1 ;
    ����Cdp = 1 ;
    ����Csp = 50 ; 

    dump_role�]����^;
}

int  main�]int argc�Achar * argv []�^{
    test_role�]�^;
}
