// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameModeBase.h"
#include "MyPlayerController.h"
#include "MyPawn.h"


// CDO(Ŭ���� ����Ʈ ������Ʈ) �ʱ�ȭ 
AMyGameModeBase::AMyGameModeBase()
{
	// Ŭ���� �̸� ���
	PlayerControllerClass = AMyPlayerController::StaticClass();
	DefaultPawnClass = AMyPawn::StaticClass();


}
