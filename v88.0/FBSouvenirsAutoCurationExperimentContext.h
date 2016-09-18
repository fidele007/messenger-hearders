/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:57 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBExperimentContext.h>

@interface FBSouvenirsAutoCurationExperimentContext : FBExperimentContext {

	BOOL _blurryPhotoRemovalEnabled;
	BOOL _darkPhotoRemovalEnabled;
	float _blurryPhotoDetectorThreshold;
	int _blurryPhotoDetectorResolution;
	float _blurryPhotoDetectorCenterCrop;
	float _blurryPhotoDetectorCachingEnabled;
	float _darkPhotoRemovalThreshold;

}

@property (nonatomic,readonly) BOOL blurryPhotoRemovalEnabled;                       //@synthesize blurryPhotoRemovalEnabled=_blurryPhotoRemovalEnabled - In the implementation block
@property (nonatomic,readonly) float blurryPhotoDetectorThreshold;                   //@synthesize blurryPhotoDetectorThreshold=_blurryPhotoDetectorThreshold - In the implementation block
@property (nonatomic,readonly) int blurryPhotoDetectorResolution;                    //@synthesize blurryPhotoDetectorResolution=_blurryPhotoDetectorResolution - In the implementation block
@property (nonatomic,readonly) float blurryPhotoDetectorCenterCrop;                  //@synthesize blurryPhotoDetectorCenterCrop=_blurryPhotoDetectorCenterCrop - In the implementation block
@property (nonatomic,readonly) float blurryPhotoDetectorCachingEnabled;              //@synthesize blurryPhotoDetectorCachingEnabled=_blurryPhotoDetectorCachingEnabled - In the implementation block
@property (nonatomic,readonly) BOOL darkPhotoRemovalEnabled;                         //@synthesize darkPhotoRemovalEnabled=_darkPhotoRemovalEnabled - In the implementation block
@property (nonatomic,readonly) float darkPhotoRemovalThreshold;                      //@synthesize darkPhotoRemovalThreshold=_darkPhotoRemovalThreshold - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)blurryPhotoRemovalEnabled;
-(int)blurryPhotoDetectorResolution;
-(BOOL)darkPhotoRemovalEnabled;
-(float)blurryPhotoDetectorThreshold;
-(float)darkPhotoRemovalThreshold;
-(float)blurryPhotoDetectorCenterCrop;
-(float)blurryPhotoDetectorCachingEnabled;
@end

