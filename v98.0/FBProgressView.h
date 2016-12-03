/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:16 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBProgressViewUpdatePolicy;
@class UIProgressView, NSTimer, UIColor;

@interface FBProgressView : UIView {

	UIProgressView* _progressView;
	NSTimer* _progressTimer;
	id<FBProgressViewUpdatePolicy> _progressUpdatePolicy;
	UIColor* _progressColor;

}

@property (assign,nonatomic) float progress; 
@property (nonatomic,retain) UIColor * progressColor;              //@synthesize progressColor=_progressColor - In the implementation block
-(void)startProgressWithPolicy:(id)arg1 ;
-(void)stopProgress;
-(void)_handleProgress:(id)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(float)arg1 ;
-(id)initWithProgressViewStyle:(long long)arg1 ;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(void)setProgressColor:(UIColor *)arg1 ;
-(UIColor *)progressColor;
@end
