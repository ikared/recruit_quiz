#pragma once
#include "question.h"

//漢字の読み取り問題を作成する
QuestionList CreateKanjiExam();

//慣用句の意味を答える問題を作成する
QuestionList CreateIdiomExam();

//同じ読みで意味の異なる語の問題を作成する
QuestionList CreateHomophoneExam();

//対義語の問題を作成する
QuestionList CreateAntonyExam();

//類義語の問題を作成する
QuestionList CreateSynonymExam();