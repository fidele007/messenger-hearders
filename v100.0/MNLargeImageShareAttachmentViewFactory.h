/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewFactory.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBIntentHandler;
@class FBUserSession, FBImageDownloader, NSString;

@interface MNLargeImageShareAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	FBImageDownloader* _imageDownloader;
	id<FBIntentHandler> _intentHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)newAttachmentView;
-(id)newAttachmentCellElementController;
-(id)initWithSession:(id)arg1 imageDownloader:(id)arg2 intentHandler:(id)arg3 ;
-(Class)attachmentViewClass;
@end

