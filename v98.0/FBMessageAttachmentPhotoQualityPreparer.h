/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:32:02 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBMessageAttachmentPhotoQualityFetching, OS_dispatch_queue;
@class FBMessageAttachmentPhotoQualityCache, NSObject, NSString;

@interface FBMessageAttachmentPhotoQualityPreparer : NSObject <FBViewerContextClassProvidable> {

	FBMessageAttachmentPhotoQualityCache* _photoQualityCache;
	FBMessageAttachmentPhotoQualityCache* _thumbnailPhotoQualityCache;
	id<FBMessageAttachmentPhotoQualityFetching> _photoQualityFetcher;
	NSObject*<OS_dispatch_queue> _internalQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)preparePhotoQualityForThread:(id)arg1 ;
-(id)photoQualityForThread:(id)arg1 ;
-(id)thumbnailPhotoQualityForThread:(id)arg1 ;
-(void)_handleFetchSuccess:(id)arg1 withThreadKey:(id)arg2 ;
@end
