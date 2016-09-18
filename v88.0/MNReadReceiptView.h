/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>
#import <Messenger/FBMConfigurable.h>

@class MNMessageRow, UILabel, MNReadReceiptDisplayController, NSString;

@interface MNReadReceiptView : UIView <FBMConfigurable> {

	MNMessageRow* _messageRow;
	UILabel* _readLabel;
	MNReadReceiptDisplayController* _readReceiptDisplayController;

}

@property (nonatomic,retain) UILabel * readLabel;                                                        //@synthesize readLabel=_readLabel - In the implementation block
@property (nonatomic,retain) MNReadReceiptDisplayController * readReceiptDisplayController;              //@synthesize readReceiptDisplayController=_readReceiptDisplayController - In the implementation block
@property (nonatomic,retain) MNMessageRow * messageRow;                                                  //@synthesize messageRow=_messageRow - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(MNMessageRow *)messageRow;
-(void)setMessageRow:(MNMessageRow *)arg1 ;
-(void)configureWithReadReceiptDisplayController:(id)arg1 ;
-(MNReadReceiptDisplayController *)readReceiptDisplayController;
-(void)setReadReceiptDisplayController:(MNReadReceiptDisplayController *)arg1 ;
-(void)_updateReceiptInfo;
-(UILabel *)readLabel;
-(void)setReadLabel:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isConfigured;
@end

