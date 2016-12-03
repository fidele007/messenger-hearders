/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNAttachmentView, MNAttachmentCellElementController;
@class MNAttachmentStyleRendererManager, MNAttachmentViewCachedFactory, UIView, NSString;

@interface MNAttachmentViewLifecycleController : NSObject {

	MNAttachmentStyleRendererManager* _attachmentStyleRendererManager;
	MNAttachmentViewCachedFactory* _attachmentViewCachedFactory;
	UIView* _containerView;
	NSString* _style;
	UIView*<MNAttachmentView> _attachmentView;
	id<MNAttachmentCellElementController> _attachmentCellElementController;

}

@property (nonatomic,readonly) UIView*<MNAttachmentView> attachmentView;                                           //@synthesize attachmentView=_attachmentView - In the implementation block
@property (nonatomic,readonly) id<MNAttachmentCellElementController> attachmentCellElementController;              //@synthesize attachmentCellElementController=_attachmentCellElementController - In the implementation block
-(id)initWithAttachmentStyleRendererManager:(id)arg1 attachmentViewCachedFactory:(id)arg2 containerView:(id)arg3 ;
-(void)setUpAttachmentViewWithViewModel:(id)arg1 controllerDelegate:(id)arg2 actionHandler:(id)arg3 threadKey:(id)arg4 style:(id)arg5 ;
-(void)tearDownAttachmentView;
-(id<MNAttachmentCellElementController>)attachmentCellElementController;
-(void)_createAttachmentCellElementControllerWithViewModel:(id)arg1 ;
-(void)_cleanup;
-(UIView*<MNAttachmentView>)attachmentView;
@end
