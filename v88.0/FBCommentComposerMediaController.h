/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:50 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMediaAttachmentProtocol, FBCommentComposerMediaControllerDelegate, FBNavigationCoordinator;
@class FBUserSession, FBCommentComposerView;

@interface FBCommentComposerMediaController : NSObject {

	id<FBMediaAttachmentProtocol> _mediaAttachment;
	id<FBCommentComposerMediaControllerDelegate> _delegate;
	FBUserSession* _session;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBCommentComposerView* _commentComposerView;

}

@property (nonatomic,readonly) FBUserSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;                       //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) FBCommentComposerView * commentComposerView;                             //@synthesize commentComposerView=_commentComposerView - In the implementation block
@property (nonatomic,retain) id<FBMediaAttachmentProtocol> mediaAttachment;                             //@synthesize mediaAttachment=_mediaAttachment - In the implementation block
@property (assign,nonatomic,__weak) id<FBCommentComposerMediaControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithSession:(id)arg1 commentComposerView:(id)arg2 navigationCoordinator:(id)arg3 mediaControllerType:(int)arg4 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(void)setMediaAttachment:(id<FBMediaAttachmentProtocol>)arg1 ;
-(void)presentMediaPicker:(id)arg1 ;
-(void)_setMediaAttachment:(id)arg1 forceUpdate:(BOOL)arg2 ;
-(id<FBMediaAttachmentProtocol>)mediaAttachment;
-(FBCommentComposerView *)commentComposerView;
-(void)setDelegate:(id<FBCommentComposerMediaControllerDelegate>)arg1 ;
-(id<FBCommentComposerMediaControllerDelegate>)delegate;
-(void)reset;
-(FBUserSession *)session;
@end

