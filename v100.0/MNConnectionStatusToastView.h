/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, MNLoadingIndicator, UIImageView;

@interface MNConnectionStatusToastView : UIView {

	UILabel* _statusLabel;
	MNLoadingIndicator* _spinner;
	UIImageView* _connectedIcon;
	unsigned long long _connectionStatus;

}

@property (assign,nonatomic) unsigned long long connectionStatus;              //@synthesize connectionStatus=_connectionStatus - In the implementation block
-(void)setConnectionStatus:(unsigned long long)arg1 ;
-(void)_showNoConnection;
-(void)_showCaptiveNetwork;
-(void)_showWaitingToReconnect;
-(void)_showConnecting;
-(void)_showConnected;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)connectionStatus;
@end

