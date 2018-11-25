//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JNWScrollView.h"

@class JNWCollectionViewData, JNWCollectionViewLayout, NSColor, NSMutableArray, NSMutableDictionary, NSView;

@interface JNWCollectionView : JNWScrollView
{
    struct {
        unsigned int dataSourceNumberOfSections:1;
        unsigned int dataSourceViewForSupplementaryView:1;
        unsigned int delegateMouseDown:1;
        unsigned int delegateMouseDownWithEvent:1;
        unsigned int delegateMouseUp:1;
        unsigned int delegateMouseUpWithEvent:1;
        unsigned int delegateMouseMoved:1;
        unsigned int delegateMouseDragged:1;
        unsigned int delegateMouseEntered:1;
        unsigned int delegateMouseExited:1;
        unsigned int delegateShouldSelect:1;
        unsigned int delegateDidSelect:1;
        unsigned int delegateShouldDeselect:1;
        unsigned int delegateDidDeselect:1;
        unsigned int delegateShouldScroll:1;
        unsigned int delegateDidScroll:1;
        unsigned int delegateDidDoubleClick:1;
        unsigned int delegateDidRightClick:1;
        unsigned int delegateDidEndDisplayingCell:1;
        unsigned int delegateMenuForEvent:1;
        unsigned int wantsLayout;
    } _collectionViewFlags;
    struct CGSize _lastDrawnSize;
    BOOL _animatesSelection;
    BOOL _allowsSelection;
    BOOL _allowsEmptySelection;
    id <JNWCollectionViewDelegate> _delegate;
    id <JNWCollectionViewDataSource> _dataSource;
    JNWCollectionViewLayout *_collectionViewLayout;
    NSMutableArray *_selectedIndexes;
    JNWCollectionViewData *_data;
    NSMutableDictionary *_reusableCells;
    NSMutableDictionary *_visibleCellsMap;
    NSMutableDictionary *_cellClassMap;
    NSMutableDictionary *_cellNibMap;
    NSMutableDictionary *_reusableSupplementaryViews;
    NSMutableDictionary *_visibleSupplementaryViewsMap;
    NSMutableDictionary *_supplementaryViewClassMap;
    NSMutableDictionary *_supplementaryViewNibMap;
    NSView *_collectionViewDocumentView;
}

