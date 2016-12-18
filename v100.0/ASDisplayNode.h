/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDealloc2MainObject.h>
#import <Messenger/ASLayoutableAsciiArtProtocol.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Messenger/_ASDisplayLayerDelegate.h>
#import <Messenger/_ASTransitionContextCompletionDelegate.h>
#import <Messenger/ASLayoutable.h>

@class _ASPendingState, UIView, CALayer, ASSentinel, ASLayout, NSMutableArray, _ASTransitionContext, ASLayoutTransition, UIImage, NSMutableSet, NSString, NSArray, UIBezierPath, UIColor, _ASDisplayLayer;

@interface ASDisplayNode : ASDealloc2MainObject <ASLayoutableAsciiArtProtocol, UIGestureRecognizerDelegate, _ASDisplayLayerDelegate, _ASTransitionContextCompletionDelegate, ASLayoutable> {

	unsigned long long _interfaceState;
	unsigned long long _hierarchyState;
	_ASPendingState* _pendingViewState;
	RecursiveMutex _propertyLock;
	UIView* _view;
	CALayer* _layer;
	struct {
		unsigned synchronous : 1;
		unsigned layerBacked : 1;
		unsigned displaysAsynchronously : 1;
		unsigned shouldRasterizeDescendants : 1;
		unsigned shouldBypassEnsureDisplay : 1;
		unsigned displaySuspended : 1;
		unsigned shouldAnimateSizeChanges : 1;
		unsigned hasCustomDrawingPriority : 1;
		unsigned canClearContentsOfLayer : 1;
		unsigned canCallNeedsDisplayOfLayer : 1;
		unsigned implementsInstanceDrawRect : 1;
		unsigned implementsDrawRect : 1;
		unsigned implementsInstanceImageDisplay : 1;
		unsigned implementsImageDisplay : 1;
		unsigned implementsDrawParameters : 1;
		unsigned isEnteringHierarchy : 1;
		unsigned isExitingHierarchy : 1;
		unsigned isInHierarchy : 1;
		unsigned visibilityNotificationsDisabled : 4;
	}  _flags;
	ASDisplayNode* _supernode;
	ASSentinel* _displaySentinel;
	int _transitionID;
	BOOL _transitionInProgress;
	double _contentsScaleForDisplay;
	ASEnvironmentState _environmentState;
	ASLayout* _layout;
	UIEdgeInsets _hitTestSlop;
	NSMutableArray* _subnodes;
	_ASTransitionContext* _transitionContext;
	BOOL _usesImplicitHierarchyManagement;
	int _pendingTransitionID;
	ASLayoutTransition* _pendingLayoutTransition;
	/*^block*/id _viewBlock;
	/*^block*/id _layerBlock;
	/*^block*/id _nodeLoadedBlock;
	Class _viewClass;
	Class _layerClass;
	UIImage* _placeholderImage;
	CALayer* _placeholderLayer;
	NSMutableSet* _pendingDisplayNodes;
	/*^block*/id _willDisplayNodeContentWithRenderingContext;
	/*^block*/id _didDisplayNodeContentWithRenderingContext;
	BOOL _isAccessibilityElement;
	NSString* _accessibilityLabel;
	NSString* _accessibilityHint;
	NSString* _accessibilityValue;
	unsigned long long _accessibilityTraits;
	CGRect _accessibilityFrame;
	NSString* _accessibilityLanguage;
	BOOL _accessibilityElementsHidden;
	BOOL _accessibilityViewIsModal;
	BOOL _shouldGroupAccessibilityChildren;
	NSString* _accessibilityIdentifier;
	long long _accessibilityNavigationStyle;
	NSArray* _accessibilityHeaderElements;
	CGPoint _accessibilityActivationPoint;
	UIBezierPath* _accessibilityPath;
	BOOL _isFinalLayoutable;
	BOOL _placeholderEnabled;
	BOOL _interfaceStateSuspended;
	NSString* _name;
	/*^block*/id _layoutSpecBlock;
	double _placeholderFadeDuration;
	unsigned long long _methodOverrides;
	CGSize _preferredFrameSize;
	CGRect _threadSafeBounds;

}

