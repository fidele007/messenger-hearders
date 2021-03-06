/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <FBSharedFramework/FBClassInjectable.h>

@class MNMontageContentExporterInjector, FBLazyCreator, NSString;

@interface MNMontageContentExporter : NSObject <FBClassInjectable> {

	MNMontageContentExporterInjector* _injector;
	FBLazyCreator* _filterResourcesManagerCreator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)injectorClass;
-(id)generateAnimatedPreviewImageForContent:(id)arg1 withOverlayImage:(id)arg2 mediaFilters:(id)arg3 outputSizeInPixel:(CGSize)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatePreviewImageForContent:(id)arg1 withOverlayImage:(id)arg2 mediaFilters:(id)arg3 outputSizeInPixel:(CGSize)arg4 trimRange:(SCD_Struct_FB28)arg5 completion:(/*^block*/id)arg6 ;
-(id)generateOutgoingAttachmentForContent:(id)arg1 withAssetId:(id)arg2 overlayImage:(id)arg3 mediaFilters:(id)arg4 outputSizeInPixel:(CGSize)arg5 trimRange:(SCD_Struct_FB28)arg6 muted:(BOOL)arg7 applyVideoEditsWhenTranscoding:(BOOL)arg8 photoQualitySettingOption:(unsigned long long)arg9 uploadConfiguration:(id)arg10 extraLoggingData:(id)arg11 generationProgress:(/*^block*/id)arg12 generationCompletion:(/*^block*/id)arg13 ;
-(id)generateCompositedImageWithImage:(id)arg1 overlayImage:(id)arg2 backgroundColor:(id)arg3 mediaFilters:(id)arg4 outputSizeInPixel:(CGSize)arg5 completion:(/*^block*/id)arg6 ;
-(id)generateCompositedVideoWithVideo:(id)arg1 overlayImage:(id)arg2 backgroundColor:(id)arg3 mediaFilters:(id)arg4 outputSizeInPixel:(CGSize)arg5 trimRange:(SCD_Struct_FB28)arg6 muted:(BOOL)arg7 applyVideoEditsWhenTranscoding:(BOOL)arg8 completion:(/*^block*/id)arg9 ;
-(id)initWithInjector:(id)arg1 ;
@end

