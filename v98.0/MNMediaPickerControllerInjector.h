/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 3, 2016 at 12:31:57 PM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/51214F70-E877-4284-9DAC-5D8552407255/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@protocol MNModalPresentation, MNPhotosDataRequesting;
@class FBProviderMapData, MNMediaPickerAccessibilityLabelGenerator, MNImageUploadCandidateStore, FBUserSession, NSString;

@interface MNMediaPickerControllerInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNMediaPickerAccessibilityLabelGenerator* _mediaPickerAccessibilityLabelGenerator;
	id<MNModalPresentation> _navigationCoordinator;
	id<MNPhotosDataRequesting> _photosDataRequester;
	MNImageUploadCandidateStore* _imageUploadCandidateStore;
	FBUserSession* _session;

}

@property (nonatomic,readonly) MNMediaPickerAccessibilityLabelGenerator * mediaPickerAccessibilityLabelGenerator;              //@synthesize mediaPickerAccessibilityLabelGenerator=_mediaPickerAccessibilityLabelGenerator - In the implementation block
@property (nonatomic,readonly) id<MNModalPresentation> navigationCoordinator;                                                  //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,readonly) id<MNPhotosDataRequesting> photosDataRequester;                                                 //@synthesize photosDataRequester=_photosDataRequester - In the implementation block
@property (nonatomic,readonly) MNImageUploadCandidateStore * imageUploadCandidateStore;                                        //@synthesize imageUploadCandidateStore=_imageUploadCandidateStore - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                        //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)navigationCoordinator;
-(MNImageUploadCandidateStore *)imageUploadCandidateStore;
-(id<MNPhotosDataRequesting>)photosDataRequester;
-(MNMediaPickerAccessibilityLabelGenerator *)mediaPickerAccessibilityLabelGenerator;
-(FBUserSession *)session;
@end