@property(retain, nonatomic) NSView *collectionViewDocumentView; // @synthesize collectionViewDocumentView=_collectionViewDocumentView;
@property(retain, nonatomic) NSMutableDictionary *supplementaryViewNibMap; // @synthesize supplementaryViewNibMap=_supplementaryViewNibMap;
@property(retain, nonatomic) NSMutableDictionary *supplementaryViewClassMap; // @synthesize supplementaryViewClassMap=_supplementaryViewClassMap;
@property(retain, nonatomic) NSMutableDictionary *visibleSupplementaryViewsMap; // @synthesize visibleSupplementaryViewsMap=_visibleSupplementaryViewsMap;
@property(retain, nonatomic) NSMutableDictionary *reusableSupplementaryViews; // @synthesize reusableSupplementaryViews=_reusableSupplementaryViews;
@property(retain, nonatomic) NSMutableDictionary *cellNibMap; // @synthesize cellNibMap=_cellNibMap;
@property(retain, nonatomic) NSMutableDictionary *cellClassMap; // @synthesize cellClassMap=_cellClassMap;
@property(retain, nonatomic) NSMutableDictionary *visibleCellsMap; // @synthesize visibleCellsMap=_visibleCellsMap;
@property(retain, nonatomic) NSMutableDictionary *reusableCells; // @synthesize reusableCells=_reusableCells;
@property(retain, nonatomic) JNWCollectionViewData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableArray *selectedIndexes; // @synthesize selectedIndexes=_selectedIndexes;
@property(nonatomic) BOOL allowsEmptySelection; // @synthesize allowsEmptySelection=_allowsEmptySelection;
@property(nonatomic) BOOL allowsSelection; // @synthesize allowsSelection=_allowsSelection;
@property(nonatomic) BOOL animatesSelection; // @synthesize animatesSelection=_animatesSelection;
@property(retain, nonatomic) JNWCollectionViewLayout *collectionViewLayout; // @synthesize collectionViewLayout=_collectionViewLayout;
@property(nonatomic) __weak id <JNWCollectionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <JNWCollectionViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)scrollToEndOfDocument:(id)arg1;
- (void)scrollToBeginningOfDocument:(id)arg1;
- (id)description;
- (id)menuForEvent:(id)arg1;
- (void)selectAllItems;
- (void)deselectAllItems;
- (void)selectAll:(id)arg1;
- (void)moveToEndOfDocument:(id)arg1;
- (void)moveToBeginningOfDocument:(id)arg1;
- (void)moveLeftAndModifySelection:(id)arg1;
- (void)moveLeft:(id)arg1;
- (void)moveRightAndModifySelection:(id)arg1;
- (void)moveRight:(id)arg1;
- (void)moveDownAndModifySelection:(id)arg1;
- (void)moveDown:(id)arg1;
- (void)moveUpAndModifySelection:(id)arg1;
- (void)moveUp:(id)arg1;
- (void)rightClickInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)doubleClickInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)mouseDraggedInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)mouseExitedInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)mouseEnteredInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)mouseMovedInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)mouseUpInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)mouseDownInCollectionViewCell:(id)arg1 withEvent:(id)arg2;
- (void)selectItemAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3 selectionType:(long long)arg4;
- (id)indexPathForNextSelectableItemBeforeIndexPath:(id)arg1;
- (id)indexPathForNextSelectableItemAfterIndexPath:(id)arg1;
- (void)selectItemAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3;
- (void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)deselectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2;
- (void)selectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (void)deselectItemsAtIndexPaths:(id)arg1 animated:(BOOL)arg2;
- (id)indexPathsForSelectedItems;
- (id)indexPathForSelectedItem;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)acceptsFirstResponder;
- (BOOL)canBecomeKeyView;
- (void)applyLayoutAttributes:(id)arg1 toSupplementaryView:(id)arg2;
- (void)layoutSupplementaryViewsWithRedraw:(BOOL)arg1;
- (void)layoutSupplementaryViews;
- (long long)sectionForSupplementaryLayoutIdentifier:(id)arg1;
- (id)supplementaryViewIdentifierForLayoutIdentifier:(id)arg1;
- (id)layoutIdentifierForSupplementaryViewIdentifier:(id)arg1 inSection:(long long)arg2;
- (id)reuseIdentifierForSupplementaryViewIdentifier:(id)arg1;
- (id)kindForSupplementaryViewIdentifier:(id)arg1;
- (id)supplementaryViewIdentifierWithKind:(id)arg1 reuseIdentifier:(id)arg2;
- (id)allSupplementaryViewIdentifiers;
- (void)applyLayoutAttributes:(id)arg1 toCell:(id)arg2;
- (void)layoutCellsWithRedraw:(BOOL)arg1;
- (void)layoutCells;
@property(readonly, nonatomic) struct CGSize visibleSize;
- (void)updateScrollDirection;
- (void)layoutDocumentView;
- (void)performFullRelayoutForcingSubviewsReset:(BOOL)arg1;
- (void)collectionViewLayoutWasInvalidated:(id)arg1;
- (void)reflectScrolledClipView:(id)arg1;
- (void)layout;
- (id)indexPathForCell:(id)arg1;
- (id)supplementaryViewForKind:(id)arg1 reuseIdentifier:(id)arg2 inSection:(long long)arg3;
- (id)cellForItemAtIndexPath:(id)arg1;
- (struct CGRect)rectForSection:(long long)arg1;
- (struct CGRect)rectForSupplementaryViewWithKind:(id)arg1 inSection:(long long)arg2;
- (struct CGRect)rectForItemAtIndexPath:(id)arg1;
- (void)scrollToItemAtIndexPath:(id)arg1 atScrollPosition:(long long)arg2 animated:(BOOL)arg3;
- (id)indexPathsForVisibleItems;
- (id)indexesForSectionsInRect:(struct CGRect)arg1;
- (id)layoutIdentifiersForSupplementaryViewsInRect:(struct CGRect)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (id)lastIndexPath;
- (id)firstIndexPath;
- (id)allIndexPaths;
- (BOOL)validateIndexPath:(id)arg1;
- (id)visibleCells;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (void)resetAllCellsAndSupplementaryViews;
- (void)reloadData;
- (void)enqueueReusableSupplementaryView:(id)arg1 ofKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)enqueueReusableCell:(id)arg1 withIdentifier:(id)arg2;
- (id)dequeueReusableSupplementaryViewOfKind:(id)arg1 withReuseIdentifer:(id)arg2;
- (id)dequeueReusableCellWithIdentifier:(id)arg1;
- (id)firstTopLevelObjectOfClass:(Class)arg1 inNib:(id)arg2;
- (void)enqueueItem:(id)arg1 withIdentifier:(id)arg2 inReusePool:(id)arg3;
- (id)dequeueItemWithIdentifier:(id)arg1 inReusePool:(id)arg2;
- (void)registerNib:(id)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerNib:(id)arg1 forCellWithReuseIdentifier:(id)arg2;
- (void)registerClass:(Class)arg1 forSupplementaryViewOfKind:(id)arg2 withReuseIdentifier:(id)arg3;
- (void)registerClass:(Class)arg1 forCellWithReuseIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(copy) NSColor *backgroundColor; // @dynamic backgroundColor;
@property BOOL drawsBackground; // @dynamic drawsBackground;

@end

