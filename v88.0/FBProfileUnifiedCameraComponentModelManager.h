/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:52 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBCameraComponentModelManager.h>
#import <Messenger/FBCameraComponentModelManagerInternal.h>

@protocol FBVideoCreativeToolsApplier;
@class FBCameraComponentModel, FBCameraComponentModelChangedListenerAnnouncer, FBCaptureManager, FBCaptureManagerFilterHandler, CKComponentHostingView, FBProfileUnifiedCameraModel;

@interface FBProfileUnifiedCameraComponentModelManager : NSObject <FBCameraComponentModelManager, FBCameraComponentModelManagerInternal> {

	CKComponentHostingView* _componentHostingView;
	FBCaptureManager* _captureManager;
	id<FBVideoCreativeToolsApplier> _filterHandler;
	FBCaptureManagerFilterHandler* _captureManagerFilterHandler;
	FBCameraComponentModelChangedListenerAnnouncer* _modelChangedAnnouncer;
	FBProfileUnifiedCameraModel* _profileUnifiedCameraModel;

}

@property (nonatomic,retain) FBCameraComponentModel * baseCameraModel; 
@property (nonatomic,retain) FBCameraComponentModelChangedListenerAnnouncer * modelChangedAnnouncer;              //@synthesize modelChangedAnnouncer=_modelChangedAnnouncer - In the implementation block
@property (nonatomic,retain) FBProfileUnifiedCameraModel * profileUnifiedCameraModel;                             //@synthesize profileUnifiedCameraModel=_profileUnifiedCameraModel - In the implementation block
@property (nonatomic,retain) FBCaptureManager * captureManager;                                                   //@synthesize captureManager=_captureManager - In the implementation block
@property (nonatomic,retain) id<FBVideoCreativeToolsApplier> filterHandler;                                       //@synthesize filterHandler=_filterHandler - In the implementation block
@property (nonatomic,retain) FBCaptureManagerFilterHandler * captureManagerFilterHandler;                         //@synthesize captureManagerFilterHandler=_captureManagerFilterHandler - In the implementation block
-(FBCaptureManager *)captureManager;
-(void)setCaptureManager:(FBCaptureManager *)arg1 ;
-(void)setBaseCameraModel:(FBCameraComponentModel *)arg1 ;
-(void)setComponentHostingView:(id)arg1 ;
-(FBCameraComponentModel *)baseCameraModel;
-(id<FBVideoCreativeToolsApplier>)filterHandler;
-(id)initWithProfileUnifiedCameraModel:(id)arg1 ;
-(FBCameraComponentModelChangedListenerAnnouncer *)modelChangedAnnouncer;
-(void)setModelChangedAnnouncer:(FBCameraComponentModelChangedListenerAnnouncer *)arg1 ;
-(void)setFilterHandler:(id<FBVideoCreativeToolsApplier>)arg1 ;
-(FBCaptureManagerFilterHandler *)captureManagerFilterHandler;
-(void)setCaptureManagerFilterHandler:(FBCaptureManagerFilterHandler *)arg1 ;
-(void)setVideoKeyFrame:(id)arg1 ;
-(void)setIsLoadingFrame:(BOOL)arg1 ;
-(void)setStickerOverlay:(id)arg1 ;
-(void)setTeamSelectionExists:(BOOL)arg1 ;
-(void)setCurrentProfilePictureThumbnailUri:(id)arg1 ;
-(void)setProfileUnifiedCameraModel:(FBProfileUnifiedCameraModel *)arg1 ;
-(FBProfileUnifiedCameraModel *)profileUnifiedCameraModel;
-(void)setTitle:(id)arg1 ;
@end

