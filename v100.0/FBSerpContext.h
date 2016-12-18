/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString;

@interface FBSerpContext : FBGraphQLInput {

	NSString* _clientResultsSessionId;
	NSString* _resultsSource;
	NSString* _experienceType;
	NSString* _tabType;
	NSString* _typeaheadSessionId;
	NSString* _typeaheadCandidateResultsSessionId;

}

@property (nonatomic,copy) NSString * clientResultsSessionId;                          //@synthesize clientResultsSessionId=_clientResultsSessionId - In the implementation block
@property (nonatomic,copy) NSString * resultsSource;                                   //@synthesize resultsSource=_resultsSource - In the implementation block
@property (nonatomic,copy) NSString * experienceType;                                  //@synthesize experienceType=_experienceType - In the implementation block
@property (nonatomic,copy) NSString * tabType;                                         //@synthesize tabType=_tabType - In the implementation block
@property (nonatomic,copy) NSString * typeaheadSessionId;                              //@synthesize typeaheadSessionId=_typeaheadSessionId - In the implementation block
@property (nonatomic,copy) NSString * typeaheadCandidateResultsSessionId;              //@synthesize typeaheadCandidateResultsSessionId=_typeaheadCandidateResultsSessionId - In the implementation block
-(NSString *)tabType;
-(void)setTabType:(NSString *)arg1 ;
-(void)setExperienceType:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)clientResultsSessionId;
-(void)setClientResultsSessionId:(NSString *)arg1 ;
-(NSString *)resultsSource;
-(void)setResultsSource:(NSString *)arg1 ;
-(NSString *)experienceType;
-(NSString *)typeaheadSessionId;
-(void)setTypeaheadSessionId:(NSString *)arg1 ;
-(NSString *)typeaheadCandidateResultsSessionId;
-(void)setTypeaheadCandidateResultsSessionId:(NSString *)arg1 ;
@end

