// Copyright Epic Games, Inc. All Rights Reserved.

#include "AdapterAuxiliaturaGameMode.h"
#include "AdapterAuxiliaturaPawn.h"

#include "Ball.h"
#include "Adaptador.h"
#include "Kismet/GameplayStatics.h"

AAdapterAuxiliaturaGameMode::AAdapterAuxiliaturaGameMode()
{
	// set default pawn class to our character class
	DefaultPawnClass = AAdapterAuxiliaturaPawn::StaticClass();
	PrimaryActorTick.bCanEverTick = true;
}

void AAdapterAuxiliaturaGameMode::BeginPlay()
{
	Super::BeginPlay();

	Jugador = Cast<AAdapterAuxiliaturaPawn>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	Adaptador = GetWorld()->SpawnActor<AAdaptador>(AAdaptador::StaticClass(), FVector(0, 0, 0), FRotator::ZeroRotator);
	Jugador->SetBounceBall(Adaptador);
	Jugador->Lanzar();

}

void AAdapterAuxiliaturaGameMode::Tick(float DeltaTime)
{
}

