#include "Sample.h"
void Function();
#include <iostream>
int main()
{
	std::cout << "�v���O�����J�n\n";
	Function();
	std::cout << "�v���O�����I��\n";
}
void Function()
{
	std::cout << "�֐����Ăяo����܂���\n";
	//�C���X�^���X�쐬
	Sample instSample;
	//�����o�֐����s
	instSample.menberFunc();
}

//�\�z
// �֐����Ăяo����܂���
// �R���X�g���N�^���Ăяo����܂���
// �N���X�̃����o�֐����Ăяo����܂���
// 
// �v���O�����J�n
// �֐����Ăяo����܂���
// �R���X�g���N�^���Ăяo����܂���
// �N���X�̃����o�֐����Ăяo����܂���
// �v���O�����I��
// �f�X�g���N�^���Ăяo����܂���
//
// 
// ����
// �v���O�����J�n
//�֐����Ăяo����܂���
//�R���X�g���N�^���Ăяo����܂���
//�N���X�̃����o�֐����Ăяo����܂���
//�f�X�g���N�^���Ăяo����܂���
//�v���O�����I��
//