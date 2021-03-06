/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:28:04 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/MNPhotoUploadListener.h>
#import <FBSharedFramework/MNVideoUploadListener.h>
#import <FBSharedFramework/FBViewerContextClassProvidable.h>

@protocol FBClock;
@class NSMutableDictionary, FBMMediaUploadBandwidthTracker, NSString;

@interface FBMMediaUploadBandwidthTrackingCoordinator : NSObject <MNPhotoUploadListener, MNVideoUploadListener, FBViewerContextClassProvidable> {

	NSMutableDictionary* _measurers;
	FBMMediaUploadBandwidthTracker* _tracker;
	id<FBClock> _clock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithClock:(id)arg1 andTracker:(id)arg2 ;
-(void)_addBandwidthMeasurer:(id)arg1 ;
-(void)_removeBandwidthMeasurerIfIdExists:(id)arg1 ;
-(void)_initBandwidthMeasurerWithTotalBytes:(unsigned long long)arg1 uniqueAttachmentIdentifier:(id)arg2 ;
-(void)_updateBandwidthMeasurerWithProgress:(double)arg1 uniqueAttachmentIdentifier:(id)arg2 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(void)photoUploadInfo:(id)arg1 didDedupeWithFbId:(id)arg2 ;
-(void)willBeginPhotoUploadWithInfo:(id)arg1 ;
-(void)photoUploadInfo:(id)arg1 didProgressTo:(double)arg2 ;
-(void)photoUploadInfo:(id)arg1 didFailWithError:(id)arg2 metrics:(id)arg3 ;
-(void)photoUploadInfo:(id)arg1 didCompleteWithFbId:(id)arg2 metrics:(id)arg3 ;
-(void)photoUploadInfo:(id)arg1 didCancelWithMetrics:(id)arg2 ;
-(void)willBeginVideoUploadWithInfo:(id)arg1 ;
-(void)videoInfo:(id)arg1 didProgressUploadTo:(double)arg2 ;
-(void)videoInfo:(id)arg1 didCompleteUploadWithFbId:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didFailToUploadWithError:(id)arg2 metrics:(id)arg3 ;
-(void)videoInfo:(id)arg1 didCancelUploadWithMetrics:(id)arg2 ;
-(void)videoInfo:(id)arg1 didDedupeWithFbId:(id)arg2 ;
@end

