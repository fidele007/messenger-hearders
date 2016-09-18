/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSString;

@interface FBWebRTCCallStatusBarView : UIView {

	UILabel* _statusLabel;
	NSString* _messageString;
	NSString* _statusString;

}

@property (nonatomic,copy) NSString * messageString;              //@synthesize messageString=_messageString - In the implementation block
@property (nonatomic,copy) NSString * statusString;               //@synthesize statusString=_statusString - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)stopAnimating;
-(void)startAnimating;
-(void)setMessage:(id)arg1 ;
-(void)setStatus:(id)arg1 ;
-(void)setMessageString:(NSString *)arg1 ;
-(NSString *)messageString;
-(void)updateStatusLabel;
-(NSString *)statusString;
-(void)setStatusString:(NSString *)arg1 ;
@end

