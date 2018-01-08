// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BPEditConditionTestGameModeBase.generated.h"



USTRUCT(BlueprintType)
struct  FTestStruct
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizonPlugin|Test", meta = (EditCondition = "bTestString"))
		FString TestString;
	UPROPERTY()
		bool bTestString = false;

};
/**
 * 
 */
UCLASS()
class BPEDITCONDITIONTEST_API ABPEditConditionTestGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
	
	
	
};
