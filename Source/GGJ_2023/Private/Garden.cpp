// Fill out your copyright notice in the Description page of Project Settings.

#include "Garden.h"

// Sets default values
AGarden::AGarden()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AGarden::BeginPlay()
{
	Super::BeginPlay();

	this->height = 3;
	this->width = 3;
	this->start = 0;

	for (int i(0); i < this->height; i++) {
		TArray<ARoom*> line_of_rooms;
		for (int j(0); j < this->width; j++) {
			ARoom* room = GetWorld()->SpawnActor<ARoom>(ARoom::StaticClass());
			line_of_rooms.Add(room);
		}
		this->rooms.Add(line_of_rooms);
	}

	this->rooms[start][0]->is_start = true;
	this->generate(start, 0);

}



void AGarden::generate(int y, int x) {
	ARoom* room = this->rooms[y][x];

	// GO UP
	if (y != 0 && FMath::RandRange(0, 1)) {

	}

	// GO DOWN
	if (y != 0 && FMath::RandRange(0, 1)) {

	}


	return;
}

// Called every frame
void AGarden::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GEngine)
		GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Yellow, TEXT("Some debug message!"));
}

