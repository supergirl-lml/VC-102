// ���� ifdef ���Ǵ���ʹ�� DLL �������򵥵�
// ��ı�׼�������� DLL �е������ļ��������������϶���� LIB3_EXPORTS
// ���ű���ġ���ʹ�ô� DLL ��
// �κ�������Ŀ�ϲ�Ӧ����˷��š�������Դ�ļ��а������ļ����κ�������Ŀ���Ὣ
// LIB3_API ������Ϊ�Ǵ� DLL ����ģ����� DLL ���ô˺궨���
// ������Ϊ�Ǳ������ġ�
#ifdef LIB3_EXPORTS
#define LIB3_API __declspec(dllexport)
#else
#define LIB3_API __declspec(dllimport)
#endif

// �����Ǵ� Lib3.dll ������
class LIB3_API CLib3 {
public:
	CLib3(void);
	// TODO:  �ڴ�������ķ�����
};


class LIB3_API FAC {
public:
	float convert(float deg);
};//���һ���Ƕ�ת��Ϊ���ȵ���

extern LIB3_API int nLib3;
LIB3_API int fnLib3(void);
 
//���һ������׳˵ĺ���
LIB3_API int factorial(int n);

