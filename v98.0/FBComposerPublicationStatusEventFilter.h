/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:00 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
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

