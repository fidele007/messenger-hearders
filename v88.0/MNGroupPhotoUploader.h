/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:25:46 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBMThreadImageSetterDelegate.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class MNGroupPhotoUploaderListenerAnnouncer, NSMutableDictionary, NSString;

@interface MNGroupPhotoUploader : NSObject <FBMThreadImageSetterDelegate, FBViewerContextClassProvidable> {

	id<FBProvider> _threadImageSetterProvider;
	MNGroupPhotoUploaderListenerAnnouncer* _announcer;
	NSMutableDictionary* _threadImageSetters;
	NSMutableDictionary* _groupThreadKeyImages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)uploadingImageForGroupThreadKey:(id)arg1 ;
-(void)cancelImageUploadForGroupThreadKey:(id)arg1 ;
-(void)uploadImage:(id)arg1 forGroupThreadKey:(id)arg2 ;
-(void)threadImageSetter:(id)arg1 didSetGroupThreadKeyImage:(id)arg2 ;
-(void)threadImageSetter:(id)arg1 couldNotSetImageForGroupThreadKey:(id)arg2 withError:(id)arg3 ;
-(void)deleteFailedImageForGroupThreadKey:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end
