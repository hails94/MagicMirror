//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MSPointsEventHandler.h"

@class MSStyleBasicFill, NSCursor;

@interface MSGradientEventHandler : MSPointsEventHandler
{
    NSCursor *selectPointCursor;
    NSCursor *insertPointCursor;
    MSStyleBasicFill *_stylePart;
    id <MSGradientEventHandlerDelegate> _gradientDelegate;
}

+ (id)gradientHandlerForStylePart:(id)arg1 manager:(id)arg2;

- (BOOL)absoluteMouseDown:(struct CGPoint)arg1 clickCount:(unsigned long long)arg2 flags:(unsigned long long)arg3;
- (BOOL)absoluteMouseDragged:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseMoved:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (BOOL)absoluteMouseUp:(struct CGPoint)arg1 flags:(unsigned long long)arg2;
- (long long)addStopAtPosition:(struct CGPoint)arg1;
- (BOOL)canDuplicate;
- (BOOL)canInsertPointAtMouse:(struct CGPoint)arg1;
- (void)centerStopBetween;
- (void)colorMagnifierAction:(id)arg1;
- (void)concatTransformsForDrawSnaps;
- (struct CGPoint)convertPointToAbsoluteCoordinates:(struct CGPoint)arg1;
- (id)cursorWithDrawingBlock:(CDUnknownBlockType)arg1;
- (void)delete:(id)arg1;
- (void)didUndoNotification:(id)arg1;
- (void)drawDotAtPoint:(struct CGPoint)arg1 index:(long long)arg2 selected:(BOOL)arg3;
- (void)drawHandleLines;
- (id)gradient;
@property(nonatomic) __weak id <MSGradientEventHandlerDelegate> gradientDelegate; // @synthesize gradientDelegate=_gradientDelegate;
- (id)handleLinesColor;
- (void)handlerGotFocus;
- (void)handlerWillLoseFocus;
- (BOOL)hasSelectedPoint;
- (void)insertBacktab:(id)arg1;
- (id)insertPointCursor;
- (void)insertTab:(id)arg1;
- (void)keyDown:(unsigned short)arg1 flags:(unsigned long long)arg2;
- (id)layerFromSelectedLayers;
- (id)nextStop;
- (struct CGRect)paddingRectAroundPoints;
- (id)points;
- (id)previousStop;
- (void)refresh;
- (void)repairGradientIfNecessary;
- (void)replacePointAtIndex:(long long)arg1 withPoint:(struct CGPoint)arg2;
- (void)returnToDefaultHandlerByClickingOutside;
- (id)selectPointCursor;
- (id)selectedStop;
- (void)selectionDidChangeTo:(id)arg1;
- (void)setSelectedPoint:(long long)arg1;
- (void)setSelectedStopToPercentage:(long long)arg1;
@property(retain, nonatomic) MSStyleBasicFill *stylePart; // @synthesize stylePart=_stylePart;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (BOOL)shouldDisplayMessageForSelectedStop;
- (BOOL)useSnaps;

@end
