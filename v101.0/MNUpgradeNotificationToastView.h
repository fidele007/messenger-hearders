/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:18 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNUpgradeNotificationToastViewDelegate;
@class UIToolbar, FBRichTextView, UITapGestureRecognizer, NSMutableAttributedString, NSString;

@interface MNUpgradeNotificationToastView : UIView {

	UIToolbar* _backgroundBar;
	FBRichTextView* _updateTextView;
	UITapGestureRecognizer* _tapRecognizer;
	NSMutableAttributedString* _updateAttributedString;
	unsigned long long _upgradeType;
	NSString* _appName;
	id<MNUpgradeNotificationToastViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNUpgradeNotificationToastViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setUpgradeType:(unsigned long long)arg1 ;
-(void)_upgradePressed:(id)arg1 ;
-(BOOL)isUpgradeTypeSet;
-(unsigned long long)upgradeType;
-(void)setDelegate:(id<MNUpgradeNotificationToastViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<MNUpgradeNotificationToastViewDelegate>)delegate;
-(id)initWithAppName:(id)arg1 ;
@end

