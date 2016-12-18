/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 18, 2016 at 3:09:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D90B4FBB-2659-42DA-B3C0-734CC32E6C6C/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBGraphQLInput.h>

@class NSNumber;

@interface FBReactionCoreComponentClientSizes : FBGraphQLInput {

	NSNumber* _extra_SMALL;
	NSNumber* _small;
	NSNumber* _medium;
	NSNumber* _large;
	NSNumber* _extra_LARGE;

}

@property (nonatomic,copy) NSNumber * extra_SMALL;              //@synthesize extra_SMALL=_extra_SMALL - In the implementation block
@property (nonatomic,copy) NSNumber * small;                    //@synthesize small=_small - In the implementation block
@property (nonatomic,copy) NSNumber * medium;                   //@synthesize medium=_medium - In the implementation block
@property (nonatomic,copy) NSNumber * large;                    //@synthesize large=_large - In the implementation block
@property (nonatomic,copy) NSNumber * extra_LARGE;              //@synthesize extra_LARGE=_extra_LARGE - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)extra_SMALL;
-(void)setExtra_SMALL:(NSNumber *)arg1 ;
-(void)setSmall:(NSNumber *)arg1 ;
-(void)setMedium:(NSNumber *)arg1 ;
-(NSNumber *)large;
-(void)setLarge:(NSNumber *)arg1 ;
-(NSNumber *)extra_LARGE;
-(void)setExtra_LARGE:(NSNumber *)arg1 ;
-(NSNumber *)small;
-(NSNumber *)medium;
@end

