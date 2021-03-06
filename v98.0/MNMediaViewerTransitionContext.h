/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNOpenableMediaView;
@class UIView;

@interface MNMediaViewerTransitionContext : NSObject {

	UIView*<MNOpenableMediaView> _animationView;
	UIView* _mediaView;

}

@property (nonatomic,readonly) UIView*<MNOpenableMediaView> animationView;              //@synthesize animationView=_animationView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * mediaView;                               //@synthesize mediaView=_mediaView - In the implementation block
-(id)initWithAnimationView:(id)arg1 mediaView:(id)arg2 ;
-(UIView *)mediaView;
-(UIView*<MNOpenableMediaView>)animationView;
@end

