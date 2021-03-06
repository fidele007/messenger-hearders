/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:54 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/FBInjecting.h>

@class FBProviderMapData, MNThreadImageManager, MNProfileImageViewController, MNThreadSnippetGenerator, MNThreadParticipantNameFormatter, FBEmoticonTranslator, NSString;

@interface MNInAppNotificationMessageDataSourceInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNThreadImageManager* _threadImageManager;
	MNProfileImageViewController* _profileImageViewController;
	MNThreadSnippetGenerator* _threadSnippetGenerator;
	MNThreadParticipantNameFormatter* _nameFormatter;
	FBEmoticonTranslator* _emoticonTranslator;

}

@property (nonatomic,readonly) MNThreadImageManager * threadImageManager;                              //@synthesize threadImageManager=_threadImageManager - In the implementation block
@property (nonatomic,readonly) MNProfileImageViewController * profileImageViewController;              //@synthesize profileImageViewController=_profileImageViewController - In the implementation block
@property (nonatomic,readonly) MNThreadSnippetGenerator * threadSnippetGenerator;                      //@synthesize threadSnippetGenerator=_threadSnippetGenerator - In the implementation block
@property (nonatomic,readonly) MNThreadParticipantNameFormatter * nameFormatter;                       //@synthesize nameFormatter=_nameFormatter - In the implementation block
@property (nonatomic,readonly) FBEmoticonTranslator * emoticonTranslator;                              //@synthesize emoticonTranslator=_emoticonTranslator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(MNThreadImageManager *)threadImageManager;
-(MNProfileImageViewController *)profileImageViewController;
-(FBEmoticonTranslator *)emoticonTranslator;
-(MNThreadSnippetGenerator *)threadSnippetGenerator;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNThreadParticipantNameFormatter *)nameFormatter;
@end

