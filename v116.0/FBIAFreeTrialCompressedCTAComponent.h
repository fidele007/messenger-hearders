/*
* This header is generated by classdump-dyld 1.0
* on Monday, May 8, 2017 at 12:27:50 AM Central European Summer Time
* Operating System: Version 10.2 (Build 14C92)
* Image Source: /var/containers/Bundle/Application/0B364788-EFE9-4CC1-B4D1-033CC2D7E2B9/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FBSharedFramework/CKCompositeComponent.h>

@protocol FBIntentHandler;
@class FBRichStoryFreeTrialCTAEntity;

@interface FBIAFreeTrialCompressedCTAComponent : CKCompositeComponent {

	FBRichStoryFreeTrialCTAEntity* _entity;
	id<FBIntentHandler> _intentHandler;

}

@property (nonatomic,readonly) FBRichStoryFreeTrialCTAEntity * entity;                //@synthesize entity=_entity - In the implementation block
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler;              //@synthesize intentHandler=_intentHandler - In the implementation block
+(id)newWithEntity:(id)arg1 intentHandler:(id)arg2 ;
-(id<FBIntentHandler>)intentHandler;
-(void)didTapCTAButton:(id)arg1 ;
-(FBRichStoryFreeTrialCTAEntity *)entity;
@end

