/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:56 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBNuxStep.h>

@protocol FBNuxStep;
@class UIView, NSString, NSArray;

@interface FBNuxTooltipWithButtons : NSObject <FBNuxStep> {

	BOOL _allowsGoingBackward;
	BOOL _padShowFullScreenInterstitialInSheet;
	BOOL _useAnchorPoint;
	BOOL _isNubOnTop;
	UIView* _view;
	id<FBNuxStep> _nextStep;
	double _nuxViewYOffset;
	long long _transitionAction;
	double _duration;
	double _previousStepViewHeight;
	unsigned long long _allowedArrowDirections;
	/*^block*/id _viewProvider;
	/*^block*/id _hightlightedRegionsProvider;
	id<FBNuxStep> _firstSubStep;
	long long _containerType;
	long long _userTransitionAction;
	double _dimAlpha;
	NSString* _title;
	NSString* _body;
	NSString* _primaryButtonTitle;
	NSString* _secondaryButtonTitle;
	/*^block*/id _buttonsTappedBlock;
	double _maxWidth;
	unsigned long long _toolTipType;
	id<FBNuxStep> _previousStep;
	CGPoint _arrowPositionInWindow;
	CGPoint _anchorPoint;
	UIEdgeInsets _insetsFromWindow;
	UIEdgeInsets _insetsForContent;

}

