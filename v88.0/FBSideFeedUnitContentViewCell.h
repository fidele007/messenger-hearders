/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:49 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <Messenger/FBSideFeedUnitContentViewDelegate.h>

@protocol FBSideFeedUnitContentViewCellDelegate;
@class FBSideFeedUnitContentView, UIView, NSString;

@interface FBSideFeedUnitContentViewCell : UICollectionViewCell <FBSideFeedUnitContentViewDelegate> {

	FBSideFeedUnitContentView* _internalContentView;
	id<FBSideFeedUnitContentViewCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSideFeedUnitContentViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * cellContentView; 
@property (assign,nonatomic) UIEdgeInsets cellContentViewInsets; 
@property (assign,nonatomic) BOOL showXOutButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setShowXOutButton:(BOOL)arg1 ;
-(BOOL)showXOutButton;
-(void)didTapXOutButtonForXOutView:(id)arg1 ;
-(UIEdgeInsets)cellContentViewInsets;
-(UIView *)cellContentView;
-(void)setCellContentView:(UIView *)arg1 ;
-(void)setCellContentViewInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBSideFeedUnitContentViewCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBSideFeedUnitContentViewCellDelegate>)delegate;
@end

