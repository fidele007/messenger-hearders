/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:28 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <UIKit/UIViewController.h>
#import <Messenger/MNMessageVideoAttachmentGetterListener.h>
#import <Messenger/MNVideoControllerDelegate.h>
#import <Messenger/MNPreviewViewController.h>

@protocol MNMessageVideoAttachmentGetterListener, MNVideoPreviewViewControllerDelegate;
@class MNVideoPreviewingContext, MNVideoController, MNVideoAttachmentGetterCoordinator, NSArray, MNVideoPreviewView, NSString;

@interface MNVideoPreviewViewController : UIViewController <MNMessageVideoAttachmentGetterListener, MNVideoControllerDelegate, MNPreviewViewController> {

	MNVideoPreviewingContext* _videoPreviewingContext;
	double _previewWidth;
	MNVideoController* _videoController;
	MNVideoAttachmentGetterCoordinator* _videoAttachmentGetterCoordinator;
	id<MNMessageVideoAttachmentGetterListener> _videoAttachmentGetterListener;
	NSArray* _previewActionItems;
	MNVideoPreviewView* _videoPreviewView;
	id<MNVideoPreviewViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVideoPreviewViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)messageVideoAttachmentRetrievedForMessageKey:(id)arg1 withURL:(id)arg2 ;
-(void)messageVideoAttachmentFailedRetrieveForMessageKey:(id)arg1 ;
-(void)messageVideoAttachmentRetrievedForMessageKey:(id)arg1 withProgress:(double)arg2 ;
-(void)_requestVideo;
-(void)videoController:(id)arg1 didCreateNewPlayerItemWithPlayer:(id)arg2 ;
-(void)videoController:(id)arg1 disassociatePlayer:(id)arg2 ;
-(void)videoController:(id)arg1 player:(id)arg2 withItem:(id)arg3 didChangeRateFrom:(float)arg4 to:(float)arg5 isAtEndOfVideo:(BOOL)arg6 ;
-(void)videoController:(id)arg1 didChangeState:(long long)arg2 ;
-(id)initWithVideoPreviewingContext:(id)arg1 videoAttachmentGetterCoordinator:(id)arg2 videoNetworker:(id)arg3 previewWidth:(double)arg4 ;
-(void)_initPreviewActionItems;
-(BOOL)isPreviewingEligible;
-(id)previewingType;
-(void)commitAction;
-(void)_openVideoViewNode;
-(void)_forwardVideo;
-(void)_saveVideo;
-(void)setDelegate:(id<MNVideoPreviewViewControllerDelegate>)arg1 ;
-(id<MNVideoPreviewViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)previewActionItems;
@end

