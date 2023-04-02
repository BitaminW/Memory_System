#pragma once


void* m_malloc();	// 메모리 공간을 할당해주는 함수
void* m_mem_sbrk();	// Heap 전체 사이즈를 늘리는 함수
void* m_coalesce();	// 빈 공간이 연속적으로 있다면 합친다.
void* m_find_fit();	// 허용된 Heap 영역 내에서, 요청된 Block Size를 만족하는 빈 공간이 있는지 찾는다.
void  m_free();		// 메모리 해제
