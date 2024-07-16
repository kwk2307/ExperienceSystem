// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/DataAsset.h"
#include "ExGameData.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "Game Data", ShortTooltip = "Data asset containing global game data."))
class EXPERIENCESYSTEM_API UExGameData : public UPrimaryDataAsset
{
	GENERATED_BODY()
	
public:

	UExGameData();

	// Returns the loaded game data.
	static const UExGameData& Get();



};
