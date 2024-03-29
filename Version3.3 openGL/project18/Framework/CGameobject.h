#pragma once
#include "stdafx.h"

class CGameobject
{
public:
	CGameobject();
	virtual ~CGameobject();
	
public:
	virtual void InitBuffer() {}
	virtual void Update() {}
	virtual void CreatObject() {}
	virtual void Render();

};

class CCube :public CGameobject
{
public:
	GLuint VAO;
	GLuint VBO, EBO;
	CCube(); 
	virtual ~CCube();

public:
	virtual void InitBuffer() override; 
	virtual void Update() override;
	virtual void CreatObject() override;
	virtual void Render() override; 
	void ChangeColor(float C1, float C2, float C3);
};


class CStage :public CGameobject
{
public:
	GLuint VAO1, VAO2, VAO3;
	//GLuint VBO, EBO;
	CStage() {}
	virtual ~CStage() {}
public:
	void InitBuffer1();
	void InitBuffer2();
	void InitBuffer3();

	virtual void CreatObject() override;
	virtual void Render() override; 
	void SetColor(float Color);
};


class CFrontView
{
public:
	GLuint VAO;
	GLuint VBO, EBO;
	CFrontView();
	virtual ~CFrontView();
	
	void InitBuffer();
	void Render(); 
};