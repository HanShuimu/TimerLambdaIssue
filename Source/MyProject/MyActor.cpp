#include "MyActor.h"

#include "MyProjectGameInstance.h"


AMyActor::AMyActor()
	:	IntValue(0)
{
}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	GetWorld()->GetTimerManager().SetTimer(TimerHandle, FTimerDelegate::CreateLambda([this]()
	{
		CastChecked<UMyProjectGameInstance>(GetGameInstance())->DoSomething(this);
		IntValue = 2;
		UE_LOG(LogTemp, Log, TEXT("IntValue Changed! %d"), IntValue)
	}), 5.0, false);
}

