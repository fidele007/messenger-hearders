/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:57 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBARServiceHosting.h>

@protocol FBARServiceHostBaseDataSource;
@class FBARLogger, FBARFaceTrackingDataProvider, FBARServiceHostEffectInfo, NSString;

@interface FBARServiceHostBase : NSObject <FBARServiceHosting> {

	unique_ptr<facebook::arservicehost::ServiceHostBaseImpl, std::__1::default_delete<facebook::arservicehost::ServiceHostBaseImpl> >* _engineServiceHost;
	FBARLogger* _logger;
	FBARLogger* _scriptLogger;
	FBARFaceTrackingDataProvider* _faceTrackingDataProvider;
	id<FBARServiceHostBaseDataSource> _dataSource;
	FBARServiceHostEffectInfo* _currentEffectInfo;
	shared_ptr<msqrd::services::INativeUIControlService>* _nativeUIControlService;
	shared_ptr<msqrd::services::ILocationDataProvider>* _locationDataProvider;

}

@property (nonatomic,retain) FBARServiceHostEffectInfo * currentEffectInfo;                                                       //@synthesize currentEffectInfo=_currentEffectInfo - In the implementation block
@property (assign,nonatomic,__weak) id<FBARServiceHostBaseDataSource> dataSource;                                                 //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) FBARFaceTrackingDataProvider * faceTrackingDataProvider;                                           //@synthesize faceTrackingDataProvider=_faceTrackingDataProvider - In the implementation block
@property (nonatomic,readonly) shared_ptr<msqrd::services::INativeUIControlService>* nativeUIControlService;                      //@synthesize nativeUIControlService=_nativeUIControlService - In the implementation block
@property (nonatomic,readonly) shared_ptr<msqrd::services::IExternalAssetProvider>* externalAssetProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IDeepLinkAssetProvider>* deepLinkAssetProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::ILocationDataProvider>* locationDataProvider;                          //@synthesize locationDataProvider=_locationDataProvider - In the implementation block
@property (nonatomic,readonly) shared_ptr<msqrd::services::ILiveStreamingService>* liveStreamingService; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IInstructionService>* instructionServiceInterface; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IIdentityService>* identityService; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IHTTPClientService>* httpClientService; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IStyleTransferProvider>* styleTransferProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IAudioService>* audioService; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::ICameraShareService>* cameraShareService; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::ILocaleService>* localeServiceInterface; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IVideoDataService>* videoDataService; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::ICaptureEventService>* captureEventServiceInterface; 
@property (nonatomic,readonly) shared_ptr<msqrd::services::IDateService>* dateServiceInterface; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::IGestureDataProvider>* gestureDataProviderInterface; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::IHandTrackingDataProvider>* handTrackingDataProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::IMotionDataProvider>* motionDataProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::ISegmentationDataProvider>* segmentationDataProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::ISlamDataProvider>* slamDataProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::IOpticalFlowDataProvider>* opticalFlowDataProvider; 
@property (nonatomic,readonly) shared_ptr<msqrd::dataprovider::IAudioBufferDataProvider>* audioBufferDataProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBARLogger * logger;                                                                               //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) FBARLogger * scriptLogger;                                                                         //@synthesize scriptLogger=_scriptLogger - In the implementation block
@property (nonatomic,readonly) EffectServiceHost* engineServiceHost; 
+(id)newWithLogger:(id)arg1 scriptLogger:(id)arg2 ;
-(void)prepareServicesForEffectWithManifest:(const Manifest*)arg1 assetsPath:(id)arg2 ;
-(void)updateServicesForEffectWithManifest:(const Manifest*)arg1 withPixelBuffer:(CVBufferRef)arg2 bufferPresentationTime:(SCD_Struct_FB180)arg3 textureCreator:(id)arg4 imageMetadata:(const ImageMetadata*)arg5 outputSize:(const FBAREngineOutputSize*)arg6 ;
-(void)resetAllServices;
-(void)willStartRenderingFrame;
-(void)didFinishRenderingFrame;
-(FBARLogger *)scriptLogger;
-(EffectServiceHost*)engineServiceHost;
-(FBARFaceTrackingDataProvider *)faceTrackingDataProvider;
-(FBARServiceHostEffectInfo *)currentEffectInfo;
-(void)updateServicesForEffectWithManifest:(const Manifest*)arg1 withLockedPixelBuffer:(const LockedPixelBuffer*)arg2 textureCreator:(id)arg3 imageMetadata:(const ImageMetadata*)arg4 outputSize:(const FBAREngineOutputSize*)arg5 ;
-(shared_ptr<msqrd::services::ICaptureEventService>*)captureEventServiceInterface;
-(shared_ptr<msqrd::dataprovider::IGestureDataProvider>*)gestureDataProviderInterface;
-(shared_ptr<msqrd::dataprovider::IAudioBufferDataProvider>*)audioBufferDataProvider;
-(shared_ptr<msqrd::services::IHTTPClientService>*)httpClientService;
-(shared_ptr<msqrd::services::IExternalAssetProvider>*)externalAssetProvider;
-(shared_ptr<msqrd::services::INativeUIControlService>*)nativeUIControlService;
-(shared_ptr<msqrd::services::IInstructionService>*)instructionServiceInterface;
-(shared_ptr<msqrd::services::IDeepLinkAssetProvider>*)deepLinkAssetProvider;
-(shared_ptr<msqrd::services::ILocationDataProvider>*)locationDataProvider;
-(shared_ptr<msqrd::services::ILiveStreamingService>*)liveStreamingService;
-(shared_ptr<msqrd::dataprovider::IOpticalFlowDataProvider>*)opticalFlowDataProvider;
-(shared_ptr<msqrd::services::IAudioService>*)audioService;
-(shared_ptr<msqrd::services::ICameraShareService>*)cameraShareService;
-(shared_ptr<msqrd::dataprovider::IMotionDataProvider>*)motionDataProvider;
-(shared_ptr<msqrd::services::ILocaleService>*)localeServiceInterface;
-(shared_ptr<msqrd::services::IIdentityService>*)identityService;
-(shared_ptr<msqrd::services::IVideoDataService>*)videoDataService;
-(shared_ptr<msqrd::services::IDateService>*)dateServiceInterface;
-(id)initWithLogger:(id)arg1 scriptLogger:(id)arg2 ;
-(void)setCurrentEffectInfo:(FBARServiceHostEffectInfo *)arg1 ;
-(shared_ptr<msqrd::services::IStyleTransferProvider>*)styleTransferProvider;
-(shared_ptr<msqrd::dataprovider::IHandTrackingDataProvider>*)handTrackingDataProvider;
-(shared_ptr<msqrd::dataprovider::ISegmentationDataProvider>*)segmentationDataProvider;
-(shared_ptr<msqrd::dataprovider::ISlamDataProvider>*)slamDataProvider;
-(void)setDataSource:(id<FBARServiceHostBaseDataSource>)arg1 ;
-(id<FBARServiceHostBaseDataSource>)dataSource;
-(FBARLogger *)logger;
@end

