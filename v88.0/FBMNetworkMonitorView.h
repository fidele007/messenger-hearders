/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, NSMutableAttributedString, NSTimer;

@interface FBMNetworkMonitorView : UIView {

	UILabel* _networkLabel;
	UILabel* _ligerLabel;
	UILabel* _numJobsInDeltaPreparerErrorHander;
	NSMutableAttributedString* _fetchersText;
	NSTimer* _timer;
	BOOL _networkActivityVisible;

}

@property (assign,nonatomic) BOOL networkActivityVisible;              //@synthesize networkActivityVisible=_networkActivityVisible - In the implementation block
-(void)setNetworkActivityVisible:(BOOL)arg1 ;
-(void)showLigerEnabled:(BOOL)arg1 ;
-(void)showFetcher:(id)arg1 type:(unsigned long long)arg2 ;
-(void)setNumberOfJobsInDeltaPreparerErrorHandler:(unsigned long long)arg1 ;
-(void)_didTimeout:(id)arg1 ;
-(BOOL)networkActivityVisible;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_ensureTimer;
@end
