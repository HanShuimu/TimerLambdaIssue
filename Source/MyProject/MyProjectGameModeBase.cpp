// Copyright Epic Games, Inc. All Rights Reserved.


#include "MyProjectGameModeBase.h"

#include "MyActor.h"

void AMyProjectGameModeBase::BeginPlay()
{
	Super::BeginPlay();
	AMyActor* Actor = GetWorld()->SpawnActor<AMyActor>();
}
