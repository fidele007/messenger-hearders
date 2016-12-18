/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedScrollingDelegate <NSObject>
@property (nonatomic,readonly) double contentVerticalOffset; 
@property (nonatomic,readonly) double lastScrollingDirectionChange; 
@property (nonatomic,readonly) BOOL scrollDecelerating; 
@property (nonatomic,readonly) double playThreshold; 
@property (nonatomic,readonly) double slowdownScrollVelocityPlayThreshold; 
@property (nonatomic,readonly) double scrollDirectionChangeCostRatio; 
@property (nonatomic,readonly) double lastScrollVelocityRatio; 
@property (nonatomic,readonly) BOOL providesScoreForContainerRect; 
@required
-(double)contentVerticalOffset;
-(float)scoreForContainerRect:(CGRect)arg1 withVisibleScrollViewRect:(CGRect)arg2;
-(double)lastScrollingDirectionChange;
-(BOOL)scrollDecelerating;
-(double)slowdownScrollVelocityPlayThreshold;
-(double)scrollDirectionChangeCostRatio;
-(double)lastScrollVelocityRatio;
-(BOOL)providesScoreForContainerRect;
-(double)playThreshold;

@end

