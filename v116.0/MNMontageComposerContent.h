/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNMontageComposerContentData, NSDate, MNMontageCameraCaptureMetadata, UIColor;

@interface MNMontageComposerContent : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _mediaPicker_identifier;
	MNMontageComposerContentData* _mediaPicker_data;
	NSDate* _mediaPicker_creationDate;
	unsigned long long _mediaPicker_editTypes;
	MNMontageComposerContentData* _camera_data;
	MNMontageCameraCaptureMetadata* _camera_captureMetadata;
	unsigned long long _camera_editTypes;
	UIColor* _coloredBackground_color;
	MNMontageComposerContentData* _external_data;
	long long _external_mediaAttachmentSendType;
	unsigned long long _external_editTypes;
	NSString* _photoLibrary_identifier;
	MNMontageComposerContentData* _photoLibrary_data;
	long long _photoLibrary_mediaAttachmentSendType;
	unsigned long long _photoLibrary_editTypes;

}
+(id)externalWithData:(id)arg1 mediaAttachmentSendType:(long long)arg2 editTypes:(unsigned long long)arg3 ;
+(id)photoLibraryWithIdentifier:(id)arg1 data:(id)arg2 mediaAttachmentSendType:(long long)arg3 editTypes:(unsigned long long)arg4 ;
+(id)mediaPickerWithIdentifier:(id)arg1 data:(id)arg2 creationDate:(id)arg3 editTypes:(unsigned long long)arg4 ;
+(id)cameraWithData:(id)arg1 captureMetadata:(id)arg2 editTypes:(unsigned long long)arg3 ;
+(id)coloredBackgroundWithColor:(id)arg1 ;
-(void)matchMediaPicker:(/*^block*/id)arg1 camera:(/*^block*/id)arg2 coloredBackground:(/*^block*/id)arg3 external:(/*^block*/id)arg4 photoLibrary:(/*^block*/id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

