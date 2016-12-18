/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSString, NSArray;

@interface FBPrivacyData : FBGraphQLInput {

	NSString* _baseState;
	NSArray* _allow;
	NSArray* _deny;
	NSString* _tagExpansionState;

}

@property (nonatomic,copy) NSString * baseState;                      //@synthesize baseState=_baseState - In the implementation block
@property (nonatomic,copy) NSArray * allow;                           //@synthesize allow=_allow - In the implementation block
@property (nonatomic,copy) NSArray * deny;                            //@synthesize deny=_deny - In the implementation block
@property (nonatomic,copy) NSString * tagExpansionState;              //@synthesize tagExpansionState=_tagExpansionState - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)baseState;
-(void)setBaseState:(NSString *)arg1 ;
-(void)setAllow:(NSArray *)arg1 ;
-(NSString *)tagExpansionState;
-(void)setTagExpansionState:(NSString *)arg1 ;
-(NSArray *)allow;
-(NSArray *)deny;
-(void)setDeny:(NSArray *)arg1 ;
@end

