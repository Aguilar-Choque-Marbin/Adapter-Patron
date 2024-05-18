// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IBounceBall.h"
#include "Adaptador.generated.h"

UCLASS()
class ADAPTERAUXILIATURA_API AAdaptador : public AActor , public IIBounceBall
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AAdaptador();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(VisibleAnywhere, Category = "Ball Adapter");
	class ABall* ball;
public: 
	void Lanzar() override;
};