@property (assign,nonatomic) double basePagingTranslation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL placeholderFadesOut; 
@property (assign) unsigned long long minimorphType; 
@property (assign) FBMinimorphFactor minimorphFactor; 
@property (readonly) FBMinimorphInfo minimorphInfo; 
@property (nonatomic,readonly) double debugTimeToCreateView; 
@property (nonatomic,readonly) double debugTimeToApplyPendingState; 
@property (nonatomic,readonly) double debugTimeToAddSubnodeViews; 
@property (nonatomic,readonly) double debugTimeForDidLoad; 
@property (retain) id contents; 
@property (assign) BOOL clipsToBounds; 
@property (getter=isOpaque) BOOL opaque; 
@property (assign) BOOL allowsEdgeAntialiasing; 
@property (assign) unsigned edgeAntialiasingMask; 
@property (getter=isHidden) BOOL hidden; 
@property (assign) BOOL needsDisplayOnBoundsChange; 
@property (assign) BOOL autoresizesSubviews; 
@property (assign) unsigned long long autoresizingMask; 
@property (assign) double alpha; 
@property (assign) CGRect bounds; 
@property (assign) CGRect frame; 
@property (assign) CGPoint anchorPoint; 
@property (assign) double zPosition; 
@property (assign) CGPoint position; 
@property (assign) double cornerRadius; 
@property (assign) double contentsScale; 
@property (assign) CATransform3D transform; 
@property (assign) CATransform3D subnodeTransform; 
@property (retain) UIColor * backgroundColor; 
@property (retain) UIColor * tintColor; 
@property (assign) long long contentMode; 
@property (getter=isUserInteractionEnabled) BOOL userInteractionEnabled; 
@property (getter=isExclusiveTouch) BOOL exclusiveTouch; 
@property (assign) CGColorRef shadowColor; 
@property (assign) double shadowOpacity; 
@property (assign) CGSize shadowOffset; 
@property (assign) double shadowRadius; 
@property (assign) double borderWidth; 
@property (assign) CGColorRef borderColor; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (nonatomic,copy) NSString * accessibilityLabel; 
@property (nonatomic,copy) NSString * accessibilityHint; 
@property (nonatomic,copy) NSString * accessibilityValue; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (nonatomic,copy) UIBezierPath * accessibilityPath; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (nonatomic,copy) NSString * accessibilityLanguage; 
@property (assign,nonatomic) BOOL accessibilityElementsHidden; 
@property (assign,nonatomic) BOOL accessibilityViewIsModal; 
@property (assign,nonatomic) BOOL shouldGroupAccessibilityChildren; 
@property (assign,nonatomic) long long accessibilityNavigationStyle; 
@property (nonatomic,copy) NSString * accessibilityIdentifier; 
@property (assign,getter=isInHierarchy,nonatomic) BOOL inHierarchy; 
@property (assign,nonatomic) unsigned long long hierarchyState; 
@property (assign,nonatomic) BOOL shouldBypassEnsureDisplay; 
@property (nonatomic,readonly) _ASDisplayLayer * asyncLayer; 
@property (nonatomic,readonly) unsigned long long methodOverrides;                               //@synthesize methodOverrides=_methodOverrides - In the implementation block
@property (assign,nonatomic) CGRect threadSafeBounds;                                            //@synthesize threadSafeBounds=_threadSafeBounds - In the implementation block
@property (assign,nonatomic) double contentsScaleForDisplay; 
@property (assign,nonatomic) BOOL interfaceStateSuspended;                                       //@synthesize interfaceStateSuspended=_interfaceStateSuspended - In the implementation block
@property (copy) NSString * name;                                                                //@synthesize name=_name - In the implementation block
@property (getter=isSynchronous,nonatomic,readonly) BOOL synchronous; 
@property (nonatomic,readonly) UIView * view; 
@property (getter=isNodeLoaded,readonly) BOOL nodeLoaded; 
@property (assign,getter=isLayerBacked,nonatomic) BOOL layerBacked; 
@property (nonatomic,readonly) CALayer * layer; 
@property (nonatomic,readonly) unsigned long long interfaceState; 
@property (nonatomic,copy) id layoutSpecBlock;                                                   //@synthesize layoutSpecBlock=_layoutSpecBlock - In the implementation block
@property (nonatomic,readonly) CGSize calculatedSize; 
@property (nonatomic,readonly) SCD_Struct_AS388 constrainedSizeForCalculatedLayout; 
@property (assign) CGSize preferredFrameSize;                                                    //@synthesize preferredFrameSize=_preferredFrameSize - In the implementation block
@property (nonatomic,copy,readonly) NSArray * subnodes; 
@property (nonatomic,__weak,readonly) ASDisplayNode * supernode; 
@property (assign,nonatomic) BOOL displaysAsynchronously; 
@property (assign,nonatomic) BOOL shouldRasterizeDescendants; 
@property (assign,nonatomic) BOOL displaySuspended; 
@property (assign,nonatomic) BOOL shouldAnimateSizeChanges; 
@property (assign,nonatomic) BOOL placeholderEnabled;                                            //@synthesize placeholderEnabled=_placeholderEnabled - In the implementation block
@property (assign,nonatomic) double placeholderFadeDuration;                                     //@synthesize placeholderFadeDuration=_placeholderFadeDuration - In the implementation block
@property (assign,nonatomic) long long drawingPriority; 
@property (assign,nonatomic) UIEdgeInsets hitTestSlop; 
@property (assign,nonatomic) double spacingBefore; 
@property (assign,nonatomic) double spacingAfter; 
@property (assign,nonatomic) BOOL flexGrow; 
@property (assign,nonatomic) BOOL flexShrink; 
@property (assign,nonatomic) KeyboardConfiguration flexBasis; 
@property (assign,nonatomic) unsigned long long alignSelf; 
@property (assign,nonatomic) double ascender; 
@property (assign,nonatomic) double descender; 
@property (assign,nonatomic) SCD_Struct_AS387 sizeRange; 
@property (assign,nonatomic) CGPoint layoutPosition; 
@property (assign,nonatomic) BOOL isFinalLayoutable;                                             //@synthesize isFinalLayoutable=_isFinalLayoutable - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutableType; 
@property (nonatomic,readonly) BOOL canLayoutAsynchronous; 
+(BOOL)layerBackedNodesEnabled;
+(BOOL)usesImplicitHierarchyManagement;
+(void)setUsesImplicitHierarchyManagement:(BOOL)arg1 ;
+(void)scheduleNodeForRecursiveDisplay:(id)arg1 ;
+(void)initialize;
+(Class)layerClass;
+(void)load;
+(Class)viewClass;
-(void)setHitTestSlop:(UIEdgeInsets)arg1 ;
-(void)removeFromSupernode;
-(void)insertSubnode:(id)arg1 aboveSubnode:(id)arg2 ;
-(void)setLayerBacked:(BOOL)arg1 ;
-(CGSize)measure:(CGSize)arg1 ;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)insertSubnode:(id)arg1 atIndex:(long long)arg2 ;
-(ASDisplayNode *)supernode;
-(id)initWithLayerBlock:(/*^block*/id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 toNode:(id)arg2 ;
-(id)initWithViewBlock:(/*^block*/id)arg1 ;
-(void)subnodeDisplayDidFinish:(id)arg1 ;
-(BOOL)isNodeLoaded;
-(void)setDisplaySuspended:(BOOL)arg1 ;
-(void)invalidateCalculatedLayout;
-(void)subnodeDisplayWillStart:(id)arg1 ;
-(void)insertSubnode:(id)arg1 belowSubnode:(id)arg2 ;
-(void)recursivelySetDisplaySuspended:(BOOL)arg1 ;
-(void)recursivelyClearContents;
-(void)replaceSubnode:(id)arg1 withSubnode:(id)arg2 ;
-(void)layoutDidFinish;
-(void)setPlaceholderEnabled:(BOOL)arg1 ;
-(CGSize)calculatedSize;
-(void)willEnterHierarchy;
-(void)didExitHierarchy;
-(UIEdgeInsets)hitTestSlop;
-(FBMinimorphInfo)minimorphInfo;
-(FBMinimorphFactor)minimorphFactor;
-(void)setMinimorphFactor:(FBMinimorphFactor)arg1 ;
-(void)displayWillStart;
-(void)displayDidFinish;
-(id)calculatedLayout;
-(double)basePagingTranslation;
-(void)setBasePagingTranslation:(double)arg1 ;
-(id)drawParameters;
-(void)setSubnodeTransform:(CATransform3D)arg1 ;
-(void)setDisplaysAsynchronously:(BOOL)arg1 ;
-(void)setNeedsDisplayAtScale:(double)arg1 ;
-(unsigned long long)minimorphType;
-(void)setMinimorphType:(unsigned long long)arg1 ;
-(CGSize)calculateMiniSizeThatFits:(CGSize)arg1 ;
-(CGSize)calculateMaxSizeThatFits:(CGSize)arg1 ;
-(void)_staticInitialize;
-(void)_recursivelyTriggerDisplayAndBlock:(BOOL)arg1 ;
-(void)_initializeInstance;
-(_ASDisplayLayer *)asyncLayer;
-(void)__setSupernode:(id)arg1 ;
-(BOOL)__shouldLoadViewOrLayer;
-(id)_layerToLoad;
-(id)_viewToLoad;
-(void)_applyPendingStateToViewOrLayer;
-(void)_addSubnodeViewsAndLayers;
-(void)__didLoad;
-(void)_loadViewOrLayerIsLayerBacked:(BOOL)arg1 ;
-(BOOL)shouldMeasureWithSizeRange:(SCD_Struct_AS388)arg1 ;
-(void)cancelLayoutTransitionsInProgress;
-(id)calculateLayoutThatFits:(SCD_Struct_AS388)arg1 ;
-(BOOL)usesImplicitHierarchyManagement;
-(void)_applyLayout:(id)arg1 layoutTransition:(id)arg2 ;
-(void)_completeLayoutCalculation;
-(BOOL)__shouldSize;
-(BOOL)_hasDirtyLayout;
-(void)transitionLayoutWithSizeRange:(SCD_Struct_AS388)arg1 animated:(BOOL)arg2 shouldMeasureAsync:(BOOL)arg3 measurementCompletion:(/*^block*/id)arg4 ;
-(int)_startNewTransition;
-(void)setHierarchyState:(unsigned long long)arg1 ;
-(void)setPendingTransitionID:(int)arg1 ;
-(BOOL)_shouldAbortTransitionWithID:(int)arg1 ;
-(void)setUsesImplicitHierarchyManagement:(BOOL)arg1 ;
-(void)_applyPendingLayoutContext;
-(void)_finishOrCancelTransition;
-(void)animateLayoutTransition:(id)arg1 ;
-(void)calculatedLayoutDidChange;
-(BOOL)_displaysAsynchronously;
-(BOOL)_isTransitionInProgress;
-(void)__layoutSublayouts;
-(void)didCompleteLayoutTransition:(id)arg1 ;
-(void)enterHierarchyState:(unsigned long long)arg1 ;
-(void)__unloadNode;
-(void)exitHierarchyState:(unsigned long long)arg1 ;
-(void)__loadNode;
-(void)recursivelyDisplayImmediately;
-(void)__setNeedsLayout;
-(BOOL)__implementsDisplay;
-(BOOL)_shouldHavePlaceholderLayer;
-(void)_setupPlaceholderLayerIfNeeded;
-(void)__incrementVisibilityNotificationsDisabled;
-(void)_addSubnodeSubviewOrSublayer:(id)arg1 ;
-(void)__decrementVisibilityNotificationsDisabled;
-(id)_deallocSafeSupernode;
-(void)_insertSubnode:(id)arg1 atSubnodeIndex:(long long)arg2 sublayerIndex:(long long)arg3 andRemoveSubnode:(id)arg4 ;
-(void)_removeSubnode:(id)arg1 ;
-(BOOL)__selfOrParentHasVisibilityNotificationsDisabled;
-(void)_recursiveWillEnterHierarchy;
-(void)_recursiveDidExitHierarchy;
-(BOOL)shouldRasterizeDescendants;
-(void)hierarchyDisplayDidFinish;
-(BOOL)__canCallNeedsDisplayOfLayer;
-(BOOL)shouldBypassEnsureDisplay;
-(id)layoutSpecThatFits:(SCD_Struct_AS388)arg1 ;
-(BOOL)supportsRangeManagedInterfaceState;
-(void)setInterfaceState:(unsigned long long)arg1 ;
-(void)clearContents;
-(void)recursivelyFetchData;
-(void)loadStateDidChange:(BOOL)arg1 ;
-(void)displayStateDidChange:(BOOL)arg1 ;
-(void)visibilityDidChange:(BOOL)arg1 ;
-(void)interfaceStateDidChange:(unsigned long long)arg1 fromState:(unsigned long long)arg2 ;
-(BOOL)shouldScheduleDisplayWithNewInterfaceState:(unsigned long long)arg1 ;
-(void)enterInterfaceState:(unsigned long long)arg1 ;
-(void)_pendingNodeWillDisplay:(id)arg1 ;
-(void)_pendingNodeDidDisplay:(id)arg1 ;
-(double)contentsScaleForDisplay;
-(void)setContentsScaleForDisplay:(double)arg1 ;
-(void)applyPendingViewState;
-(void)asyncTraitCollectionDidChange;
-(void)willDisplayAsyncLayer:(id)arg1 ;
-(void)didDisplayAsyncLayer:(id)arg1 ;
-(void)displayAsyncLayer:(id)arg1 asynchronously:(BOOL)arg2 ;
-(void)cancelDisplayAsyncLayer:(id)arg1 ;
-(void)transitionContext:(id)arg1 didComplete:(BOOL)arg2 ;
-(id)initWithViewClass:(Class)arg1 ;
-(id)ensureAsyncView;
-(void)transitionLayoutWithAnimation:(BOOL)arg1 shouldMeasureAsync:(BOOL)arg2 measurementCompletion:(/*^block*/id)arg3 ;
-(BOOL)displaysAsynchronously;
-(void)setShouldRasterizeDescendants:(BOOL)arg1 ;
-(void)__setNeedsDisplay;
-(void)__layout;
-(CATransform3D)_transformToAncestor:(id)arg1 ;
-(CGRect)convertRect:(CGRect)arg1 fromNode:(id)arg2 ;
-(BOOL)__visibilityNotificationsDisabled;
-(void)recursivelyEnsureDisplaySynchronously:(BOOL)arg1 ;
-(SCD_Struct_AS388)constrainedSizeForCalculatedLayout;
-(void)setLayoutSpecBlock:(id)arg1 ;
-(void)setPreferredFrameSize:(CGSize)arg1 ;
-(CGRect)threadSafeBounds;
-(void)setNeedsDataFetch;
-(void)recursivelyClearFetchedData;
-(void)exitInterfaceState:(unsigned long long)arg1 ;
-(void)recursivelySetInterfaceState:(unsigned long long)arg1 ;
-(void)recursivelySetNeedsDisplayAtScale:(double)arg1 ;
-(id)_supernodeWithClass:(Class)arg1 checkViewHierarchy:(BOOL)arg2 ;
-(BOOL)shouldAnimateSizeChanges;
-(void)setShouldAnimateSizeChanges:(BOOL)arg1 ;
-(void)setDrawingPriority:(long long)arg1 ;
-(long long)drawingPriority;
-(void)setInHierarchy:(BOOL)arg1 ;
-(id)layoutSpecBlock;
-(BOOL)placeholderEnabled;
-(double)placeholderFadeDuration;
-(void)setPlaceholderFadeDuration:(double)arg1 ;
-(BOOL)interfaceStateSuspended;
-(void)setInterfaceStateSuspended:(BOOL)arg1 ;
-(id)_recursiveDescriptionHelperWithIndent:(id)arg1 ;
-(id)descriptionForRecursiveDescription;
-(id)displayNodeRecursiveDescription;
-(void)setPlaceholderFadesOut:(BOOL)arg1 ;
-(BOOL)placeholderFadesOut;
-(void)reclaimMemory;
-(void)recursivelyReclaimMemory;
-(id)initWithLayerBlock:(/*^block*/id)arg1 didLoadBlock:(/*^block*/id)arg2 ;
-(id)initWithViewBlock:(/*^block*/id)arg1 didLoadBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)willDisplayNodeContentWithRenderingContext;
-(/*^block*/id)didDisplayNodeContentWithRenderingContext;
-(BOOL)displaySuspended;
-(void)displayImmediately;
-(void)setShouldBypassEnsureDisplay:(BOOL)arg1 ;
-(id)initWithLayerClass:(Class)arg1 ;
-(unsigned long long)interfaceState;
-(void)visibleStateDidChange:(BOOL)arg1 ;
-(void)clearFetchedData;
-(BOOL)placeholderShouldPersist;
-(unsigned long long)asyncdisplaykit_asyncTransactionContainerState;
-(void)asyncdisplaykit_cancelAsyncTransactions;
-(BOOL)isInHierarchy;
-(void)__enterHierarchy;
-(void)__exitHierarchy;
-(BOOL)isLayerBacked;
-(unsigned long long)hierarchyState;
-(void)setThreadSafeBounds:(CGRect)arg1 ;
-(unsigned long long)methodOverrides;
-(void)asyncdisplaykit_asyncTransactionContainerStateDidChange;
-(BOOL)isFinalLayoutable;
-(id)finalLayoutable;
-(ASEnvironmentState)environmentState;
-(void)setEnvironmentState:(ASEnvironmentState)arg1 ;
-(BOOL)supportsUpwardPropagation;
-(void)propagateUpLayoutOptionsState;
-(ASEnvironmentTraitCollection)environmentTraitCollection;
-(id)measureWithSizeRange:(SCD_Struct_AS388)arg1 ;
-(unsigned long long)layoutableType;
-(BOOL)canLayoutAsynchronous;
-(void)setSpacingBefore:(double)arg1 ;
-(void)setSpacingAfter:(double)arg1 ;
-(void)setFlexGrow:(BOOL)arg1 ;
-(void)setFlexShrink:(BOOL)arg1 ;
-(void)setFlexBasis:(KeyboardConfiguration)arg1 ;
-(void)setAlignSelf:(unsigned long long)arg1 ;
-(void)setAscender:(double)arg1 ;
-(void)setDescender:(double)arg1 ;
-(void)setSizeRange:(SCD_Struct_AS387)arg1 ;
-(BOOL)supportsTraitsCollectionPropagation;
-(id)asyncTraitCollection;
-(void)setEnvironmentTraitCollection:(ASEnvironmentTraitCollection)arg1 ;
-(void)setIsFinalLayoutable:(BOOL)arg1 ;
-(void)setLayoutOptionExtensionBool:(BOOL)arg1 atIndex:(int)arg2 ;
-(BOOL)layoutOptionExtensionBoolAtIndex:(int)arg1 ;
-(void)setLayoutOptionExtensionInteger:(long long)arg1 atIndex:(int)arg2 ;
-(long long)layoutOptionExtensionIntegerAtIndex:(int)arg1 ;
-(void)setLayoutOptionExtensionEdgeInsets:(UIEdgeInsets)arg1 atIndex:(int)arg2 ;
-(UIEdgeInsets)layoutOptionExtensionEdgeInsetsAtIndex:(int)arg1 ;
-(id)asciiArtString;
-(id)asciiArtName;
-(SCD_Struct_AS387)sizeRange;
-(double)spacingBefore;
-(double)spacingAfter;
-(BOOL)flexGrow;
-(BOOL)flexShrink;
-(KeyboardConfiguration)flexBasis;
-(unsigned long long)alignSelf;
-(/*^block*/id)_displayBlockWithAsynchronous:(BOOL)arg1 isCancelledBlock:(/*^block*/id)arg2 rasterizing:(BOOL)arg3 ;
-(void)_recursivelyRasterizeSelfAndSublayersWithIsCancelledBlock:(/*^block*/id)arg1 displayBlocks:(id)arg2 ;
-(void)setWillDisplayNodeContentWithRenderingContext:(/*^block*/id)arg1 ;
-(void)setDidDisplayNodeContentWithRenderingContext:(/*^block*/id)arg1 ;
-(double)debugTimeToCreateView;
-(double)debugTimeToApplyPendingState;
-(double)debugTimeToAddSubnodeViews;
-(double)debugTimeForDidLoad;
-(double)debugAllCreationTime;
-(CATransform3D)subnodeTransform;
-(void)asyncdisplaykit_setAsyncTransactionContainer:(BOOL)arg1 ;
-(BOOL)asyncdisplaykit_isAsyncTransactionContainer;
-(void)setOpaque:(BOOL)arg1 ;
-(void)setAutoresizingMask:(unsigned long long)arg1 ;
-(void)setNeedsDisplayOnBoundsChange:(BOOL)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)setNeedsDisplay;
-(CGRect)bounds;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(CALayer *)layer;
-(UIColor *)backgroundColor;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)isHidden;
-(void)setNeedsLayout;
-(double)alpha;
-(void)setHidden:(BOOL)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(id)init;
-(void)setFrame:(CGRect)arg1 ;
-(CGRect)frame;
-(void)setBounds:(CGRect)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(UIView *)view;
-(void)setContentMode:(long long)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(BOOL)resignFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)setCornerRadius:(double)arg1 ;
-(double)ascender;
-(void)setShadowColor:(CGColorRef)arg1 ;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setTransform:(CATransform3D)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
-(BOOL)isUserInteractionEnabled;
-(CATransform3D)transform;
-(id)contents;
-(NSString *)accessibilityIdentifier;
-(BOOL)isOpaque;
-(long long)contentMode;
-(BOOL)clipsToBounds;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(double)cornerRadius;
-(BOOL)canBecomeFirstResponder;
-(CGPoint)position;
-(void)tintColorDidChange;
-(unsigned long long)autoresizingMask;
-(void)setExclusiveTouch:(BOOL)arg1 ;
-(BOOL)isExclusiveTouch;
-(void)setAutoresizesSubviews:(BOOL)arg1 ;
-(BOOL)autoresizesSubviews;
-(BOOL)needsDisplayOnBoundsChange;
-(double)contentsScale;
-(void)setContentsScale:(double)arg1 ;
-(void)setContents:(id)arg1 ;
-(NSString *)accessibilityLabel;
-(CGPoint)anchorPoint;
-(CGSize)shadowOffset;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(CGColorRef)shadowColor;
-(double)descender;
-(void)layout;
-(void)setBorderWidth:(double)arg1 ;
-(void)setBorderColor:(CGColorRef)arg1 ;
-(void)setShadowRadius:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowRadius;
-(void)setZPosition:(double)arg1 ;
-(double)shadowOpacity;
-(BOOL)canResignFirstResponder;
-(void)setEdgeAntialiasingMask:(unsigned)arg1 ;
-(id)placeholderImage;
-(CGColorRef)borderColor;
-(double)borderWidth;
-(CGRect)accessibilityFrame;
-(NSString *)accessibilityValue;
-(NSString *)accessibilityHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(NSString *)accessibilityLanguage;
-(UIBezierPath *)accessibilityPath;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityElementsHidden;
-(BOOL)shouldGroupAccessibilityChildren;
-(long long)accessibilityNavigationStyle;
-(void)setAccessibilityElementsHidden:(BOOL)arg1 ;
-(void)setAccessibilityViewIsModal:(BOOL)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAccessibilityLanguage:(NSString *)arg1 ;
-(void)setShouldGroupAccessibilityChildren:(BOOL)arg1 ;
-(void)setAccessibilityNavigationStyle:(long long)arg1 ;
-(long long)accessibilityElementCount;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(void)setAllowsEdgeAntialiasing:(BOOL)arg1 ;
-(id)actionForLayer:(id)arg1 forKey:(id)arg2 ;
-(unsigned)edgeAntialiasingMask;
-(void)setSynchronous:(BOOL)arg1 ;
-(void)addSubnode:(id)arg1 ;
-(NSArray *)subnodes;
-(BOOL)isSynchronous;
-(void)didLoad;
-(void)fetchData;
-(double)zPosition;
-(BOOL)allowsEdgeAntialiasing;
-(CGPoint)convertPoint:(CGPoint)arg1 fromNode:(id)arg2 ;
-(CGPoint)convertPoint:(CGPoint)arg1 toNode:(id)arg2 ;
-(CGSize)preferredFrameSize;
-(id)parent;
-(id)children;
-(void)setLayoutPosition:(CGPoint)arg1 ;
-(CGPoint)layoutPosition;
@end

