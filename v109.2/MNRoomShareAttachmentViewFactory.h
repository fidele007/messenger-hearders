/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:42 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewFactory.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol MNRoomShareAttachmentHandling, MNAvatarImageDecorating;
@class MNProfileImageViewController, FBUserSession, FBMobileConfigContextManager, NSString;

@interface MNRoomShareAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBViewerContextClassProvidable> {

	id<MNRoomShareAttachmentHandling> _roomShareAttachmentHandler;
	MNProfileImageViewController* _profileImageViewController;
	id<MNAvatarImageDecorating> _avatarImageDecoration;
	FBUserSession* _session;
	FBMobileConfigContextManager* _configManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)newAttachmentView;
-(id)newAttachmentCellElementController;
-(BOOL)_allowsAutoJoinRoom;
-(id)initWithRoomShareAttachmentHandler:(id)arg1 profileImageViewController:(id)arg2 avatarImageDecoration:(id)arg3 session:(id)arg4 configManager:(id)arg5 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(Class)attachmentViewClass;
@end

