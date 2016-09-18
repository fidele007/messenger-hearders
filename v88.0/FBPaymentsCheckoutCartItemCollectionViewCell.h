/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBPaymentsCartItemViewDelegate.h>

@protocol FBPaymentsCheckoutCartItemCollectionViewCellDelegate;
@class FBPaymentsCartItemView, NSString;

@interface FBPaymentsCheckoutCartItemCollectionViewCell : UICollectionViewCell <FBPaymentsCartItemViewDelegate> {

	FBPaymentsCartItemView* _cartItemView;
	id<FBPaymentsCheckoutCartItemCollectionViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutCartItemCollectionViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cartItemViewDidTapRemoveButton:(id)arg1 ;
-(void)cartItemViewDidTapEditButton:(id)arg1 ;
-(void)configureCellWithFBPaymentsCartItemViewModel:(id)arg1 imageDownloader:(id)arg2 ;
-(void)setDelegate:(id<FBPaymentsCheckoutCartItemCollectionViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPaymentsCheckoutCartItemCollectionViewCellDelegate>)delegate;
@end

