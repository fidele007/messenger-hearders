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

@interface FBNotifOptionStyleQueryParams : FBGraphQLInput {

	NSString* _optionSetDisplayStyle;
	NSArray* _optionDisplayStyles;

}

@property (nonatomic,copy) NSString * optionSetDisplayStyle;              //@synthesize optionSetDisplayStyle=_optionSetDisplayStyle - In the implementation block
@property (nonatomic,copy) NSArray * optionDisplayStyles;                 //@synthesize optionDisplayStyles=_optionDisplayStyles - In the implementation block
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)optionSetDisplayStyle;
-(void)setOptionSetDisplayStyle:(NSString *)arg1 ;
-(NSArray *)optionDisplayStyles;
-(void)setOptionDisplayStyles:(NSArray *)arg1 ;
@end

