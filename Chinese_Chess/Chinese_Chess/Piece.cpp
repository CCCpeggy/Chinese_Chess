#include "Piece.h"

string Piece::gridLabel[] = {
	 "���@���@���@���@���@���@���@���@���@",
	 "�E�@�K�@�C�@���@���@�|�@�T�@�G�@�@�@"
};

string Piece::gridLine[] = {
	 "�D�סססססססססססססססD�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U�@�U���U�@�U�@�U�@���@�U�@�@�@�@�@�@�@�@�@�@�@�@�@�U"
	,"���X�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U���U�@�U�@�U�@�U�@���@�U�@�@�@�@�@�@�@�@�@�@�@�@�@�U"
	,"���X�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U�@�U�@�U�@�U�@�U�@���@�U�@Esc�@���@�@A�@�s���i�סU"
	,"���X�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U�@�U�@�U�@�U�@�U�@���@�U�@R�@�H���U�ѡ@S�@�s�ɴ��СU"
	,"���X�X�X�X�X�X�X�X�X�X�X�X�X�X�X���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�@�@���e�@�@�@�@�@�~�ɡ@�@�@���@�U�@<�@���ѡ@�@�@>�@�٭�@�@�U"
	,"���X�X�X�X�X�X�X�X�X�X�X�X�X�X�X���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U�@�U�@�U�@�U�@�U�@���@�U�@Enter�@����Ѥl�@�@�@�@ �U"
	,"���X�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U�@�U�@�U�@�U�@�U�@���@�U�@�@���@�@�@�@�@�@�@�@�@�@�U"
	,"���X�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U�@�U���U�@�U�@�U�@���@�U�@�@���@�@�@�@�@�@�@�@�@�@�U"
	,"���X�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX�ϡX���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
	,"���@�U�@�U�@�U���U�@�U�@�U�@�U�@���@�U�@�@�@�@�@�@�@�@�@�@�@�@�@�U"
	,"�D�סססססססססססססססD�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�@"
};
string Piece::menu[] = {
	 "���� �� �� �� �� ���� "
	,"��  �~��C�� �� "
	,"���� �� �� �� �� ���� "
	,"��  ���s�}�l �� "
	,"���� �� �� �� �� ���� "
	,"��  �}������ �� "
	,"���� �� �� �� �� ���� "
	,"��  ���}�C�� �� "
	,"���� �� �� �� �� ���� "
};

string Piece::dialog[] = {
	 "�� ���@���@���@���@���@���@���@���@���@�� �� "
	,"���@�@�@�@�@�@�@�@�@�@�@�@�@�@�@�� "
	,"���@�@�@�@�@�O�@�@�@�@�_�@�@�@�@�� "
	,"�� ���@���@���@���@���@���@���@���@���@�� �� "
};


Piece::Piece(string s, bool p): symbol(s), player(p){
}


void Piece::pos(string s, bool p) {
	symbol = s;
	player = p;
}
