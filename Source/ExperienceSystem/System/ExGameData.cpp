// Fill out your copyright notice in the Description page of Project Settings.


#include "ExGameData.h"
#include "ExAssetManager.h"

UExGameData::UExGameData()
{
}

const UExGameData &UExGameData::Get()
{
    // TODO: insert return statement here

    return UExAssetManager::Get().GetGameData();
}
