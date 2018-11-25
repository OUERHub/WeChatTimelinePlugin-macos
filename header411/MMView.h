//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MMViewController, NSColor;

@interface MMView : NSView
{
    BOOL _forceDraggable;
    BOOL _ignoreMouseEvents;
    BOOL _ignoreKeyEvents;
    BOOL _highlighted;
    int _vibrancyMode;
    NSColor *_backgroundColor;
    MMViewController *_viewController;
    CDUnknownBlockType _mouseUpInsideBlock;
    CDUnknownBlockType _doubleClickInsideBlock;
    CDUnknownBlockType _rightMouseUpInsideBlock;
    CDUnknownBlockType _mouseUpOutsideBlock;
    CDUnknownBlockType _mouseDownInsideBlock;
    CDUnknownBlockType _rightMouseDownInsideBlock;
    CDUnknownBlockType _doMouseDraggedInsideBlock;
    CDUnknownBlockType _magnifyEventBlock;
    CDUnknownBlockType _smartMagnifyEventBlock;
    CDUnknownBlockType _menuForEventBlock;
    CDUnknownBlockType _keyDownEventBlock;
    CDUnknownBlockType _keyUpEventBlock;
    CDUnknownBlockType _scrollWheelEventBlock;
    CDUnknownBlockType _swipeEventBlock;
}

@property(copy, nonatomic) CDUnknownBlockType swipeEventBlock; // @synthesize swipeEventBlock=_swipeEventBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollWheelEventBlock; // @synthesize scrollWheelEventBlock=_scrollWheelEventBlock;
@property(copy, nonatomic) CDUnknownBlockType keyUpEventBlock; // @synthesize keyUpEventBlock=_keyUpEventBlock;
@property(copy, nonatomic) CDUnknownBlockType keyDownEventBlock; // @synthesize keyDownEventBlock=_keyDownEventBlock;
@property(copy, nonatomic) CDUnknownBlockType menuForEventBlock; // @synthesize menuForEventBlock=_menuForEventBlock;
@property(copy, nonatomic) CDUnknownBlockType smartMagnifyEventBlock; // @synthesize smartMagnifyEventBlock=_smartMagnifyEventBlock;
@property(copy, nonatomic) CDUnknownBlockType magnifyEventBlock; // @synthesize magnifyEventBlock=_magnifyEventBlock;
@property(copy, nonatomic) CDUnknownBlockType doMouseDraggedInsideBlock; // @synthesize doMouseDraggedInsideBlock=_doMouseDraggedInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType rightMouseDownInsideBlock; // @synthesize rightMouseDownInsideBlock=_rightMouseDownInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseDownInsideBlock; // @synthesize mouseDownInsideBlock=_mouseDownInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseUpOutsideBlock; // @synthesize mouseUpOutsideBlock=_mouseUpOutsideBlock;
@property(copy, nonatomic) CDUnknownBlockType rightMouseUpInsideBlock; // @synthesize rightMouseUpInsideBlock=_rightMouseUpInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType doubleClickInsideBlock; // @synthesize doubleClickInsideBlock=_doubleClickInsideBlock;
@property(copy, nonatomic) CDUnknownBlockType mouseUpInsideBlock; // @synthesize mouseUpInsideBlock=_mouseUpInsideBlock;
@property(nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) BOOL ignoreKeyEvents; // @synthesize ignoreKeyEvents=_ignoreKeyEvents;
@property(nonatomic) BOOL ignoreMouseEvents; // @synthesize ignoreMouseEvents=_ignoreMouseEvents;
@property(nonatomic) int vibrancyMode; // @synthesize vibrancyMode=_vibrancyMode;
@property(nonatomic) BOOL forceDraggable; // @synthesize forceDraggable=_forceDraggable;
@property(nonatomic) __weak MMViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)acceptsFirstResponder;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (BOOL)_isMouseDown;
- (void)scrollWheel:(id)arg1;
- (void)swipeWithEvent:(id)arg1;
- (void)smartMagnifyWithEvent:(id)arg1;
- (void)magnifyWithEvent:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseUp:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (BOOL)allowsVibrancy;
- (BOOL)mouseDownCanMoveWindow;

@end

