/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:29 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewModelCreator.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@class FBUserSession, NSString;

@interface MNMessageLocationAttachmentViewModelCreator : NSObject <MNAttachmentStyleViewModelCreator, FBViewerContextClassProvidable> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)viewModelForAttachment:(id)arg1 message:(id)arg2 ;
-(id)_rideRequestTitle;
-(id)viewModelForOutgoingAttachment:(id)arg1 ;
@end

