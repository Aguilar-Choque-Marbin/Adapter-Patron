// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "AdapterAuxiliaturaGameMode.generated.h"

UCLASS(MinimalAPI)
class AAdapterAuxiliaturaGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AAdapterAuxiliaturaGameMode();
protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AAdapterAuxiliaturaPawn* Jugador;
	UPROPERTY(VisibleAnywhere, Category = "Game mode")
	class AAdaptador* Adaptador;
};



