/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
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

