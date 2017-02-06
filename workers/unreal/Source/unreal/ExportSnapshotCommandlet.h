// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Commandlets/Commandlet.h"
#include <improbable/worker.h>
#include "ExportSnapshotCommandlet.generated.h"

/**
 *
 */

UCLASS()
class UNREAL_API UExportSnapshotCommandlet : public UCommandlet
{
  GENERATED_BODY()
public:
  UExportSnapshotCommandlet();
  ~UExportSnapshotCommandlet();

  virtual int32 Main(const FString& Params) override;

private:
  worker::SnapshotEntity CreateNPCSnapshotEntity() const;
};
