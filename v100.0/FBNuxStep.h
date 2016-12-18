/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView, NSArray;


@protocol FBNuxStep <NSObject>
@property (nonatomic,retain) id<FBNuxStep> nextStep; 
@property (nonatomic,retain) id<FBNuxStep> firstSubStep; 
@property (nonatomic,__weak,readonly) id<FBNuxStep> previousStep; 
@property (assign,nonatomic) unsigned long long allowedArrowDirections; 
@property (assign,nonatomic) CGPoint arrowPositionInWindow; 
@property (assign,nonatomic) double nuxViewYOffset; 
@property (assign,nonatomic,__weak) UIView * view; 
@property (assign,nonatomic) BOOL useAnchorPoint; 
@property (assign,nonatomic) CGPoint anchorPoint; 
@property (nonatomic,copy) id viewProvider; 
@property (assign,nonatomic) long long transitionAction; 
@property (assign,nonatomic) long long userTransitionAction; 
@property (nonatomic,readonly) long long containerType; 
@property (assign,nonatomic) BOOL padShowFullScreenInterstitialInSheet; 
@property (assign,nonatomic) double duration; 
@property (assign,nonatomic) double previousStepViewHeight; 
@property (nonatomic,readonly) BOOL dimBackground; 
@property (assign,nonatomic) double dimAlpha; 
@property (nonatomic,copy) id hightlightedRegionsProvider; 
@property (assign,nonatomic) UIEdgeInsets insetsFromWindow; 
@property (assign,nonatomic) UIEdgeInsets insetsForContent; 
@property (assign,nonatomic) BOOL allowsGoingBackward; 
@property (nonatomic,retain) NSArray * passthroughViews; 
@property (nonatomic,readonly) long long navigationControllerTransitionStyle; 
@optional
-(long long)navigationControllerTransitionStyle;
-(NSArray *)passthroughViews;
-(void)setPassthroughViews:(id)arg1;

@required
-(void)setAllowedArrowDirections:(unsigned long long)arg1;
-(void)setArrowPositionInWindow:(CGPoint)arg1;
-(CGPoint)arrowPositionInWindow;
-(void)setNuxViewYOffset:(double)arg1;
-(UIEdgeInsets)insetsFromWindow;
-(void)setInsetsFromWindow:(UIEdgeInsets)arg1;
-(Class)popoverBorderViewClass;
-(double)nuxViewYOffset;
-(UIEdgeInsets)insetsForContent;
-(unsigned long long)allowedArrowDirections;
-(long long)transitionAction;
-(void)setHightlightedRegionsProvider:(/*^block*/id)arg1;
-(void)setTransitionAction:(long long)arg1;
-(long long)userTransitionAction;
-(void)setViewProvider:(/*^block*/id)arg1;
-(id)viewProvider;
-(id<FBNuxStep>)nextStep;
-(void)setNextStep:(id)arg1;
-(id<FBNuxStep>)firstSubStep;
-(void)setFirstSubStep:(id)arg1;
-(id<FBNuxStep>)previousStep;
-(BOOL)useAnchorPoint;
-(void)setUseAnchorPoint:(BOOL)arg1;
-(void)setUserTransitionAction:(long long)arg1;
-(BOOL)padShowFullScreenInterstitialInSheet;
-(void)setPadShowFullScreenInterstitialInSheet:(BOOL)arg1;
-(double)previousStepViewHeight;
-(void)setPreviousStepViewHeight:(double)arg1;
-(BOOL)dimBackground;
-(double)dimAlpha;
-(void)setDimAlpha:(double)arg1;
-(id)hightlightedRegionsProvider;
-(void)setInsetsForContent:(UIEdgeInsets)arg1;
-(BOOL)allowsGoingBackward;
-(void)setAllowsGoingBackward:(BOOL)arg1;
-(UIView *)view;
-(double)duration;
-(void)setDuration:(double)arg1;
-(void)setView:(id)arg1;
-(CGPoint)anchorPoint;
-(void)setAnchorPoint:(CGPoint)arg1;
-(Class)viewControllerClass;
-(long long)containerType;

@end