@property (assign,nonatomic,__weak) id<FBNuxStep> previousStep;                            //@synthesize previousStep=_previousStep - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * body;                                                //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSString * primaryButtonTitle;                                  //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * secondaryButtonTitle;                                //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
@property (nonatomic,copy) id buttonsTappedBlock;                                          //@synthesize buttonsTappedBlock=_buttonsTappedBlock - In the implementation block
@property (assign,nonatomic) double maxWidth;                                              //@synthesize maxWidth=_maxWidth - In the implementation block
@property (assign,nonatomic) unsigned long long toolTipType;                               //@synthesize toolTipType=_toolTipType - In the implementation block
@property (assign,nonatomic) BOOL isNubOnTop;                                              //@synthesize isNubOnTop=_isNubOnTop - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBNuxStep> nextStep;                                       //@synthesize nextStep=_nextStep - In the implementation block
@property (nonatomic,retain) id<FBNuxStep> firstSubStep;                                   //@synthesize firstSubStep=_firstSubStep - In the implementation block
@property (assign,nonatomic) unsigned long long allowedArrowDirections;                    //@synthesize allowedArrowDirections=_allowedArrowDirections - In the implementation block
@property (assign,nonatomic) CGPoint arrowPositionInWindow;                                //@synthesize arrowPositionInWindow=_arrowPositionInWindow - In the implementation block
@property (assign,nonatomic) double nuxViewYOffset;                                        //@synthesize nuxViewYOffset=_nuxViewYOffset - In the implementation block
@property (assign,nonatomic,__weak) UIView * view;                                         //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) BOOL useAnchorPoint;                                          //@synthesize useAnchorPoint=_useAnchorPoint - In the implementation block
@property (assign,nonatomic) CGPoint anchorPoint;                                          //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (nonatomic,copy) id viewProvider;                                                //@synthesize viewProvider=_viewProvider - In the implementation block
@property (assign,nonatomic) long long transitionAction;                                   //@synthesize transitionAction=_transitionAction - In the implementation block
@property (assign,nonatomic) long long userTransitionAction;                               //@synthesize userTransitionAction=_userTransitionAction - In the implementation block
@property (nonatomic,readonly) long long containerType;                                    //@synthesize containerType=_containerType - In the implementation block
@property (assign,nonatomic) BOOL padShowFullScreenInterstitialInSheet;                    //@synthesize padShowFullScreenInterstitialInSheet=_padShowFullScreenInterstitialInSheet - In the implementation block
@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) double previousStepViewHeight;                                //@synthesize previousStepViewHeight=_previousStepViewHeight - In the implementation block
@property (nonatomic,readonly) BOOL dimBackground; 
@property (assign,nonatomic) double dimAlpha;                                              //@synthesize dimAlpha=_dimAlpha - In the implementation block
@property (nonatomic,copy) id hightlightedRegionsProvider;                                 //@synthesize hightlightedRegionsProvider=_hightlightedRegionsProvider - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetsFromWindow;                                //@synthesize insetsFromWindow=_insetsFromWindow - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insetsForContent;                                //@synthesize insetsForContent=_insetsForContent - In the implementation block
@property (assign,nonatomic) BOOL allowsGoingBackward;                                     //@synthesize allowsGoingBackward=_allowsGoingBackward - In the implementation block
@property (nonatomic,retain) NSArray * passthroughViews; 
@property (nonatomic,readonly) long long navigationControllerTransitionStyle; 
+(void)setCustomPopoverBorderViewClass:(Class)arg1 ;
+(id)modalTooltipWithTitle:(id)arg1 body:(id)arg2 primaryButtonTitle:(id)arg3 secondaryButtonTitle:(id)arg4 buttonsTappedBlock:(/*^block*/id)arg5 forView:(id)arg6 ;
+(id)informativeLightTooltipNoDimmingWithTitle:(id)arg1 body:(id)arg2 primaryButtonTitle:(id)arg3 secondaryButtonTitle:(id)arg4 buttonsTappedBlock:(/*^block*/id)arg5 forView:(id)arg6 ;
-(void)setAllowedArrowDirections:(unsigned long long)arg1 ;
-(void)setArrowPositionInWindow:(CGPoint)arg1 ;
-(CGPoint)arrowPositionInWindow;
-(void)setTransitionAction:(long long)arg1 ;
-(void)setToolTipType:(unsigned long long)arg1 ;
-(void)setNextStep:(id<FBNuxStep>)arg1 ;
-(void)setPrimaryButtonTitle:(NSString *)arg1 ;
-(id<FBNuxStep>)nextStep;
-(id<FBNuxStep>)previousStep;
-(Class)popoverBorderViewClass;
-(UIEdgeInsets)insetsFromWindow;
-(UIEdgeInsets)insetsForContent;
-(unsigned long long)allowedArrowDirections;
-(long long)transitionAction;
-(void)setInsetsFromWindow:(UIEdgeInsets)arg1 ;
-(void)setNuxViewYOffset:(double)arg1 ;
-(void)setHightlightedRegionsProvider:(id)arg1 ;
-(unsigned long long)toolTipType;
-(long long)userTransitionAction;
-(void)setViewProvider:(id)arg1 ;
-(id)viewProvider;
-(void)setPreviousStep:(id<FBNuxStep>)arg1 ;
-(id<FBNuxStep>)firstSubStep;
-(void)setFirstSubStep:(id<FBNuxStep>)arg1 ;
-(double)nuxViewYOffset;
-(BOOL)useAnchorPoint;
-(void)setUseAnchorPoint:(BOOL)arg1 ;
-(void)setUserTransitionAction:(long long)arg1 ;
-(BOOL)padShowFullScreenInterstitialInSheet;
-(void)setPadShowFullScreenInterstitialInSheet:(BOOL)arg1 ;
-(double)previousStepViewHeight;
-(void)setPreviousStepViewHeight:(double)arg1 ;
-(BOOL)dimBackground;
-(double)dimAlpha;
-(void)setDimAlpha:(double)arg1 ;
-(id)hightlightedRegionsProvider;
-(void)setInsetsForContent:(UIEdgeInsets)arg1 ;
-(BOOL)allowsGoingBackward;
-(void)setAllowsGoingBackward:(BOOL)arg1 ;
-(BOOL)isNubOnTop;
-(void)setButtonsTappedBlock:(id)arg1 ;
-(id)buttonsTappedBlock;
-(void)setIsNubOnTop:(BOOL)arg1 ;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(UIView *)view;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSString *)title;
-(void)setView:(UIView *)arg1 ;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1 ;
-(NSString *)body;
-(double)maxWidth;
-(Class)viewControllerClass;
-(void)setMaxWidth:(double)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)secondaryButtonTitle;
-(void)setSecondaryButtonTitle:(NSString *)arg1 ;
-(NSString *)primaryButtonTitle;
-(long long)containerType;
@end

