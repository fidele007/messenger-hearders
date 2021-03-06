/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSNumber, NSArray, FBAdCreativeOptions, FBBoostedComponentAudienceInput, FBAdCustomTargettingOptions, FBInstagramSpec;

@interface FBBoostedComponentEditData : FBGraphQLInput {

	NSString* _clientMutationId;
	NSString* _actorId;
	NSString* _pageId;
	NSString* _objectId;
	NSString* _boostedComponentApp;
	NSNumber* _stopTime;
	NSNumber* _budget;
	NSArray* _checkoutPaymentIds;
	NSString* _status;
	FBAdCreativeOptions* _creative;
	FBBoostedComponentAudienceInput* _audience;
	FBAdCustomTargettingOptions* _targetSpec;
	NSString* _flowId;
	NSString* _targetId;
	NSNumber* _bidAmount;
	NSString* _pacingType;
	NSString* _boostId;
	FBInstagramSpec* _instagramSpec;

}

@property (nonatomic,copy) NSString * clientMutationId;                             //@synthesize clientMutationId=_clientMutationId - In the implementation block
@property (nonatomic,copy) NSString * actorId;                                      //@synthesize actorId=_actorId - In the implementation block
@property (nonatomic,copy) NSString * pageId;                                       //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy) NSString * objectId;                                     //@synthesize objectId=_objectId - In the implementation block
@property (nonatomic,copy) NSString * boostedComponentApp;                          //@synthesize boostedComponentApp=_boostedComponentApp - In the implementation block
@property (nonatomic,copy) NSNumber * stopTime;                                     //@synthesize stopTime=_stopTime - In the implementation block
@property (nonatomic,copy) NSNumber * budget;                                       //@synthesize budget=_budget - In the implementation block
@property (nonatomic,copy) NSArray * checkoutPaymentIds;                            //@synthesize checkoutPaymentIds=_checkoutPaymentIds - In the implementation block
@property (nonatomic,copy) NSString * status;                                       //@synthesize status=_status - In the implementation block
@property (nonatomic,copy) FBAdCreativeOptions * creative;                          //@synthesize creative=_creative - In the implementation block
@property (nonatomic,copy) FBBoostedComponentAudienceInput * audience;              //@synthesize audience=_audience - In the implementation block
@property (nonatomic,copy) FBAdCustomTargettingOptions * targetSpec;                //@synthesize targetSpec=_targetSpec - In the implementation block
@property (nonatomic,copy) NSString * flowId;                                       //@synthesize flowId=_flowId - In the implementation block
@property (nonatomic,copy) NSString * targetId;                                     //@synthesize targetId=_targetId - In the implementation block
@property (nonatomic,copy) NSNumber * bidAmount;                                    //@synthesize bidAmount=_bidAmount - In the implementation block
@property (nonatomic,copy) NSString * pacingType;                                   //@synthesize pacingType=_pacingType - In the implementation block
@property (nonatomic,copy) NSString * boostId;                                      //@synthesize boostId=_boostId - In the implementation block
@property (nonatomic,copy) FBInstagramSpec * instagramSpec;                         //@synthesize instagramSpec=_instagramSpec - In the implementation block
-(void)setActorId:(NSString *)arg1 ;
-(void)setClientMutationId:(NSString *)arg1 ;
-(NSString *)clientMutationId;
-(NSString *)pageId;
-(FBAdCreativeOptions *)creative;
-(void)setPageId:(NSString *)arg1 ;
-(void)setFlowId:(NSString *)arg1 ;
-(NSString *)actorId;
-(void)setCreative:(FBAdCreativeOptions *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(void)setTargetSpec:(FBAdCustomTargettingOptions *)arg1 ;
-(NSString *)boostedComponentApp;
-(void)setBoostedComponentApp:(NSString *)arg1 ;
-(NSString *)flowId;
-(NSArray *)checkoutPaymentIds;
-(void)setCheckoutPaymentIds:(NSArray *)arg1 ;
-(NSNumber *)bidAmount;
-(void)setBidAmount:(NSNumber *)arg1 ;
-(NSString *)pacingType;
-(void)setPacingType:(NSString *)arg1 ;
-(FBInstagramSpec *)instagramSpec;
-(void)setInstagramSpec:(FBInstagramSpec *)arg1 ;
-(NSString *)boostId;
-(void)setBoostId:(NSString *)arg1 ;
-(FBAdCustomTargettingOptions *)targetSpec;
-(NSString *)targetId;
-(void)setTargetId:(NSString *)arg1 ;
-(NSString *)status;
-(void)setStatus:(NSString *)arg1 ;
-(void)setBudget:(NSNumber *)arg1 ;
-(void)setStopTime:(NSNumber *)arg1 ;
-(FBBoostedComponentAudienceInput *)audience;
-(void)setAudience:(FBBoostedComponentAudienceInput *)arg1 ;
-(NSNumber *)stopTime;
-(NSString *)objectId;
-(void)setObjectId:(NSString *)arg1 ;
-(NSNumber *)budget;
@end

