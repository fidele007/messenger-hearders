/*
* This header is generated by classdump-dyld 1.0
* on Saturday, March 18, 2017 at 1:27:38 PM Central European Standard Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/982F7718-F913-4C3D-AECC-191FDA119619/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBComposerPublicationStatusEventListener.h>

@protocol FBComposerPublicationStatusEventListener;
@class NSString;

@interface FBComposerPublicationStatusEventFilter : NSObject <FBComposerPublicationStatusEventListener> {

	/*^block*/id _filterHandler;
	id<FBComposerPublicationStatusEventListener> _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingComposerPublication:(id)arg1 ;
-(void)attemptedPublishingComposerPublication:(id)arg1 ;
-(void)successfullyPublishedComposerPublication:(id)arg1 response:(id)arg2 ;
-(void)failedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryForComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)pausedPublishingComposerPublication:(id)arg1 ;
-(void)cancelledPublishingComposerPublication:(id)arg1 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forComposerPublication:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forComposerPublication:(id)arg2 ;
-(void)retriedPublishingComposerPublication:(id)arg1 ;
-(void)scheduledPublishingComposerPublication:(id)arg1 atDate:(id)arg2 ;
-(void)startedWaitingForConnectivityForComposerPublication:(id)arg1 ;
-(void)publicationProgressedWithProgress:(double)arg1 forComposerPublication:(id)arg2 ;
-(void)canCancelComposerPublication:(id)arg1 ;
-(void)cannotCancelComposerPublication:(id)arg1 ;
-(void)startedServerProcessingForUploadedComposerPublication:(id)arg1 ;
-(id)initWithFilterHandler:(/*^block*/id)arg1 listener:(id)arg2 ;
@end

