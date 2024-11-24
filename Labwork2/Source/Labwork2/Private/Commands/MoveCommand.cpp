// Fill out your copyright notice in the Description page of Project Settings.
// MoveCommand.cpp

#include "MoveCommand.h"

#include "GameGrid.h"

MoveCommand::MoveCommand(FSGridPosition Src, FSGridPosition Dst) :
	Source(Src),
	Destination(Dst)
{
}

MoveCommand::~MoveCommand()
{
}

void MoveCommand::Execute() {

	UE_LOG(LogTemp, Warning, TEXT("Executing MoveCommand...")); 
	AGameSlot* SlotA = AGameGrid::FindSlot(Source);
	AGameSlot* SlotB = AGameGrid::FindSlot(Destination);

	AUnitBase* UnitA = SlotA->Unit;
	check(UnitA);
	UnitA->AssignToSlot(SlotB);
	SlotB->SetState(GS_Highlighted);
}

void MoveCommand::Revert() {
	UE_LOG(LogTemp, Warning, TEXT("Reverting MoveCommand..."));

	// Slot'lar� buluyoruz (Hedefi kaynak olarak, kayna�� hedef olarak al�yoruz)
	AGameSlot* SlotA = AGameGrid::FindSlot(Destination); // Hedef slotu, eski (kaynak) olarak kullan
	AGameSlot* SlotB = AGameGrid::FindSlot(Source); // Kaynak slotu, eski (hedef) olarak kullan

	AUnitBase* UnitA = SlotA->Unit;
	check(UnitA); // UnitA'nin null olmad���na emin oluyoruz
	UnitA->AssignToSlot(SlotB); // Birimi eski konumuna (SlotB) ta��yoruz
	SlotB->SetState(GS_Highlighted); // Eski konumu tekrar vurguluyoruz
}
