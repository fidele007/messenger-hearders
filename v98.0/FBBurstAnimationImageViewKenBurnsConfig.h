/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:01 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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
-(id)initWithTransitionDuration:(double)arg1 displayDuration:(double)arg2 enlargeRatio:(double)arg3 shouldAlwaysZoomIn:(BOOL)arg4 ;
-(BOOL)shouldAlwaysZoomIn;
-(double)enlargeRatio;
-(double)transitionDuration;
@end

