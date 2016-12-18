/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIView.h>

@protocol MNRoomShareSheetApprovalHeaderViewDelegate;
@class UILabel, FBRichTextView, UISwitch;

@interface MNRoomShareSheetApprovalHeaderView : UIView {

	UILabel* _titleLabel;
	FBRichTextView* _subtitleTextView;
	UISwitch* _approvalSwitch;
	unsigned long long _approvalMode;
	id<MNRoomShareSheetApprovalHeaderViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long approvalMode;                                             //@synthesize approvalMode=_approvalMode - In the implementation block
@property (assign,nonatomic,__weak) id<MNRoomShareSheetApprovalHeaderViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 withApprovalMode:(unsigned long long)arg2 ;
-(void)setApprovalMode:(unsigned long long)arg1 ;
-(unsigned long long)approvalMode;
-(void)_didToggleApprovals;
-(void)_updateSubviewsFromApprovalMode;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNRoomShareSheetApprovalHeaderViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNRoomShareSheetApprovalHeaderViewDelegate>)delegate;
@end

