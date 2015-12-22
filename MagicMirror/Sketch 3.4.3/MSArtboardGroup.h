//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_MSArtboardGroup.h"

#import "MSLayerWithBackgroundColour.h"
#import "MSRootLayer.h"

@class MSLayoutGrid, MSRulerData, MSSimpleGrid, NSString;

@protocol MSArtboardGroup <MSLayer, MSRootLayer, MSLayerWithBackgroundColour>

+ (unsigned long long)traits;

- (id)badgeMap;
- (struct CGRect)calculateInfluenceRectForBounds;
- (BOOL)canBeContainedByGroup;
- (BOOL)canBeHidden;
- (BOOL)canBePartOfSymbol;
- (BOOL)canBeTransformed;
- (BOOL)canCopyToLayer:(id)arg1 beforeLayer:(id)arg2;
- (BOOL)canRotate;
@property(readonly, nonatomic) struct CGRect contentBounds;
- (id)defaultArtboardStyle;
- (id)defaultName;
- (id)displayName;
- (unsigned long long)displayType;
- (BOOL)enableAutomaticScaling;
- (BOOL)hasClickThrough;
- (BOOL)hasGuides;
- (BOOL)hitTest:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)hitTestInNameLabel:(struct CGPoint)arg1 zoomValue:(double)arg2;
- (BOOL)includeInLayersBelowPoint;
- (struct CGRect)influenceRectForBounds;
- (void)initEmptyObject;
- (id)inspectorViewControllerNames;
- (void)invalidateLightweightCopy:(id)arg1;
- (BOOL)isLocked;
- (BOOL)isOpen;
- (void)layerDidResizeFromRect:(struct CGRect)arg1 corner:(long long)arg2;
- (id)layersBelowPoint:(struct CGPoint)arg1 forceClickThrough:(BOOL)arg2 keepLockedLayers:(BOOL)arg3 zoomValue:(double)arg4;
- (void)markLayerDirtyOfType:(unsigned long long)arg1 margins:(struct CGSize)arg2;
- (void)migratePropertiesFromV57OrEarlierWithCoder:(id)arg1;
- (void)moveToEmptyLocation;
- (id)otherArtboardUnderArtboard;
- (id)parentArtboard;
- (id)parentForInsertingLayers;
- (id)parentRoot;
- (id)parentRootForAbsoluteRect;
- (id)parentPage;
- (id)previewImages;
- (void)removeFromParent;
- (Class)rendererClass;
- (BOOL)resizeRoot:(BOOL)arg1;
- (id)rootForNameUniqueing;
- (double)rotation;
@property(nonatomic) struct CGPoint rulerBase;
- (void)setIsLocked:(BOOL)arg1;
- (void)setName:(id)arg1;
- (void)setRect:(struct CGRect)arg1;
- (BOOL)shouldClickThroughMouse:(struct CGPoint)arg1 force:(BOOL)arg2 zoomValue:(double)arg3;
- (id)slice;
- (id)webExporterRepresentationOnPage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) MSSimpleGrid *grid;
@property(nonatomic) BOOL hasBackgroundColor;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) MSRulerData *horizontalRulerData;
@property(copy, nonatomic) MSLayoutGrid *layout;
@property(readonly) Class superclass;
@property(copy, nonatomic) MSRulerData *verticalRulerData;

@end

