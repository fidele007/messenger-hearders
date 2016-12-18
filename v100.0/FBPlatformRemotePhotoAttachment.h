/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBPlatformPhotoAttachment.h>

@class FBUserSession, UIImage;

@interface FBPlatformRemotePhotoAttachment : FBPlatformPhotoAttachment {

	FBUserSession* _session;
	BOOL _requestingImageThumb;
	UIImage* _displayImage;

}
-(BOOL)requiresUpload;
-(id)existingFBID;
-(id)nameOfServerAssetIDFieldOverridingFileURL;
-(void)setDisplayImage:(id)arg1 ;
-(id)initWithURL:(id)arg1 platformPhotoMetadata:(id)arg2 session:(id)arg3 ;
-(void)_loadThumbnail;
-(void)_loadImageWithURI:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)displayImage;
@end

