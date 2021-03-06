/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class NSTimer;

@interface FBBugReportExpiringTouchView : UIView {

	float _opacity;
	NSTimer* _timer;
	/*^block*/id _completionBlock;

}
-(void)fadeTouchView;
-(void)updatePositionAndSetTimer:(CGPoint)arg1 phase:(long long)arg2 ;
-(id)initWithPosition:(CGPoint)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)updatePosition:(CGPoint)arg1 phase:(long long)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
@end

