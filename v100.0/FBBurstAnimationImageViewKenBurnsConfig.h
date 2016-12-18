/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBBurstAnimationImageViewKenBurnsConfig : FBValueObject <NSCopying> {

	BOOL _shouldAlwaysZoomIn;
	double _transitionDuration;
	double _displayDuration;
	double _enlargeRatio;

}

@property (nonatomic,readonly) double transitionDuration;              //@synthesize transitionDuration=_transitionDuration - In the implementation block
@property (nonatomic,readonly) double displayDuration;                 //@synthesize displayDuration=_displayDuration - In the implementation block
@property (nonatomic,readonly) double enlargeRatio;                    //@synthesize enlargeRatio=_enlargeRatio - In the implementation block
@property (nonatomic,readonly) BOOL shouldAlwaysZoomIn;                //@synthesize shouldAlwaysZoomIn=_shouldAlwaysZoomIn - In the implementation block
-(double)displayDuration;
-(BOOL)shouldAlwaysZoomIn;
-(double)enlargeRatio;
-(id)initWithTransitionDuration:(double)arg1 displayDuration:(double)arg2 enlargeRatio:(double)arg3 shouldAlwaysZoomIn:(BOOL)arg4 ;
-(double)transitionDuration;
@end

