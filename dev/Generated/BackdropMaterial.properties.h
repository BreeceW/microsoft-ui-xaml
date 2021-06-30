// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

// DO NOT EDIT! This file was generated by CustomTasks.DependencyPropertyCodeGen
#pragma once

class BackdropMaterialProperties
{
public:
    BackdropMaterialProperties();

    static void SetApplyToRootOrPageBackground(winrt::Control const& target, bool value);
    static bool GetApplyToRootOrPageBackground(winrt::Control const& target);

    static winrt::DependencyProperty ApplyToRootOrPageBackgroundProperty() { return s_ApplyToRootOrPageBackgroundProperty; }

    static GlobalDependencyProperty s_ApplyToRootOrPageBackgroundProperty;

    static void EnsureProperties();
    static void ClearProperties();
};