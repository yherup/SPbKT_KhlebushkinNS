#pragma once
/* Envirmnt.h � ����� ������������ ��������� UNICODE � _��. */
 
/* ����� � ����� ���������� ��������� UNICODE � �������. */
 
/* ����������� ������� ����: Project�Settings�C/C++. �����, ������� */
 
/* � ���� Project Options, �������� � ������ �����: /D "UNICODE". */
 
/* ���������� �� �� ����� ��� �������� _�� � _STATIC_LIB. */
 
 
//#define UNICODE 
 
#undef UNICODE 
 
#ifdef UNICODE 
 
#define _UNICODE 
 
#endif
 
#ifndef UNICODE 
 
#undef _UNICODE 
 
#endif
 
//#define _STATICLIB
 
/* ���������� _STATICLIB, ���� �������� */
 
/* ��� ���������� ����������� ����������. */ 
 
#define LANG_DFLT LANG_ENGLISH 
 
#define SUBLANG_DFLT SUBLANG_ENGLISH_US
