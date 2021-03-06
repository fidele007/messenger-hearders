/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:51 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNMontageComposerCompositionConfiguration;

@interface MNMontageComposerPresentationConfiguration : FBValueObject <NSCopying> {

	NSString* _artPickerSectionId;
	MNMontageComposerCompositionConfiguration* _compositionConfig;

}

@property (nonatomic,copy,readonly) NSString * artPickerSectionId;                                              //@synthesize artPickerSectionId=_artPickerSectionId - In the implementation block
@property (nonatomic,copy,readonly) MNMontageComposerCompositionConfiguration * compositionConfig;              //@synthesize compositionConfig=_compositionConfig - In the implementation block
-(NSString *)artPickerSectionId;
-(MNMontageComposerCompositionConfiguration *)compositionConfig;
-(id)initWithArtPickerSectionId:(id)arg1 compositionConfig:(id)arg2 ;
@end

