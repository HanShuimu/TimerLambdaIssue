// Fill out your copyright notice in the Description page of Project Settings.


#include "MyProjectGameInstance.h"

#include "MyActor.h"

void UMyProjectGameInstance::DoSomething(AActor* Actor)
{
	AMyActor* MyActor = CastChecked<AMyActor>(Actor);
	GetWorld()->GetTimerManager().ClearTimer(MyActor->TimerHandle);
}
