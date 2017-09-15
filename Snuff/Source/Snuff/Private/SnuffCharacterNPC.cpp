// Fill out your copyright notice in the Description page of Project Settings.

#include "Snuff.h"
#include "SnuffCharacterNPC.h"


// Sets default values
ASnuffCharacterNPC::ASnuffCharacterNPC()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ASnuffCharacterNPC::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASnuffCharacterNPC::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASnuffCharacterNPC::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

