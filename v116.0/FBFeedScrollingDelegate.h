/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedScrollingDelegate <NSObject>
@property (nonatomic,readonly) double contentVerticalOffset; 
@property (nonatomic,readonly) double lastScrollingDirectionChange; 
@property (nonatomic,readonly) BOOL scrollDecelerating; 
@property (nonatomic,readonly) double playThreshold; 
@property (nonatomic,readonly) double slowdownScrollVelocityPlayThreshold; 
@property (nonatomic,readonly) BOOL providesScoreForContainerRect; 
@required
-(double)contentVerticalOffset;
-(double)playThreshold;
-(float)scoreForContainerRect:(CGRect)arg1 withVisibleScrollViewRect:(CGRect)arg2;
-(double)lastScrollingDirectionChange;
-(BOOL)scrollDecelerating;
-(double)slowdownScrollVelocityPlayThreshold;
-(BOOL)providesScoreForContainerRect;

@end

