/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:56 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class FBWebRTCProgressRingView, UILabel;

@interface FBWebRTCCountdownView : UIView {

	FBWebRTCProgressRingView* _ringView;
	UILabel* _timeLabel;
	int _timeRemaining;

}

@property (assign,nonatomic) int timeRemaining;              //@synthesize timeRemaining=_timeRemaining - In the implementation block
-(void)_updateTimeLabel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)start;
-(int)timeRemaining;
-(void)setTimeRemaining:(int)arg1 ;
@end

