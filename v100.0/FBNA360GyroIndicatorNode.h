/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/ASDisplayNode.h>

@class FB360GyroIndicatorView;

@interface FBNA360GyroIndicatorNode : ASDisplayNode {

	FB360GyroIndicatorView* _gyroIndicatorView;
	BOOL _paused;

}

@property (assign,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
-(void)_staticInitialize;
-(CGSize)calculateSizeThatFits:(CGSize)arg1 ;
-(void)_animateGyroIndicator;
-(id)init;
-(void)layout;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void)didLoad;
@end

