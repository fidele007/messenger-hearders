/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:47 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIControl.h>
#import <Messenger/MNPhotoPreviewing.h>
#import <Messenger/MNAttachmentView.h>

@protocol MNBusinessCTAHandling;
@class MNBusinessStackedContainerView, MNBusinessDefaultViewProvider, MNBusinessAttachmentViewModel, NSString;

@interface MNBusinessAttachmentView : UIControl <MNPhotoPreviewing, MNAttachmentView> {

	MNBusinessStackedContainerView* _stackedContainer;
	id<MNBusinessCTAHandling> _ctaHandler;
	MNBusinessDefaultViewProvider* _viewProvider;
	MNBusinessAttachmentViewModel* _viewModel;

}

@property (nonatomic,copy) MNBusinessAttachmentViewModel * viewModel;              //@synthesize viewModel=_viewModel - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(CGSize)sizeThatFits:(CGSize)arg1 withViewModel:(id)arg2 ;
-(id)previewablePhotoAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_didSelectMessage;
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ctaHandler:(id)arg3 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(MNBusinessAttachmentViewModel *)viewModel;
-(void)setViewModel:(MNBusinessAttachmentViewModel *)arg1 ;
@end

