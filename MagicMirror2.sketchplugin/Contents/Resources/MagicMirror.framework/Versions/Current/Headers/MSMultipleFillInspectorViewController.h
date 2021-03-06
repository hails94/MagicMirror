//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSMultipleStylePartInspectorViewController.h"

#import "BCPopoverDelegate.h"

@class BCPopover, MSTextLabelForUpDownField, NSButton, NSString;

@interface MSMultipleFillInspectorViewController : MSMultipleStylePartInspectorViewController <BCPopoverDelegate>
{
    MSTextLabelForUpDownField *_opacityLabel;
    NSButton *_addStylePartButton;
    NSButton *_advancedOptionsButton;
    BCPopover *_popover;
}


@property(retain, nonatomic) NSButton *addStylePartButton; // @synthesize addStylePartButton=_addStylePartButton;
@property(retain, nonatomic) NSButton *advancedOptionsButton; // @synthesize advancedOptionsButton=_advancedOptionsButton;
- (id)inspectorForStyleParts:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)loadViewControllers;
@property(retain, nonatomic) MSTextLabelForUpDownField *opacityLabel; // @synthesize opacityLabel=_opacityLabel;
@property(retain, nonatomic) BCPopover *popover; // @synthesize popover=_popover;
- (void)popoverWillClose:(id)arg1;
- (void)prepare;
- (BOOL)shouldHideAddStylePartButton;
- (BOOL)shouldShowAdvancedOptionsButton;
- (void)showAdvancedOptionsAction:(id)arg1;
- (unsigned long long)stylePartType;
- (void)viewWillDisappear;
- (id)views;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

