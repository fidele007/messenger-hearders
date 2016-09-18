/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:48 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNContactShareViewDelegate;
@class UIView, MNAttachmentActionButton, MNContactShareAttachmentViewModel, MNContactShareProfileInfoView, NSString;

@interface MNContactShareAttachmentView : UIControl <MNAttachmentView> {

	UIView* _separatorView;
	MNAttachmentActionButton* _actionButton;
	MNContactShareAttachmentViewModel* _contactAttachmentViewModel;
	MNContactShareProfileInfoView* _contactShareProfileInfoView;
	id<MNContactShareViewDelegate> _delegate;

}

@property (nonatomic,copy) MNContactShareAttachmentViewModel * contactAttachmentViewModel;              //@synthesize contactAttachmentViewModel=_contactAttachmentViewModel - In the implementation block
@property (nonatomic,retain) MNContactShareProfileInfoView * contactShareProfileInfoView;               //@synthesize contactShareProfileInfoView=_contactShareProfileInfoView - In the implementation block
@property (assign,nonatomic,__weak) id<MNContactShareViewDelegate> delegate;                            //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
+(CGSize)sizeThatFits:(CGSize)arg1 withContactAttachmentViewModel:(id)arg2 ;
-(void)_notifyDidSelectShare;
-(void)_handleActionTap;
-(void)setContactShareProfileInfoView:(MNContactShareProfileInfoView *)arg1 ;
-(MNContactShareAttachmentViewModel *)contactAttachmentViewModel;
-(MNContactShareProfileInfoView *)contactShareProfileInfoView;
-(void)setContactAttachmentViewModel:(MNContactShareAttachmentViewModel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MNContactShareViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNContactShareViewDelegate>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

