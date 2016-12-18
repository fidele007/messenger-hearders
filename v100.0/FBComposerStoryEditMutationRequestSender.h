/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPublishingRequestSender.h>

@protocol FBPublishingRequestSenderDelegate;
@class FBUserSession, FBGraphQLMutationHandle, NSString;

@interface FBComposerStoryEditMutationRequestSender : NSObject <FBPublishingRequestSender> {

	FBUserSession* _session;
	unsigned long long _mediaType;
	/*^block*/id _responseParsingBlock;
	FBGraphQLMutationHandle* _handle;
	id<FBPublishingRequestSenderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPublishingRequestSenderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cleanupOutstandingRequests;
-(void)sendRequestWithPublisherData:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 mediaType:(unsigned long long)arg2 responseParsingBlock:(/*^block*/id)arg3 ;
-(void)setDelegate:(id<FBPublishingRequestSenderDelegate>)arg1 ;
-(id<FBPublishingRequestSenderDelegate>)delegate;
@end

