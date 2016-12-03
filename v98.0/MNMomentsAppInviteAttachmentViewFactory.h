/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewFactory.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, MNMomentsAppPlugin, FBProviderMapData, NSString;

@interface MNMomentsAppInviteAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBViewerContextClassProvidable> {

	FBUserSession* _session;
	MNMomentsAppPlugin* _momentsPlugin;
	FBProviderMapData* _providerMapData;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)newAttachmentView;
-(id)newAttachmentCellElementController;
-(Class)attachmentViewClass;
@end
