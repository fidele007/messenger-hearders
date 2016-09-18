/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:51 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBFeedStatusPostPublicationResponse, NSString, FBAlbumPublicationResponse, FBPlatformPublicationResponse, FBPhotoMenuUploadPublicationResponse, FBStorylinePublicationResponse, FBBackstagePostsCreatePublicationResponse;

@interface FBPublicationResponse : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBFeedStatusPostPublicationResponse* _feedStatusPostResponse_feedStatusPostResponse;
	NSString* _feedStatusEditResponse_postID;
	FBAlbumPublicationResponse* _album_albumResponse;
	FBPlatformPublicationResponse* _platform_platformResponse;
	NSString* _shareResponse_postID;
	FBPhotoMenuUploadPublicationResponse* _photoMenuUploadResponse_photoMenuUploadResponse;
	FBStorylinePublicationResponse* _storylineResponse_storylineResponse;
	FBBackstagePostsCreatePublicationResponse* _backstageResponse_backstagePostsCreateResponse;
	NSString* _reviewUpdateResponse_pageID;

}
+(id)platformWithPlatformResponse:(id)arg1 ;
+(id)feedStatusEditResponseWithPostID:(id)arg1 ;
+(id)feedStatusPostResponseWithFeedStatusPostResponse:(id)arg1 ;
+(id)shareResponseWithPostID:(id)arg1 ;
+(id)albumWithAlbumResponse:(id)arg1 ;
+(id)backstageResponseWithBackstagePostsCreateResponse:(id)arg1 ;
+(id)photoMenuUploadResponseWithPhotoMenuUploadResponse:(id)arg1 ;
+(id)reviewUpdateResponseWithPageID:(id)arg1 ;
+(id)storylineResponseWithStorylineResponse:(id)arg1 ;
-(void)matchFeedStatusPostResponse:(/*^block*/id)arg1 feedStatusEditResponse:(/*^block*/id)arg2 album:(/*^block*/id)arg3 platform:(/*^block*/id)arg4 shareResponse:(/*^block*/id)arg5 photoMenuUploadResponse:(/*^block*/id)arg6 storylineResponse:(/*^block*/id)arg7 backstageResponse:(/*^block*/id)arg8 reviewUpdateResponse:(/*^block*/id)arg9 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

