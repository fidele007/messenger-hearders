/*
* This header is generated by classdump-dyld 1.0
* on Sunday, January 22, 2017 at 11:26:24 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/DB24BCEF-8CEA-41B1-9C55-8893795309EE/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBAnnouncerBase.h>
#import <Messenger/FBComposerPublicationStatusEventListener.h>

@class NSString;

@interface FBComposerPublicationStatusEventListenerAnnouncer : FBAnnouncerBase <FBComposerPublicationStatusEventListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingComposerPublication:(id)arg1 ;
-(void)retriedPublishingComposerPublication:(id)arg1 ;
-(void)attemptedPublishingComposerPublication:(id)arg1 ;
-(void)failedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryForComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingComposerPublication:(id)arg1 withError:(id)arg2 ;
-(void)pausedPublishingComposerPublication:(id)arg1 ;
-(void)successfullyPublishedComposerPublication:(id)arg1 response:(id)arg2 ;
-(void)startedWaitingForConnectivityForComposerPublication:(id)arg1 ;
-(void)cancelledPublishingComposerPublication:(id)arg1 ;
-(void)scheduledPublishingComposerPublication:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forComposerPublication:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forComposerPublication:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forComposerPublication:(id)arg2 ;
-(void)canCancelComposerPublication:(id)arg1 ;
-(void)cannotCancelComposerPublication:(id)arg1 ;
-(void)startedServerProcessingForUploadedComposerPublication:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

