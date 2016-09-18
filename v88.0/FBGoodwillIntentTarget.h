/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 18, 2016 at 3:26:03 PM Central European Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FF4BCEA7-3F74-4B1C-9F1F-FFFFF37A922E/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBIntentTarget.h>

@class NSString, UIImage, FBMemPerson, NSArray, FBMemGoodwillThrowbackPromotionFeedUnit;

@interface FBGoodwillIntentTarget : FBIntentTarget {

	NSString* _graphQLID;

}

@property (nonatomic,readonly) id<FBGoodwillCampaign> goodwillCampaign; 
@property (nonatomic,copy,readonly) NSString * campaignSource; 
@property (nonatomic,copy,readonly) NSString * campaignDirectSource; 
@property (nonatomic,copy,readonly) NSString * campaignRenderStyle; 
@property (nonatomic,copy,readonly) NSString * shareAutofill; 
@property (nonatomic,readonly) UIImage * sharePreviewImage; 
@property (nonatomic,copy,readonly) NSString * sharePreviewImageUrl; 
@property (nonatomic,readonly) FBMemPerson * birthdayPerson; 
@property (nonatomic,readonly) unsigned long long birthdayComposerStyle; 
@property (nonatomic,copy) NSString * birthdaySource; 
@property (nonatomic,copy,readonly) NSString * actionType; 
@property (nonatomic,copy,readonly) NSString * campaignType; 
@property (nonatomic,copy,readonly) NSArray * mediaAttachments; 
@property (nonatomic,copy,readonly) FBMemGoodwillThrowbackPromotionFeedUnit * unit; 
@property (nonatomic,copy,readonly) NSString * graphQLID;                                        //@synthesize graphQLID=_graphQLID - In the implementation block
+(id)goodwillTargetWithCampaignGraphQLID:(id)arg1 ;
+(id)goodwillTargetForBirthday:(id)arg1 ;
+(id)goodwillIntentTargetWithCampaign:(id)arg1 campaignSource:(id)arg2 renderStyle:(id)arg3 sharePreviewImage:(id)arg4 ;
+(id)goodwillIntentTargetWithBirthdayPerson:(id)arg1 birthdayComposerStyle:(unsigned long long)arg2 ;
+(id)goodwillIntentTargetWithUnit:(id)arg1 birthdayPerson:(id)arg2 birthdayComposerStyle:(unsigned long long)arg3 mediaAttachments:(id)arg4 ;
+(id)goodwillIntentTargetWithCampaign:(id)arg1 actionType:(id)arg2 campaignSource:(id)arg3 ;
+(id)goodwillIntentTargetWithVideoCampaign:(id)arg1 videoCampaignType:(id)arg2 actionType:(id)arg3 initialSource:(id)arg4 directSource:(id)arg5 sharePreviewImageUrl:(id)arg6 shareAutofill:(id)arg7 ;
-(NSString *)graphQLID;
-(id)fallbackURLs;
-(NSString *)campaignType;
-(id<FBGoodwillCampaign>)goodwillCampaign;
-(NSString *)campaignSource;
-(NSString *)campaignDirectSource;
-(NSString *)campaignRenderStyle;
-(NSString *)shareAutofill;
-(UIImage *)sharePreviewImage;
-(NSString *)sharePreviewImageUrl;
-(FBMemPerson *)birthdayPerson;
-(unsigned long long)birthdayComposerStyle;
-(void)setBirthdaySource:(NSString *)arg1 ;
-(NSString *)birthdaySource;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)actionType;
-(NSArray *)mediaAttachments;
-(FBMemGoodwillThrowbackPromotionFeedUnit *)unit;
@end

