/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Messenger/FBPaymentsEdgeInsetsConfigurable.h>

@class NSString;

@interface FBPaymentsTableViewCell : UITableViewCell <FBPaymentsEdgeInsetsConfigurable> {

	long long _paymentsTableViewCellStyle;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) long long paymentsTableViewCellStyle;              //@synthesize paymentsTableViewCellStyle=_paymentsTableViewCellStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
+(double)heightWithStyle:(long long)arg1 ;
-(id)initWithPaymentsTableViewCellStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureWithCurrentStyle;
-(void)_layoutWithCurrentStyle;
-(BOOL)_hasAccessoryViewOrHasNotNoneAccessoryType;
-(void)setPaymentsTableViewCellStyle:(long long)arg1 ;
-(long long)paymentsTableViewCellStyle;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

