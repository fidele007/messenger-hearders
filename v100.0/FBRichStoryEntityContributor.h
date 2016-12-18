/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBRichStoryEntityContributorProtocol.h>

@protocol FBRichStoryEntityActorProtocol;
@class NSString, FBIntentTarget;

@interface FBRichStoryEntityContributor : NSObject <FBRichStoryEntityContributorProtocol> {

	BOOL _includeInByline;
	NSString* _contribution;
	NSString* _fullName;
	NSString* _title;
	id<FBRichStoryEntityActorProtocol> _profile;

}

@property (nonatomic,readonly) FBIntentTarget * actorIntentTarget; 
@property (nonatomic,copy) NSString * contribution;                                   //@synthesize contribution=_contribution - In the implementation block
@property (nonatomic,copy) NSString * fullName;                                       //@synthesize fullName=_fullName - In the implementation block
@property (nonatomic,copy) NSString * title;                                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) id<FBRichStoryEntityActorProtocol> profile;              //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) BOOL includeInByline;                                    //@synthesize includeInByline=_includeInByline - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contributorWithContribution:(id)arg1 fullName:(id)arg2 profile:(id)arg3 title:(id)arg4 includeInByline:(BOOL)arg5 ;
-(FBIntentTarget *)actorIntentTarget;
-(NSString *)contribution;
-(void)setIncludeInByline:(BOOL)arg1 ;
-(id)initWithContribution:(id)arg1 fullName:(id)arg2 profile:(id)arg3 title:(id)arg4 includeInByline:(BOOL)arg5 ;
-(void)setContribution:(NSString *)arg1 ;
-(BOOL)includeInByline;
-(void)setProfile:(id<FBRichStoryEntityActorProtocol>)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id<FBRichStoryEntityActorProtocol>)profile;
-(void)setFullName:(NSString *)arg1 ;
-(NSString *)fullName;
@end

