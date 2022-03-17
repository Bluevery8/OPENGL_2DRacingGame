﻿
//날 짜 : 2022.03.15
//작성자 : 강대한
//주 제 : 콜백 관련 기본 소스

#include <glut.h> //운영체제 연결
#include <glu.h> //그림 그리기
#include <gl.h> //렌더링

void MyDisplay() {
	glClear(GL_COLOR_BUFFER_BIT); //버퍼 초기화
	glColor3f(0.8f, 0.5f, 1.0f); // 도형 색깔
	glBegin(GL_POLYGON); // 점들을 면으로
		glVertex3f(0.0, -0.45, 0.0); // 3: 인자 3개(3차원), f: 실수
		glVertex3f(0.55, -0.75, 0.0);
		glVertex3f(0.4, -0.25, 0.0);
		glVertex3f(0.75, 0.0, 0.0);
		glVertex3f(0.25, 0.2, 0.0);
		glVertex3f(0.0, 0.65, 0.0);
		glVertex3f(-0.25, 0.2, 0.0);
		glVertex3f(-0.75, 0.0, 0.0);
		glVertex3f(-0.4, -0.25, 0.0);
		glVertex3f(-0.55, -0.75, 0.0);
	glEnd();
	glFlush(); // 버퍼 내용 비우기(출력)


}
void MyReshape(int NewWidth, int NewHeight) { } // 균형 유지 위한 변형값을 인자로 받음 (자동)

void MyKeyboard(unsigned char KeyPressed, int X, int Y) {} // 입력값, 입력 위치 x, y

void MySpecial(int key, int X, int Y) {} // 입력값(특수문자), 입력 위치 x, y

void MyMouseClick(GLint Button, GLint State, GLint X, GLint Y) {} // 왼 or 오른쪽, 누름 or 해제 etc, 마우스 위치

void MyMouseMove(GLint X, GLint Y) {}

void MyIdle() {
}

void MyTimer(int Value) {} // 타이머 번호

void MenuProc(int entryID) {}

void MenuFunc() {}
// argc : 인자 수 argv : 인자
int main(int argc, char** argv) {
	glutInit(&argc, argv); //초기화 초기설정
	glutInitDisplayMode(GLUT_RGB); // 화면 설정
	glutInitWindowSize(500, 500); // 화면 크기
	glutInitWindowPosition(100, 200); // 초기 화면 위치(시작점 좌측 상단)
	glutCreateWindow("제목"); // 그래픽창 생성
	glClearColor(0.5, 0.5, 0.5, 1.0); // 색 초기화 r, g, b, 투명도 256:1 *바탕색 1,1,1=흰색 0, 0, 0 = 검정색

	glutDisplayFunc(MyDisplay); // 콜백함수, 함수를 인자로 받고 리턴값 받음, 함수 호출 후 대기 안 함(일반 함수는 끝날 때까지 대기)

	// begin 콜백함수 등록
	//glutReshapeFunc(MyReshape);
	
	//glutKeyboardFunc(MyKeyboard);
	//glutSpecialFunc(MySpecial);
	//glutMouseFunc(MyMouseClick);
	//glutMotionFunc(MyMouseMove);
	//glutIdleFunc(MyIdle); ex)idle: cpu 쉬는 시간에 작동되는 것 
	//glutTimerFunc(40, MyTimer, 1); 
	// end 콜백함수 등록

	//MenuFunc(); //메뉴 처리
	glutMainLoop(); // 모든 콜백함수가 끝날 때까지 기다림
	return 0;
}

//모델링: 그림 만들기 렌더링: 그림을 3차원으로