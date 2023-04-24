// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"


// CDO(클래스 디폴트 오브젝트) 초기화 
AMyGameModeBase::AMyGameModeBase()
{
	// 클래스 이름 기록
	PlayerControllerClass = AMyPlayerController::StaticClass();
	DefaultPawnClass = AMyPawn::StaticClass();


}
