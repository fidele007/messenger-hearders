/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:56 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBCameraComponentModel, UIImage, NSString;

@interface FBProfileUnifiedCameraModel : FBValueObject <NSCopying> {

	BOOL _isHeismanCamera;
	BOOL _canSelectTeams;
	BOOL _isLoadingFrame;
	FBCameraComponentModel* _baseCameraModel;
	UIImage* _videoKeyFrame;
	UIImage* _stickerOverlay;
	NSString* _currentProfilePictureThumbnailUri;
	SEL _currentProfilePictureThumbnailTapHandler;
	SEL _chooseStickerTapHandler;
	SEL _videoThumbnailTapHandler;
	SEL _videoStartRecordingHandler;
	SEL _videoFinishRecordingHandler;
	NSString* _title;

}

@property (nonatomic,copy,readonly) FBCameraComponentModel * baseCameraModel;                  //@synthesize baseCameraModel=_baseCameraModel - In the implementation block
@property (nonatomic,readonly) BOOL isHeismanCamera;                                           //@synthesize isHeismanCamera=_isHeismanCamera - In the implementation block
@property (nonatomic,copy,readonly) UIImage * videoKeyFrame;                                   //@synthesize videoKeyFrame=_videoKeyFrame - In the implementation block
@property (nonatomic,copy,readonly) UIImage * stickerOverlay;                                  //@synthesize stickerOverlay=_stickerOverlay - In the implementation block
@property (nonatomic,copy,readonly) NSString * currentProfilePictureThumbnailUri;              //@synthesize currentProfilePictureThumbnailUri=_currentProfilePictureThumbnailUri - In the implementation block
@property (nonatomic,readonly) SEL currentProfilePictureThumbnailTapHandler;                   //@synthesize currentProfilePictureThumbnailTapHandler=_currentProfilePictureThumbnailTapHandler - In the implementation block
@property (nonatomic,readonly) SEL chooseStickerTapHandler;                                    //@synthesize chooseStickerTapHandler=_chooseStickerTapHandler - In the implementation block
@property (nonatomic,readonly) SEL videoThumbnailTapHandler;                                   //@synthesize videoThumbnailTapHandler=_videoThumbnailTapHandler - In the implementation block
@property (nonatomic,readonly) SEL videoStartRecordingHandler;                                 //@synthesize videoStartRecordingHandler=_videoStartRecordingHandler - In the implementation block
@property (nonatomic,readonly) SEL videoFinishRecordingHandler;                                //@synthesize videoFinishRecordingHandler=_videoFinishRecordingHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL canSelectTeams;                                            //@synthesize canSelectTeams=_canSelectTeams - In the implementation block
@property (nonatomic,readonly) BOOL isLoadingFrame;                                            //@synthesize isLoadingFrame=_isLoadingFrame - In the implementation block
-(FBCameraComponentModel *)baseCameraModel;
-(id)initWithBaseCameraModel:(id)arg1 isHeismanCamera:(BOOL)arg2 videoKeyFrame:(id)arg3 stickerOverlay:(id)arg4 currentProfilePictureThumbnailUri:(id)arg5 currentProfilePictureThumbnailTapHandler:(SEL)arg6 chooseStickerTapHandler:(SEL)arg7 videoThumbnailTapHandler:(SEL)arg8 videoStartRecordingHandler:(SEL)arg9 videoFinishRecordingHandler:(SEL)arg10 title:(id)arg11 canSelectTeams:(BOOL)arg12 isLoadingFrame:(BOOL)arg13 ;
-(BOOL)canSelectTeams;
-(BOOL)isHeismanCamera;
-(UIImage *)stickerOverlay;
-(BOOL)isLoadingFrame;
-(SEL)currentProfilePictureThumbnailTapHandler;
-(SEL)videoThumbnailTapHandler;
-(UIImage *)videoKeyFrame;
-(NSString *)currentProfilePictureThumbnailUri;
-(SEL)chooseStickerTapHandler;
-(SEL)videoStartRecordingHandler;
-(SEL)videoFinishRecordingHandler;
-(NSString *)title;
@end

