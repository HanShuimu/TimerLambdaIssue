#pragma once
#include "CoreMinimal.h"
#include "MyActor.generated.h"

UCLASS()
class AMyActor: public AActor
{
	GENERATED_BODY()
public:
	AMyActor();

	virtual void BeginPlay() override;
	
	FTimerHandle TimerHandle;

	int32 IntValue;
};
