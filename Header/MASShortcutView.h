//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class MASShortcut, MASShortcutValidator, NSButtonCell, NSString, NSTrackingArea;

@interface MASShortcutView : NSView
{
    NSButtonCell *_shortcutCell;
    long long _shortcutToolTipTag;
    long long _hintToolTipTag;
    NSTrackingArea *_hintArea;
    BOOL _acceptsFirstResponder;
    BOOL _recording;
    BOOL _enabled;
    BOOL _hinting;
    BOOL _showsDeleteButton;
    int _style;
    MASShortcut *_shortcutValue;
    MASShortcutValidator *_shortcutValidator;
    CDUnknownBlockType _shortcutValueChange;
    NSString *_shortcutPlaceholder;
}

+ (Class)shortcutCellClass;
@property(nonatomic) BOOL showsDeleteButton; // @synthesize showsDeleteButton=_showsDeleteButton;
@property(copy, nonatomic) NSString *shortcutPlaceholder; // @synthesize shortcutPlaceholder=_shortcutPlaceholder;
@property(nonatomic, getter=isHinting) BOOL hinting; // @synthesize hinting=_hinting;
@property(nonatomic) int style; // @synthesize style=_style;
@property(copy, nonatomic) CDUnknownBlockType shortcutValueChange; // @synthesize shortcutValueChange=_shortcutValueChange;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property(nonatomic, getter=isRecording) BOOL recording; // @synthesize recording=_recording;
@property(retain, nonatomic) MASShortcutValidator *shortcutValidator; // @synthesize shortcutValidator=_shortcutValidator;
@property(retain, nonatomic) MASShortcut *shortcutValue; // @synthesize shortcutValue=_shortcutValue;
- (void).cxx_destruct;
- (struct CGRect)focusRingMaskBounds;
- (void)drawFocusRingMask;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)setAcceptsFirstResponder:(BOOL)arg1;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityRole;
- (BOOL)accessibilityPerformPress;
- (id)accessibilityLabel;
- (id)accessibilityHelp;
- (BOOL)accessibilityIsIgnored;
- (void)propagateValue:(id)arg1 forBinding:(id)arg2;
- (void)activateResignObserver:(BOOL)arg1;
- (void)activateEventMonitoring:(BOOL)arg1;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)resetToolTips;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)updateTrackingAreas;
- (void)mouseDown:(id)arg1;
- (BOOL)locationInHintRect:(struct CGPoint)arg1;
- (BOOL)locationInShortcutRect:(struct CGPoint)arg1;
- (void)getShortcutRect:(struct CGRect *)arg1 hintRect:(struct CGRect *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 withTitle:(id)arg2 alignment:(unsigned long long)arg3 state:(long long)arg4;
- (BOOL)isFlipped;
- (void)resetShortcutCellStyle;
- (void)dealloc;
- (void)commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy) NSString *associatedUserDefaultsKey;
- (void)setAssociatedUserDefaultsKey:(id)arg1 withTransformerName:(id)arg2;
- (void)setAssociatedUserDefaultsKey:(id)arg1 withTransformer:(id)arg2;

@end

