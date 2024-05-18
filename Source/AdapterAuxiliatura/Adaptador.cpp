// Fill out your copyright notice in the Description page of Project Settings.


#include "Adaptador.h"
#include "Ball.h"

// Sets default values
AAdaptador::AAdaptador()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AAdaptador::BeginPlay()
{
	Super::BeginPlay();
	ball = GetWorld()->SpawnActor<ABall>(ABall::StaticClass(), FVector(-770, 10, 180), FRotator::ZeroRotator);
	
}

// Called every frame
void AAdaptador::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AAdaptador::Lanzar()
{
	if (!ball)
	{
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, FString::Printf(TEXT("No se pudo Spawnear a la clase extranjera")));
		return;
	}
	ball->Launch();
}

