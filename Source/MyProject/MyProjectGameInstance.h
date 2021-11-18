// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "UObject/Object.h"
#include "MyProjectGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyProjectGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	void DoSomething(AActor* Actor);
};
